//day06.c

//20.제어문 (if문)
// 조건식에 따라서 프로그램의 실행 순서를 결정하는 제어문

//20_1)단순 if문 (if문 하나)
// 조건식을 평가한 후 참이면 영역 안에 종속문장 실행, 거짓이면 수행 X

//문법
/*
if (조건식) {
	조건식이 참일 때, 수행 후, if문 종료;
}
if문이 끝난 후, 다음 명령 실행;
*/

/*
//20_2)예시1)
#include <stdio.h>
void main() {
	int n;
	printf("정수 입력: "); scanf_s("%d", &n);

	if (n) {
		printf("%d는 참임으로 수행!\n", n);
	}
	printf("if문 종료 후, 수행됨\n");
}
*/

/*
//20_3)예시2)
#include <stdio.h>
void main() {
	int n1 = 1, n2 = 0;

	if (n1) {
		printf("1은 참임으로 수행\n");
	}
	printf("첫번째 if문 종료\n");

	if (n2) {
		printf("0은 거짓으로 수행 X\n");
	}
	printf("두번째 if문 종료\n");
}
*/

/*
//20_4)Quiz_1)
// 두 개의 정수값(n1,n2)을 입력받고, 두 개의 값을 비교해서 크면 "n1이 n2보다 크다",
// 크지않으면 "n1이 n2보다 크지 않다."를 구별해서 출력
#include <stdio.h>
void main() {
	int n1, n2;
	printf("정수 두 개 입력: "); scanf_s("%d%d", &n1, &n2);

	if (n1 > n2) {
		printf("n1이 n2보다 크다\n");
	}

	if (n1 <= n2) {
		printf("n1이 n2보다 크지 않다\n");
	}
}
*/

/*
//20_5)조건문을 이용한 짝수, 홀수 판별
#include <stdio.h>
void main() {
	int n, nmg = 0;
	printf("정수 입력: "); scanf_s("%d", &n);
	nmg = n % 2;

	if (nmg == 0) {
		printf("입력된 값 %d는 짝수\n", n);
	}

	if (nmg != 0) { //nmg == 1
		printf("입력된 값 %d는 홀수\n", n);
	}
}
*/


//21. if ~ else문
//조건식을 평가해서 참이면 if문 영역 수행, 거짓이면 else 영역 수행

//문법
/*
if (조건식) {
	if문 조건식이 참일 때, 수행 후, if문 종료;
}
else {
	if문조건이 거짓일 때, 수행 후, if문 종료;
}
if문종료 후 수행;
*/
/*
//21_1)if ~else예시1)
#include <stdio.h>
void main() {
	int n;
	printf("정수입력:"); scanf_s("%d", &n);

	if (n) {
		printf("%d는 참\n", n);
	}
	else {
		printf("%d는 거짓\n",n);
	}
}
*/

/*
//21_2)if ~ else 짝,홀
#include <stdio.h>
void main() {
	int n = 1;
	if (n % 2 == 0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	}
}
*/

/*
//21_3)if ~ else문으로 표현?
// 두 개의 값을 비교 후, 크면 크다, 작으면 작다, 같으면 같다를 판별해서 출력
#include <stdio.h>
void main() {
	int n1 = 3, n2 = 3;
	if (n1 > n2) {
		printf("크다\n");
	}
	if (n1 < n2) {
		printf("작다\n");
	}
	if (n1 == n2) {
		printf("같다\n");
	}
}
*/
//if ~ else는 총 경우의 수 결과가 2개로 나올 경우에 사용한다!

/*
//21_4)Quiz_2)두 수를 입력받아 최댓값(max)과 최솟값(min)을 판별
//(단, 크기가 같으면 최댓값으로 받게 하기)
#include <stdio.h>
void main() {
	int n1, n2;
	int max = 0, min = 0;
	printf("정수 두 개 입력: "); scanf_s("%d%d", &n1, &n2);
	if (n1 >= n2) {
		max = n1, min = n2;
	}
	else {
		max = n2, min = n1;
	}
	printf("max: %d, min: %d\n", max, min);
}
*/


/*
//21_5)Quiz_3)
// 지금 수중에 돈이 2000원 있습니다.
//만약, 커피값이 2000원보다 적거나 같으면, '커피 구입'
// 2000원보다 높으면, '수업들어가자..'를 출력하는 코딩
#include <stdio.h>
void main() {
	int money = 2000;

	if (money <= 2000) {
		printf("커피 구입\n");
	}
	else {
		printf("수업들어가자..\n");
	}
}
*/

/*
//21_6)Quiz_4)
// 숫자 하나를 입력받은 후, 다음의 조건으로 코딩 해서 출력!
//1)입력하는 숫자는 0 ~ 10 사이의 범위라고 가정되게 합니다.
//2)5보다 크거나 같다면 '5이상 10이하다'를 출력,
//3)5보다 작다면 '0이상 5미만이다'를 출력,
//4)그렇지 않다면, '크지도 작지도 않다'를 출력
#include <stdio.h>
void main() {
	int num;
	printf("정수입력: "); scanf_s("%d", &num);

	if (5 <= num && num <= 10) {
		printf("5이상 10이하다.\n");
	}
	if (0 <= num && num < 5) {
		printf("0이상 5미만이다.\n");
	}
	if (num < 0 || 10 < num) {
		printf("크지도 작지도 않다.\n");
	}
}
*/




//22.중첩 if문
//if문 안에 if문을 또 사용할 때,
/*
//문법
if (조건식1) {
	조건식1이 참이면 수행;  //없을 수도 있음
	if (조건식2) {
		조건식1이 참이며, 조건식2도 참일 때, 수행;
		if (조건식3) {
			조건식1, 2, 3 참일 때, 수행 후 if문 종료;
		}
	}
	else {
		조건식1이 참이며, 조건식2는 거짓일 때, 수행 후, if문 종료;
	}
}
else {
	조건식1이 거짓일 때, 수행 후, if문 종료;
}
*/

//22_1)중첩 if 예시
// 숫자 하나를 입력받은 후, 다음의 조건으로 코딩 해서 출력!
//1)입력하는 숫자는 0 ~ 10 사이의 범위라고 가정되게 합니다.
//2)5보다 크거나 같다면 '5이상 10이하다'를 출력,
//3)5보다 작다면 '0이상 5미만이다'를 출력,
//4)그렇지 않다면, '크지도 작지도 않다'를 출력
#include <stdio.h>
void main() {
	int num;
	printf("정수입력: "); scanf_s("%d", &num);
	if (0 <= num && num <= 10) {
		if (5 <= num) {
			printf("5이상 10이하다.\n");
		}
		else {  //if (num < 5)
			printf("0이상 5미만이다.\n");
		}
	}
	else{
		printf("크지도 작지도 않다.\n");
	}
}