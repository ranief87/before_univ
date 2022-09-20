//day16.c

//함수계속
/*
//37_7)함수의 정의 및 선언 적용 방법
#include <stdio.h>
void main() {
	//func();			//컴파일 에러: func 자체를 모름
	func1();			//원래 호출 안되는게 정상
						//그러나, 비쥬얼 스튜디오 프로그램 특성 때문에
						//함수 호출 문법에서 자료형을 주지 않으면, 디폴트값으로 int형 간주(exturn)
}

void func() {
	printf("func호출..\n");
}

int func1() {
	printf("기본적으로 함수 호출 및 선언이 없을 경우 디폴트값(int형)으로 간주\n");
	return 0;
}
*/

/*
//37_8)함수명을 미리 선언 후, 호출해서, 밑에 함수 정의 표현
#include <stdio.h>
//1)함수 선언 : 함수명 정의할 때와 동일(영역만 X)
void func();

//2)함수 호출
void main() {
	func();
}

//3)함수 정의
void func() {
	printf("func함수 호출\n");
}
*/

/*
//37_9)함수 선언의 이용도
#include <stdio.h>
//미리 선언할 시, 함수 이름을 바로 호출해서 작업하며, 수정하기도 수월해 빠르게 작업 할 수 있다!
int kg();
double it();
char bank();
void eroom();

void main() {
	kg();
	it();
	bank();
	eroom();
}

int kg() {
	printf("1)번 함수 호출\n");
	return 1;
}

double it() {
	printf("2번 호출\n");
	return 1.1;
}

char bank() {
	printf("3번 호출(%c)\n", 'a');
	return 'a';
}

void eroom(void) {
	printf("마지막호출\n");
	return;
}

*/

/*
//37_9)함수 내에 return의 사용도(두 개 이상 반환은 불가능)
#include <stdio.h>
int Two_num(int a, int b);

void main() {
	printf("%d\n", Two_num(1, 2));
}

int Two_num(int n1, int n2) {
	return n1 + 1, n2 + 2;  //return은 결과를 나타내므로 반드시, 하나만 반환!(마지막거만)
	return n1;	//return은 결과값 반환 후, 항상 강제 종료
	return n2;
}
*/

/*
//37_10)함수 내에 return이 두 개 이상 존재
#include <stdio.h>
int Return_Compare(int num1, int num2);

void main() {
	printf("3과 4중에서 큰 수는 %d이다.\n", Return_Compare(3, 4));
	printf("4과 3중에서 큰 수는 %d이다.\n", Return_Compare(4, 3));
}

int Return_Compare(int n1, int n2) {
	if (n1 >= n2)		//중괄호 생략도 가능하지만, 간단하게만 표현 할 때만 이용해주세요.
						//원칙은 { ~ } 영역임으로 옛날에 만들어진 프로그램은 인식 X
						//되도록 원칙으로 써주시기바랍니다!
		return n1;
	else
		return n2;
}
*/


/*
//37_11)Quiz_1)
//위에 코드를 이용하며, 함수 하나를 추가해서 만듭니다.
//함수는 절댓값을 구하는 함수: Abs_Compare()라는 함수를 직접 만들어보세요.
//다음과 같은 결과를 나오게 해줍니다.
#include <stdio.h>
#include <stdio.h>
int Return_Compare(int num1, int num2);
int Abs_Compare(int num);
void main() {
	//printf("%d\n", Abs_Compare(-5));   //디버깅

	int a, b;
	printf("두 개의 정수값 입력:"); scanf_s("%d%d", &a, &b);
	printf("%d과 %d중에서 절댓값이 큰 수는 %d이다.\n", a,b,Return_Compare(a, b));
	//ex) -1과 -2 중 절댓값 큰 수: -2
}
int Return_Compare(int n1, int n2) {
	if (Abs_Compare(n1) >= Abs_Compare(n2))		
		return n1;
	else
		return n2;

	//내가 만든 함수에 새로운 함수를 추가해서 기능들 조합하면, 새로운 함수를 만들 수 있다!
}

int Abs_Compare(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
	//return num;
}

*/



//38.변수의 존재기간과 접근범위
//알아야 할 것!
//1. 메모리상에 존재하는 기간은?
//2. 변수에 접근 할 수 있는 범위는?

//38_1)지역변수란?
//지역변수는 함수() 내의 '중괄호{ ~ } 안에서' 선언된 변수들은 함수의 지역변수라 합니다.
//제어문의 중괄호도 마찬가지로 그 안에 변수들이 선언되면 그 제어문의 지역변수가 됩니다.
// 정확히, 지역변수는 {} 안에 변수가 선언된 시점부터 끝날 때까지만 유효하다.

/*
//38_1_1)예시1)
#include <stdio.h>
int Func_One(void) {
	int n = 1;						// 함수 호출 이후 부터 Func_One의 n이 존재
	n++;
	printf("Func_One n: %d\n", n);
	return 0;
}									//호출 끝난 후, FUnc_One의 n은 '자동 소멸'

int Func_Two() {
	int n = 5;
	int n1 = 4;
	n++, n1--;
	printf("n & n1 : %d  %d\n", n, n1);
	return 0;
}

void main() {
	int n = 50;
	Func_One();
	Func_Two();
	printf("main n : %d\n", n);
	//printf("%d\n", n1);   //n1은 Func_Two() {} 안에서만 사용 가능
}
*/

//지역변수는 선언된 이후론 그 선언된 지역 내에서만 접근 가능
// 다른 지역에 동일한 이름이 있어라도 메모리는 별도로 서로 다르기 때문에 같은 이름 선언 가능!


//38_1_2)다양한 형태의 지역변수
//예시1) 제어문의 중괄호 내 선언된 변수도 지역변수다
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 0; n < 3; n++) {
		int num = 0;			//여기는 num = 0이 for문 돌 때마다, 소멸되고, 다시 재할당됨.
								//반복문 안에 일반적으로 변수 선언은 필요외엔 안쓰는게 좋습니다.
								//메모리에 새롭게 할당되고, 소멸하니 부담이 되요!
		++num;
		printf("%d번째 반복, 지역변수 num은 %d.\n", n + 1, num);
		printf("%p\n", &num); //반복문에선 지역변수는 똑같은 주소 메모리에 재할당된다!
	}

	if (n == 3) {
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num: %d\n", num);
	}

	//printf("%d\n", num);
}
*/

//예시2)지역변수는 외부에 선언된 동일한 변수를 가린다.
#include <stdio.h>
void main() {
	int num = 100;
	//printf("main %p\n", &num);

	if (num == 100) {
		int num = 7;			//if문 영역의 num
		//printf("if %p\n", &num);
		//num = 7;		//main에 있는 num을 사용해서 영향 O
		num += 10;
		printf("if문 내 지역변수 num: %d\n", num); //17
	}
	printf("main 함수 내 지역변수 num: %d\n", num); //100
}

//main함수의 num은 if 내의 num도 영향을 줍니다. 다만, if에 num이 따로 선언되면,
//if의 num은 main의 num을 가리고, if문 num만 됩니다.




