//day17.c

//38_2)전역변수
//전역변수는 내부가 아닌 외부접근이 가능함. 단, day17.c 내에서만 전체 지역을 영향줌
//프로그램이 시작하자마자 할당되서, 프로그램이 종료 될 때까지 존재.
//그래서, 전역변수가 하나 있으면, 동일한 변수들의 저장된 값들은 영향을 받으므로 주의!

//38_2_1)
//예시1)
/*
#include <stdio.h>
int num;			//전역변수는 기본값: 0으로 초기화됨(초기화 사용시 초기화값으로 이용)

void Add(int val);

void main() {
	printf("호출 전 num: %d\n", num);
	Add(3);
	printf("호출 후 num: %d\n", num); //Add에서 한 기능에 전역변수 num값 초기화 유지
	num++;	//전역변수 num값 1 증가
	printf("num++ 이후 num: %d\n", num);
}

void Add(int val) {
	int num;
	num += val;
}

*/
//num이 전체 소스파일(프로그램)에 영향을 주고 있다.

//잘 안쓰는 이유: 한 번 사용시 다른 지역에서 동일하게 사용될 경우
//모든 곳에 영향을 받음으로 한 번 꼬이면, 다른 함수들에도 영향을 주므로 사용하지 않는게 좋다!

/*
//39.정적변수: static
//static은 전역변수, 지역변수 모두 사용이 가능
//지역변수에 static이 붙으면, 이는 전역변수의 성격을 갖게 된다.
//static으로 선언 한 뒤부턴 이 변수는 값을 유지하는 전역변수성격으로 바뀌어서 사용됨.

//전역변수를 사용하는 이유?
//1)값을 유지할 경우(소멸 X)
//2)외부 접근이 가능(함수 입장)

//39_1)예시
#include <stdio.h>
void SimpleFunc() {
	int num1 = 0;
	static int num2 = 0;	//전역변수처럼 한 번 초기화 후, 프로그램 종료까진 값을 유지하며,
						    //재선언은 되지 X
	num1++, num2++;
	printf("num1: %d,   num2:%d\n", num1, num2);
}

void main() {
	int i;
	for (i = 0; i < 3; i++) {
		SimpleFunc();
	}
	//printf("num2는 결국 지역변수: %d\n", num2);

	//static 장점: 1)그 함수 내에서만 직접 사용 가능한 지역변수의 특징
	//			  2)값을 소멸하지 X, 유지할 수 있는 특징
}
*/

//39_3)Quiz_5)다음 프로그램은 입력값을 누적시켜 합계 출력하는 함수가 포함된 예제
//여기서 전역 변수 total을 static 변수로 알맞게 대체 해서 코드를 수정해봅니다.
//결과는 반드시 전역변수처럼 동일하게 나오게 해야합니다.
/*
#include <stdio.h>
int total = 0;

int Addtotal(int num);

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("%d번째 입력: ", i + 1); scanf_s("%d", &num);
		printf("누적: %d\n", Addtotal(num));
	}
	return 0;
}

int Addtotal(int num) {
	total += num;
	return total;
}
*/

//답
/*
#include <stdio.h>
//int total = 0;

int Addtotal(int num);

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("%d번째 입력: ", i + 1); scanf_s("%d", &num);
		printf("누적: %d\n", Addtotal(num));
	}
	return 0;
}

int Addtotal(int num) {
	static int total = 0;
	total += num;
	return total;
}
*/



//40.재귀 함수


//재귀함수란 함수 내에서 ({ ~ }) "자기 자신"을 다시 호출하는 함수
/*
//40_1)재귀함수 예시1)
#include <stdio.h>
void Refunc();

void main() {
	Refunc();
}

void Refunc() {
	printf("Refunc call\n");
	Refunc();	//자기 자신을 재호출?
}
*/

//원본에 있는 함수를 컴파일해서 저장될 때 코드를 실제 메모리 CPU에 저장되있을 때,
// 함수의 호출은 컴파일 저장된 메모리의 "복사본"이 카피되서 복사본으로 실행해서 호출


/*
//40_2)재귀함수 예시2)재귀함수탈출반환
#include <stdio.h>
void ReFunc(int num) {
	if (num <= 0) {
		return;
	}
	printf("ReFunc reCall! %d\n", num);
	ReFunc(num - 1);
}

void main() {
	ReFunc(3);
}
*/

//40_3)재귀함수 디자인
// 팩토리얼 => 정수 n의 팩토리얼: n! = n * (n-1) * (n - 2) * ... * 2 * 1
//						          = n * (n-1)!

//예) 5! = 5 * 4 * 3 * 2 * 1
//       = 5 * (5 - 1) * (5 - 2) * (5 - 3) * (5 - 4)
// 0!값: 1로 약속

/*
//팩토리얼 재귀함수 예시문
#include <stdio.h>
int Factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

void main() {
	for (int i = 0; i < 6;i++) {
		printf("%d! = %d\n", i ,Factorial(i));
	}
}
*/

/*
//41. 포인터와 함수의 이해

//41_1)함수의 인수 전달
#include <stdio.h>
void func(int num);

void main() {
	int num = 5;
	printf("%p\n", &num);
	printf("%d\n", num);
	func(num);   //num의 값을 임시 변수에 복사해서 임시 변수로 인수값 전달!
}

void func(int num) {
	printf("%p\n", &num);
	printf("%d\n", num);
}

//main의 int num과 func(int num)의 num값은 5로 같지만, 주소는 전혀 다릅니다.
// 인수값이 전달 될 때, num에 저장된 값을 갖고 있는 "보이지 않는 임시 변수"가 값을 복사해서 전달
// 실제로 전달된 것은 main의 num이 아닌 'num에 저장된 임시 변수 값'이 전달되는 것이다!
*/


//41_2)함수의 인자를 배열로 전달
#include <stdio.h>

void Func(int * ptr) {
	printf("%d  %d  %d\n", ptr[0], ptr[1], *(ptr+2));
}

void main() {
	int arr[3] = { 5,55,555 };
	Func(arr);  //&arr[0]
}

//배열명으로 인수 전달시 배열명엔 배열의 0번째 주소값이 저장되있음으로,
//그 주소를 저장할 변수는 "포인터 변수" 즉, 포인터변수를 매개변수로 이용!