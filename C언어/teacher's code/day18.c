//day18.c

//41_3)Call_by_value & Call_by_Reference

//41_3_1)Call_by_value(값을 전달 하는 형태의 함수 호출)
//(잘못된 적용 예시)
/*
#include <stdio.h>
void Swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("Swap 함수 내 n1   n2 : %d  %d\n", n1, n2);
}

void main() {
	int num1 = 10, num2 = 20;
	printf("함수호출 전  num1  num2: %d  %d\n", num1, num2);

	Swap(num1,num2);   //num1값과 num2에 저장된 값이 서로 바뀌길 기대!
	printf("호출끝  num1  num2: %d  %d\n", num1, num2);
}
*/

/*
//41_3_2)Call_by_Reference(주소값을 전달하는 형태의 함수 호출)
#include <stdio.h>

void Swap(int * nptr1, int *nptr2) {
	int temp = *nptr1;
	*nptr1 = *nptr2;
	*nptr2 = temp;
	printf("포인터변수가 가리키는 값  %d   %d \n", *nptr1, *nptr2);
}

void main(){
	int num1 = 10, num2 = 20;
	printf("함수호출 전  num1  num2: %d  %d\n", num1, num2);
	int* ptr1 = &num1;

	Swap(ptr1, &num2);   
	printf("호출끝  num1  num2: %d  %d\n", num1, num2);
}
*/

/*
//41_4)Quiz_1)
//변수 num에 저장된 값의 제곱을 계산하는 함수를 만들어주시고,
//이를 호출하는 코딩 작성
//두 가지 방법으로 함수를 정의해봅니다.
//1)Call_by_value 기반의 Square_by_value(x)
//2)Call_by_reference 기반의 Square_by_reference(*x)

#include <stdio.h>
int Square_by_value(x);
void Square_by_reference(int* x);
int Square_by_reference1(int* x);
int* Square_by_reference2(int* x);

void main() {
	int num;
	printf("정수값 입력: "); scanf_s("%d", &num);
	int res = Square_by_value(num);
	printf("1)의 제곱 결과: %d\n", res);

	int* ptr = &num;
	//Square_by_reference(ptr);

	//printf("%d\n", Square_by_reference1(ptr));
	printf("%d\n", num);

}

int Square_by_value(n) {
	return n * n;
}

void Square_by_reference(int* x) {
	int num = *x;
	*x = num * num;
}

int Square_by_reference1(int* x) {
	int num = *x;
	*x = num * num;
	return *x;
}

int* Square_by_reference2(int* x) {
	int num = *x;
	*x = num * num;
	return x;
}
*/

/*
//41_5)포인터 대상의 const 선언
#include <stdio.h>
void main() {
	//const  변수의 상수화
	int num1 = 20;
	const int num2 = 30;
	num1 = 200;
	//num2 = num1 + 30;  //const는 한 번 설정된 값은 두번다시 못바꾸게 고정시킴


	//포인터 변수가 가리키는 대상의 const 선언
	int n = 20;
	//printf("n: %d\n", n);
	const int* ptr = &n;
	n = 30;
	//printf("n: %d\n", n);
	//*ptr = 20;           //컴파일 에러(const)
	//printf("n: %d\n", n);
}
*/

//const int* ptr은 ptr -> n
//상수화가 되는 건 *ptr가 상수화가 되서, ptr이 가리키는 형태로 값 변경을 막은겁니다.!
//즉, n자체는 변경은 가능한데, 변경 못하게 하는건 ptr포인터로 접근할 경우에만 변경 X

/*
//41_6)포인터 변수의 상수화
#include <stdio.h>
void main() {
	//포인터 변수 자체에 const  선언
	int n1 = 20, n2 = 200;
	int* ptr1 = &n1;
	int* const ptr2 = &n2;
	n2 = 20;
	*ptr2 = 200;
	//ptr2 = &n1;   //컴파일 에러
}

//n2를 직접 및 포인터로 가리키는 대상의 값 변경 가능하지만,
//주소값: ptr2가 가리키는 대상(주소)를 변경 허용 하지 않습니다.
*/



//43.포인터의 포인터
//포인터 변수를 가리키는 또 다른 포인터 변수(이중 포인터, 더블 포인터 등)
//형식:  자료형** 포인터의 포인터변수명 = 포인터 변수;
/*
//43_1)예시1)
#include <stdio.h>
void main() {
	double d = 3.14;
	double* ptr = &d;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p  %9p  %9p\n", ptr, *dptr, &d);
	printf("%9g  %9g  %9g\n", *ptr, **dptr, d);

	ptr2 = *dptr;		//ptr2 = ptr;
	*ptr2 = 1.147;

	printf("%9g  %9g  %9g\n", *ptr, **dptr, d);
}
*/

//  **dptr -> *(*dptr) -> *(ptr) -> d


//43_2)예시: Swap로 포인터 변수 접근 관계 확인

/*
//43_2_1)주소값 저장된 걸 변경해서 값 바꾸기(실패)
#include <stdio.h>
void Swap1(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
	printf("주소값 변경: %d  %d\n", *p1, *p2);
}

void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("변경 전 *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);

	Swap1(ptr1,ptr2);
	printf("변경 후 *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);
}
*/


//43_2_2)이중포인터로 값 바꾸기(성공)
#include <stdio.h>
void Swap2(int** p1, int** p2) {
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("주소값 변경: %p  %p\n", *p1, *p2);
}

void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("변경 전 *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);

	Swap2(&ptr1, &ptr2);
	printf("변경 후 *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);
}



