//day08.c

//24_5)Quiz_1)스위치로 3의 배수인지 아닌지 선택해봅시다.
/*
#include <stdio.h>
void main() {
	int n;
	printf("값 입력: "); scanf_s("%d", &n);
	int nmg = n % 3;
	switch (nmg) {
	case 0: printf("%d는 3의배수다\n", n); break;
	default: printf("%d는 3의 배수가 X\n", n); break;
	}
	
}
*/

/*
//24_6)Quiz_2)다음의 선택형을 코딩

// 90선택하면, A 출력
// 80선택하면, B 출력
// 70선택하면, C 출력
// 60선택하면, D 출력
// 0선택하면, F 출력
#include <stdio.h>
void main() {
	int grade;
	printf("점수 입력: "); scanf_s("%d", &grade);
	switch (grade) {
	case 90: printf("'A'\n"); break;
	case 80: printf("'B'\n"); break;
	case 70: printf("'C'\n"); break;
	case 60: printf("'D'\n"); break;
	case 0: printf("'F'\n"); break;
	}
}
*/


//25. 제어문(반복문: for문)
//지정된 조건이 만족하는 동안 어떤 처리를 '지정한 횟수만큼 반복'해서 실행
//같은 처리(코드) 또는 유사한 코드를 간단하게 여러번 횟수만큼 실행할 때 주로 사용

//문법
//for (초기식(값); 조건식; 증감연산자[생략가능] ) {
//	반복할 기능들;
//}

/*
//25_1)for 반복문 잡아보기
#include <stdio.h>
void main() {
	//1)가장 보편적인 초기값 잡기
	//int i = 1;
	//for (i = 0; i < 2; i++) {
	//	printf("i : %d\n", i);
	//}
	//printf("i가 %d회에서 for문 끝났습니다.\n",i);

	//2)초기값을 for문 안에 선언
	//for (int i = 0; i < 2; ++i) {
	//	printf("i : %d\n", i);
	//}
	//printf("%d\n", i);    //Error: for문 안에 초기식 선정시 for문에서만 존재합니다.

	//3)증감식 생략
	//for (int i = 0; i <= 1;) {
		//i++;
		//printf("i: %d\n", i);
		//i++;
	//}

	//4)초기값 다르게 표현
	int i = 2;
	for (i = 1; i >= 0; i--) {
		printf("i: %d\n", i);
	}

}
*/



//25_2)Quiz_3) 정수 1부터 10까지의 값이 나오게 출력(for문)
/*
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 0; a < 10;a++ ) {
		printf("%d  ", a + 1);
	}
}
*/
//25_3)Quiz_4) 정수 1부터 10까지의 값 중 짝수가 나오게 출력( for + if, for문만)
//for+if
/*
#include <stdio.h>
void main() {
	for (int a = 1; a <= 10; a++) {
		if (a % 2 == 0) {
			printf("%d ", a);
		}
	}
}
*/

/*
//for문만
#include <stdio.h>
void main() {
	for (int n = 2; n < 11; n+=2) {
		printf("%d  ", n);
	}
}
*/


/*
//25_4)1부터 10까지 모든 정수의 합?  1 + 2 + .. + 9 + 10 : 55 
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a;   //sum = sum + a;   누적 합계 코드	
		//printf("%d = %d + %d\n", sum, sum - a, a);  //디버깅
	}
	printf("\n합계 : %d\n", sum);
}
*/

//25_5)초기값 다를 경우...
//1)
/*
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 1;
	int cnt = 0;
	for (a = -1; a < 11; a++) {
		sum += a;
		cnt++;
	}
	printf("합계 : %d, 횟수: %d회\n", sum, cnt);
}
*/
/*
//2)
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 1;
	int cnt = 0;
	for (a = 1; a < 11; a++) {
		if (a > 1) {
			sum += a;
			cnt++;
		}
	}
	printf("합계 : %d, 횟수: %d회\n", sum, cnt);
}

*/





//25_6)Quiz_5) 1부터 100까지 중 7의 배수의 합과 갯수를 구하는 소스 코딩
/*
#include <stdio.h>
void main() {
	int a = 1, sum = 0, cnt = 0;
	for (a; a <= 100; a++) {
		if (a % 7 == 0) {
			sum += a;
			cnt++;
		}
	}
	printf("합: %d, 갯수: %d개\n", sum, cnt);
}
*/

//25_7)Quiz_6) 1부터 10까지의 숫자를 한 개씩 누적한 값들 중 홀수만을 출력하는 소스 코딩
//단, 출력결과 =>       1, 3, 15, 21, 45, 55
#include <stdio.h>
void main() {
	int a = 0, sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a;
		if (sum % 2 == 1) {
			if (a == 10) {  //sum == 55
				printf("%d\n", sum);
			}
			else {
				printf("%d, ", sum);
			}
			//숙제: 스위치로 위의 if ~ else와 동일한 결과로 표현

			//printf("%d, ", sum);  //밑에 이스케이프와 같이 이용
		}
	}
	//printf("\b\b \n");  //백스페이스를 이용
}






