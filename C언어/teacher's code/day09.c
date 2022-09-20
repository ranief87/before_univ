//day09.c

//for문 계속
/*
//25_8)5개의 점수를 입력 받아서 입력받은 점수의
// 최댓값, 최솟값을 구하는 코드(단, 점수는 0 ~ 100 안에 있다고 가정)
#include <stdio.h>
void main() {
	int score = 0, max = 0, min = 100;
	for (int i = 0; i < 5; i++) {
		if (0 <= score && score <= 100) {
			printf("%d째 점수입력: ", i + 1); scanf_s("%d", &score);
			if (max < score) {
				max = score;
			}
			if (min > score) {
				min = score;
			}
		}
		else {
			printf("점수 잘못 입력...\n");
		}
	}
	printf("max: %d,   min: %d\n", max, min);
}
*/

/*
//26.for문의 문법 형식 중 생략했을 때..
#include <stdio.h>
void main() {
	//1)초기값생략
	//int i = 1;
	//for (; i <= 2 ; i++) {   //좋진 X
	//	printf("%d  ", i);
	//}
	
	//2)조건식이 생략되면 조건값? '참'(무한반복)
	//for (int j = 0; ; j++) {
	//	printf("%d\n", j);
	//}

	//3)초기식과 증감식을 두 개씩 사용한 반복문
	char a;
	int b;
	printf("a,b\n===============\n");
	for (a = 'A', b = 65; a <= 'Z'; a++, b++) {
		printf("%c %d\n", a, b);
	}
}
*/



//27. 중첩 for문(이중)
//문법
/*
for (초기식1; 조건식1; 증감식1) {
	반복할 명령문1;
	for (초기식2; 조건식2; 증감식2) {
		반복할 명령문2;
	}
}
*/

/*
//27_1)반복문 안의 반복문이 들어갈 때 유의점
#include <stdio.h>
void main() {
	//27_1_1)for1의 i가 2번 돌 때, for2의 j가 3번 돌 때, k는 6번 반복 확인
	//int i, j, k = 0;
	//for (i = 1; i <= 2; i++) {
	//	for (j = 1; j <= 3; j++) {
	//		k++;
	//		printf("i = %d,   j = %d,  k = %d번\n", i, j, k);
	//	}
	//}

	//27_1_2)외부문, 내부문 구별
	//int a = 0, b = 0;
	//for (a = 1; a <= 2; a++) {
	//	printf("외부1: for문이 %d번째 시작~\n", a);
	//	for (b = 1; b < 4; b++) {
	//		printf("  내부: for문이 %d번째 턴\n", b);
	//	}
	//	printf("외부2: for문이 %d 턴 start\n", a);
	//}

	//27_1_3)내부 for문의 주의점
	//1)for문에 초기식 설정(문제 X)
	//for (int a = 1; a < 3;a++) {
	//	for (int j = 1; j < 3; j++)
	//		printf("a = %d,  j = %d\n", a, j);
	//}

	//2)바깥 초기식을 이용()
	int i = 1, j = 1;
	for (i; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {  //내부for문의 초기값은 다시 초기화 시켜서
								    //재반복을 하게 해줘야합니다.!
			printf("i = %d, j = %d\n", i, j);
		}
	}
	printf("i: %d, j: %d\n", i, j);
}
*/


//27_2)Quiz_1)
//27_2_1) 구구단 출력       (가로로 몇 단씩)

//2 * 1 = 2    2 * 2 = 4  ...    2 * 9 = 18
//3 * 1 = 3    3 * 2 = 6  ...    3 * 9 = 27
//...
//9 * 1 = 9	  9 * 2 = 18 ...    9 * 9 = 81
/*
#include <stdio.h>
void main() {
	int a = 2, b = 1;
	for (a = 2; a < 10;a++) {
		printf("%d단: \t", a);
		for (b = 1; b <= 9; b++) {
			printf("%d * %d = %d\t", a, b, a * b);
		}
		printf("\n");
	}
}
*/


//27_2_2)  구구단 출력      (세로로 몇 단씩)
//2단          3단               9단
//2 * 1 = 2    3 * 1 = 3  ...    9 * 1 = 9
//2 * 2 = 4    3 * 2 = 6  ...    9 * 3 = 18
//...
//2 * 9 = 18   3 * 9 = 27 ...    9 * 9 = 81
/*
#include <stdio.h>
void main() {
	int a = 2, b = 1;
	//for (int k = 2; k < 10; k++) {
	//	printf("%d단\t\t", k);
	//}
	//printf("\n");
	for (a = 1; a < 10; a++) {
		if (a == 1) {
			for (int k = 2; k < 10; k++) {
				printf("%d단\t\t", k);
			}
			printf("\n");
		}
		for (b = 2; b <= 9; b++) {
			printf("%d * %d = %d\t", b, a, a * b);
		}
		printf("\n");
	}
}
*/



//28.제어문 - while문
// for문과 동일하게 반복
// 조건이 거짓일 때까지 무한 반복

//문법
/*
자료형 변수명 = 초기값;
while (조건식) {
	반복할 명령문(조건식이 거짓일 때까지 무한);
	//증감식(선택)
}
*/

//28_1)무한 반복
/*
#include <stdio.h>
void main() {
	int i = 1;
	while (i++) {
		printf("i = %d\n", i);
	}
}
*/


/*
//28_2) i가 10보다 작거나 같을 때까지 반복 ( 0~10)
#include <stdio.h>
void main() {
	int i = 0;
	while(i <= 10) {
		printf("i : %d\n", i++);
	}
}
*/

/*
//28_3) 초기값 i = 10, i가 0될 때까지 반복(출력)
#include <stdio.h>
void main() {
	int i = 10;
	while (i) {   //i > 0   , i != 0
		printf("i:%d\n", i);
		i--;
	}
	printf("i는 %d에서 멈춤\n", i);
}
*/


//28_4)Quiz_3) 1 ~ 100까지의 합 (while문)
/*
#include <stdio.h>
void main() {
	int n = 1;
	int sum = 0;
	while (n < 101) {
		sum += n;  //sum = sum + n;
		n++;
	}
	printf("합: %d\n", sum);
}
*/

//28_5)Quiz_4) 1 ~ 100까지의 수 중에서 3과 5의 공배수의 갯수를 구하는 소스 코딩
#include <stdio.h>
void main() {
	int n = 1, cnt = 0;
	while (n <= 100) {
		if (n % 3 == 0 && n % 5 == 0) {
			cnt++;
		}
		n++;
	}
	printf("갯수: %d개\n", cnt);
}


