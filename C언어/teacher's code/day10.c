//day10.c


//29.반복문: do ~ while문
// while문과 사용법이 동일
// 조건식 비교 전 먼저 do문항 안에 있는 명령을 실행하고 조건을 판단.


//문법
/*
초기식;
do {
	
	먼저 반복할 거 수행문;

}while (조건식);
*/

//29_1)예시(for,while과 do ~ while 차이)
/*
#include <stdio.h>
void main() {
	int i = 0;
	for (i; i; i++) {
		printf("i: %d\n",i);
	}

	while (i) {
		printf("i: %d\n", i);
		i++;
	}

	do {
		printf("i: %d\n", i);
		i++;
	} while (i);
	// 처음 먼저 수행 후, 조건식 판별만 다르고, 나머지는 동일
}
*/


//29_2)Quiz_1)  할아버지의 연세는 68세이다.
//              할아버지는 손자의 나이보다 5배에 3살이 더 많을 때,
//				손자의 나이는 몇 살인가?

/*
#include <stdio.h>
void main() {
	//1)for문
	int son = 1;
	//for (son; son * 5 + 3 != 68;son++) {
	//	;
	//}
	//printf("손자: %d살\n", son);

	//2)while문
	//son = 1;
	//while (son * 5 + 3 != 68) {
	//	son++;
	//}
	//printf("손자: %d살\n", son);

	//3)do ~ while문
	son = 0;
	do{
		son++;
	} while (son * 5 + 3 != 68);
	printf("손자: %d살\n", son);
}


*/



//30.분기문
// 반복에서 제어권을 강제로 변경해주는 기법
// break, continue, goto

// break;
// 반복 실행 중  내가 원할 때, 중지용으로 사용
// break는 한 번에 한 개의 반복만 중지 가능
// { } 영역 중 if문 자체에만 사용이 되지 X
// break는 반복용으로 사용되는 곳에서만 사용 된다!

//30_1)if문 만으론 break가 안된다.
/*
#include <stdio.h>
void main() {

	printf("break전 출력\n");
	if (0 < 3) {
		break;
	}
	printf("break후 출력\n");
}
*/
/*
//30_2)break문
#include <stdio.h>
void main() {
	int a = 1;
	//1)for
	printf("break전\n");
	for (a; a <= 100000; a++) {
		//break;
		printf("a = %d\n", a);
		break;
	}
	printf("break후\n");

	//2)while
	while (1) {
		printf("while: break전\n");
		break;
		printf("while: break후\n");
	}
	printf("while문 종료\n");

	//3)do ~ while
	do {
		//break;
		printf("\n");
	} while (1);
	printf("프로그램 종료\n");
}
*/

/*
//30_3)숫자 3을 입력 받을 때까지 무한 출력
#include <stdio.h>
void main() {
	int a;
	while (1) {
		printf("숫자 입력:"); scanf_s("%d", &a);
		if (a == 3) {
			printf("숫자 3 입력받아서 프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("다시입력\n");
		}
	}
}
*/


//30_4)Quiz_2)숫자 입력 받을 때, 범위는 0 ~ 100 사이라고 가정
//            내가 원하는 숫자를 찾으면 프로그램 종료 되게 만들어봅니다.
//            조건1)만약, 음수나 101이상 값을 넣었으면, 잘못입력했다라는 조건 잡기
//			  조건2)원하는 숫자를 찾으면, 프로그램 종료
//			  조건3)원하는 숫자가 근접하면, 힌트 주는 식으로 만들기
//			  조건4)기회는 10번 되게 반복잡기

/*
#include <stdio.h>
void main() {
	int num;
	int chance = 10;
	while (chance--) {
		printf("원하는 숫자 입력:"); scanf_s("%d", &num);
		if (num < 0) {
			printf("원하는 숫자 '음수'는 제외합니다. 다시 입력합니다.\n");
		}
		else if (num > 100) {
			printf("범위를 벗어났습니다. 0 ~ 100값 중 하나를 입력하세요.\n");
		}
		else if (num == 98) {
			printf("원하는 숫자: %d를 찾았습니다.\n", num);
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if (90 <= num && num <= 100) {
			printf("90이상 100이하 숫자 중에 있습니다.!\n");
		}
		else {
			printf("원하는 숫자가 아닙니다. 다시 입력하세요.\n");
		}
		printf("기회는 총%d번남았습니다.\n", chance);
	}
}
*/



//30_5)goto문
// 프로그램 내에 지정한 곳으로 제어권을 강제로 이동

//문법
//1)goto 전에 위치 지정(반복문처럼 보임)
/*
지정할 명:

명령문들;

goto 지정할 명;  //지정할 명 이름은 알파벳으로만 표현:  a, aa 등
*/

//2)goto 후에 위치 지정
/*
goto 지정할 명;

명령문들;

지정할 명:
*/

/*
//30_6)예시
#include <stdio.h>
void main() {
	//1)goto 전
	//int a = 1;
//a:
	//printf("a = %d\n", a++);
	//goto a;

	//2)goto 후
	int a = 1;
	goto aa;
	printf("a = %d\n", a);
aa:
	printf("점프\n");
}
*/

//30_7)continue문
// 반복문이 실행해야 할 명령 중 아직 실행하지 않은 명령들이 있을 경우,
// continue문을 만나면 반복문 처음으로 이동해서 조건 판별

/*
//30_8)예시
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 1; a <= 20; a++) {
		if (a % 2 != 0) {
			continue;
		}
		printf("a = %d\n", a);
	}
}
*/

/*
//30_9)Quiz_3) 1 ~ 30까지의 숫자 중 2의 배수, 3의 배수, 5의 배수가 아닌 것만 출력
//         1,7,11,13,17,19,23,29
#include <stdio.h>
void main() {
	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 ) {
			continue;
		}
		printf("%d ", i);
	}
}
*/



//반복문들 응용 문제
//Quiz)별 모양 찍기
/*

*****
*****
*****
*****
*****

//별 문자열은
//printf("*")로 이용
//반복문들을 이용해서 위의 결과 나타내기
*/


#include <stdio.h>
void main() {
	int i = 0, j = 0;
	for (i; i < 5; i++) {
		j = 0;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
	}
}