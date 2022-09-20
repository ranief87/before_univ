//day13.c

//모듈 계속

//33_4)예시4)Sleep(밀리초);
// <windows.h> 내장
// 인수값은 밀리 초 (1/1000)단위
/*
#include <stdio.h>
#include <time.h>
#include <windows.h>
void main() {
	for (int i = 0; i < 100;i++) {
		printf("%d\n", time(NULL));
		Sleep(1000);  //1초 후, 실행
	}
}
*/

/*
//33_5)예시5)system("명령어")함수
// 콘솔창에서 사용하는 명령어를 실행 가능하게 하는 함수
// 마찬가지로 <windows.h> 내장
#include <stdio.h>
#include <Windows.h>
void main() {
	int i = 0;
	while (1) {
		for (i = 0; i < 10; i++) {
			printf("i:%d\n", i);
			Sleep(50);
		}
		printf("\n");
		//system("cls");  //cmd에서 화면 내용 깨끗하게 해줌
		//system("pause");  // 시스템 동작을 잠시 중단(아무거나 키 누르면 다시 동작)

		//system("shutdown -s -t 0"); //윈도우 시스템 종료 명령어...
	}
}
*/



//34. 포인터
// 포인터: 무언가를 가리키는 것
// 포인터 변수: -무언가를 가리키는 변수, "주소 값을 담는 변수"(주 기억장치:CPU의 특정 주소)
// 형식:  자료형 *포인터변수명 = &변수명;

/*
//예1)
#include <stdio.h>
void main() {
	//정수와 주소값
	//int n = 10;
	//int* ptr = &n;     //정수형 포인터 변수: int *ptr;
	//printf("n : %d,   *ptr : %d\n", n, *ptr);

	//printf("%d\n", ptr);  //정수형태는 맞으나 메모리 주소값은 반드시, 16진수로 표현
	//printf("%d\n", &n);

	//%p: 포인터로 서식지정자 해서 주소값을 나타내줌(16진수)
	//printf("%p\n", ptr);  //ptr에 저장된 값: &n
	//printf("%p\n", &n);   //n의 주소를 출력

	//printf("%p\n", *ptr);  *ptr은 int형 포인터 변수로 ptr에 저장된 주소를 가리키는 값

	//실수와 주소값
	//double d = 3.14;
	//double* ptrd;
	//ptrd = &d;
	
	//float f = 3.14f;
	//int* ptrf = &f;

	//printf("d: %g, *ptrd : %G\n", d, *ptrd);
	//printf("f: %g, *ptrf : %f\n", f, *ptrf);
	// float형 포인터변수로 선언해야 float형 주소에 있는 값을 이용할 수 있다!

	//문자와 주소값
	char ch = 'A';
	char* pch1, * pch2;
	pch1 = &ch;
	pch2 = pch1;

	printf("%c\n", ch);
	printf("%c\n", *pch1);
	printf("%c\n", *pch2);
	printf("\n");
	printf("%p\n", &ch);
	printf("%p\n", pch1);
	printf("%p\n", pch2);

	printf("&pch1: %p\n", &pch1);
	printf("&pch2: %p\n", &pch2);

}

*/

/*
//예2)
#include <stdio.h>
void main() {
	int n = 10;
	int* ptr = &n;
	//int ptr1 = &n;     //n의 주소값을 정수형 ptr1변수명에 저장

	//printf("n: %d,  *ptr: %d,  ptr1: %d\n", n, *ptr, ptr1);
	//ptr1은 저장된 것만 출력함으로 의미 X

	*ptr = 20;
	//*ptr1 = 30;  //Error: ptr1은 int형 변수명이라 포인터라는 개념이 존재 X

	printf("*ptr: %d    n : %d\n", *ptr, n);
	
}
*/

/*
//34_1)포인터 이해1
#include <stdio.h>
void main() {
	int n1 = 10;
	double n2 = 20.12;
	
	int* pn1 = &n1;
	double* pn2;
	pn2 = &n2;

	*pn1 += 1;
	*pn2 -= 0.12;

	printf("n1 : %d,  n2 : %.2lf\n", n1, n2);   //변수에 저장된 값  :  11,  20.00
	printf("&크기		  : %dB,  %dB\n", sizeof(&n1), sizeof(&n2));  
	printf("주소 변수 크기 : %dByte,   %dByte\n", sizeof(pn1), sizeof(pn2));
	printf("포인터형 크기  : %d바이트,   %d바이트\n", sizeof(*pn1), sizeof(*pn2));
}
*/

/*
//34_2)포인터 이해2
#include <stdio.h>
void main() {
	int num = 1;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;      //*ptr1++  (연산 우선이 먼저, ptr1의 주소값을 1 증가 후, 가리킴..)
	++(* ptr2);
	//포인터변수와 증감 연산자 사용시 반드시, 포인터로 가리키게 된 다음, 증감한다(괄호 사용)

	printf("%d\n", num); //3
}
*/

/*
//34_3)포인터 이해3) 입력을 주소로 이용
#include <stdio.h>
void main() {
	int num;
	int* ptr_num = &num;
	printf("정수 입력: "); scanf_s("%d", ptr_num);
	printf("num: %d     *ptr_num: %d\n", num, *ptr_num);
	printf("&num:%p     ptr_num: %p\n", &num, ptr_num);
}
*/


//34_5)Quiz_1)

// 주어진 값(10), (20)을 초기화 후, 포인터형 변수로 가리키게 합니다.
// 이 때, 포인터형 변수에 10저장된 변수에 10을 더하고, 20저장된 변수에 10을 감소시킨후,
// "두 포인터 변수가 가리키는 대상을 서로 바꿉니다.", 즉, 서로 주소 포인터 가리키는 걸 바꾸면됩니다.
// 바꿔서 된 결과 출력

#include <stdio.h>
void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2, * temp;
	printf("%d %d \n", *ptr1, *ptr2);

	(*ptr1) += 10;
	(*ptr2) -= 10;
	//printf("%d %d \n", *ptr1, *ptr2); 

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d \n", *ptr1, *ptr2);
}


