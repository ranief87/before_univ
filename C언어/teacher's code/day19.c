//day19.c

//47. 구조체
//구조체(Structure)은 하나 이상의 변수(포인터변수 및 배열 다 포함)를 묶어서 "완전 새로운 자료형"을
//사용자가 직접 정의하는 새 자료형입니다.


//문법
/*
struct 임의의구조체명 {
	int 경험치;
	double 돈;
	char 정보;
};
*/
//임의의구조체명은 int,double,char 각 1개씩 가진 자료형 이름을 선언
//이 임의의구조체명을 "사용자 정의 자료형"이라고 합니다.(구조체자료형)

/*
//47_1)구조체자료형 사용 방법
#include <stdio.h>
//1)구조체 정의
struct person {		//person 구조체자료형 생성
	char name[20];	//person 안에 이름이라는 변수명
	int age;		//person 안에 나이라는 변수명
	char phone[14]; //person 안에 전화번호라는 변수명
};	//구조체자료형 안에 들어있는 자료형을 "멤버자료형"

//2)구조체 이용(선언)
void main() {
	struct person p1;   //구조체자료 선언
	struct person p2 = { "최강", 28, "010-4900-1532" }; //구조체자료 초기화

	//3)구조체 안에 있는 멤버자료형 접근
	printf("p2의 이름: %s\n", p2.name); //구조체변수명.멤버변수명 : .을 이용해서 안으로 접근
	printf("p2의 나이: %d\n", p2.age);
	printf("p2의 전번: %s\n", p2.phone);
}
*/

/*
//47_2)구조체 멤버 변수에 접근해서 값 입력시 문제점
#include <stdio.h>
#include <string.h>      //strcpy_s()함수 호출을 위해 전처리기

struct info {
	int num;
	char name[20];
};

void main() {
	struct info p1;
	printf("번호1 입력: "); scanf_s("%d", &p1.num);
	printf("이름1 입력: "); scanf_s("%s", p1.name, sizeof(p1.name));

	printf("=========회원==========\n");
	printf("번호 : %d\n", p1.num);
	printf("이름 : %s\n", p1.name);
	printf("======================\n");

	//문제점
	struct info p2;
	p2.num = 2;
	//p2.name = "최강";
	//" ~ "는 들어가는 문자 크기에 따라 변하는 특징으로, 구조체 변수명에 접근 할수 X
	//초기값 및 입력 없이 초기화 하는 방법:  "문자열을 복사하는 함수를 이용"
	//strcpy_s(char *, sizeof(), const char* )
	
	strcpy_s(p2.name, sizeof(p2.name),"최강");

	printf("=========회원==========\n");
	printf("번호 : %d\n", p2.num);
	printf("이름 : %s\n", p2.name);
	printf("======================\n");
}
*/

/*
//47_3)구조체 정의와 동시에 구조체변수명 선언 및 초기화까지
#include <stdio.h>
//1)구조체 정의 및 변수명 선언
struct number {
	int n1;
	int n2;
} num1, num2;

//2)초기화도 미리 선정 가능
struct point {
	int xpos;
	int ypos;
} pos1 = { 1,2 };

void main() {
	num1.n1 = 1, num1.n2 = 2;
	num2.n1 = 10, num2.n2 = 20;
	printf("num1.n1: %d\n", num1.n1);
	printf("num2.n2: %d\n", num2.n2);

	printf("pos1좌표: (%d, %d)\n", pos1.xpos, pos1.ypos);
}

*/


//48.구조체와 배열 그리고 포인터
/*
//48_1)구조체와 배열 예시
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

void main() {
	struct pt arr[3];
	int i = 0;

	for (i = 0; i < 3; i++) {
		printf("점의 좌표(x,y) 입력:"); scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++) {
		printf("%d번: (%d, %d)\n", i + 1, arr[i].xpos, arr[i].ypos);
	}
}
*/


//48_2)구조체 변수와 포인터
/*
struct pt pos = { 11,22 };
struct pt* pptr = &pos;     //구조체변수명 pt의 포인터 변수 선언

*pptr.xpos : 11   //pptr이 가리키는 pos변수명의 멤버 xpos에 접근

위의 것을  pptr->xpos : 11로 위와 동일한 결과를 나타냄
즉, 구조체에서  ->연산자로  *와 .을 한번에 표현이 가능
*/
/*
//48_3)구조체와 포인터 예시
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

void main() {
	struct pt pos = { 1,2 };
	struct pt* pptr = &pos;
	printf("초기좌표: (%d,%d)\n", pos.xpos, pos.ypos);

	(*pptr).xpos += 4;   //pptr은 pos를 가리키므로 pos 안에 멤버를 가리킬 순 X
	printf("x좌표 4 누적: (%d,%d)\n", pos.xpos, (*pptr).ypos);

	pptr->ypos += 5;
	printf("y좌표 5 누적: (%d,%d)\n", pptr->xpos, pptr->ypos);
}
*/



//48_4)구조체의 멤버에 구조체 변수 선언
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

struct circle {
	double radius;
	struct pt* center;
};


void main() {
	struct pt cen = { 2,7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };

	printf("ring의 반지름: %g\n", ring.radius);
	printf("ring의 중심 : (%d, %d)\n", ring.center->xpos, ring.center->ypos);
}




















