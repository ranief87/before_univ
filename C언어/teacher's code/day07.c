//day07.c

//23. 다중 if문
/*
//문법
if (조건식1) {
	조건식1이 참일 때, 수행 후, if문종료;
}
else if (조건식2) {
	조건식1은 거짓이고, 조건식2가 참 일 때, 수행 후, if문종료;
	//조건식1이 참이면, 발동 X
}
else if (조건식3) {
	조건식1과 2가 거짓이고, 조건식3이 참일 때, 수행 후, if문종료;
}
else {
	위에 조건식들이 다 거짓일 때, 수행 후, if문 종료;
}
*/

//23_1)주어진 값(24)가 있을 때, 다음 조건을 만족할 때, 출력해보기
//10보다 큰 수다.
//20보다 큰 수다.
//30보다 큰 수다.

/*
//1.단순if문
#include <stdio.h>
void main() {
	//(10보다 큰 수, 20보다 큰 수 참)
	int n = 24;
	//if (n > 10) {
	//	printf("10보다 크다.\n");
	//}
	//if (n > 20) {
	//	printf("20보다 크다.\n");
	//}
	//if (n > 30) {
	//	printf("30보다 크다\n");
	//}

	//20보다 큰 수만 참
	if (n > 10 && n <= 20) {
		printf("10보다 크다.\n");
	}
	if (n > 20 && n <= 30) {
		printf("20보다 크다.\n");
	}
	if (n > 30) {
		printf("30보다 크다\n");
	}
}
*/

/*
//2.중첩 if문만
#include <stdio.h>
void main() {
	int n = 24;
	//(10보다 큰 수, 20보다 큰 수 참)
	//if (n > 10) {
	//	printf("10보다 크다\n");
	//	if (n > 20) {
	//		printf("20보다 크다\n");
	//		if (n > 30) {
	//			printf("30보다 크다\n");
	//		}
	//	}
	//}

	//20보다 큰 수만 참
	if (n > 10) {
		if (n > 20) {
			if (n > 30) {
				printf("30보다 크다\n");
			}
			else {
				printf("20보다 크다\n");
			}
		}
		else {
			printf("10보다 크다\n");
		}
	}
}

*/

//10보다 큰 수다.
//20보다 큰 수다.
//30보다 큰 수다.

/*
//3.다중if문
#include <stdio.h>
void main() {
	int n = 24;
	if (n > 30) {
		printf("30보다 크다\n");
	}
	else if (n > 20) {
		printf("20보다 크다\n");
	}
	else if (n > 10) {
		printf("10보다 크다\n");
	}
}
*/

/*
//23_2)다중if문 예시2)
//조건
//1) 0 < num <= 10
//2) 0 > num
//3) 10 < num
//4) 범위에 속하지 X
#include <stdio.h>
void main() {
	int num;
	printf("입력값: "); scanf_s("%d", &num);
	if (0 < num && num <= 10) {
		printf("0초과 10이하(%d)\n", num);
	}
	else if (num < 0) {
		printf("0미만 (%d)\n", num);
	}
	else if (num > 10) {
		printf("10초과 (%d)\n", num);
	}
	else {
		printf("0값: %d\n", num);
	}
}
*/



//23_4)Quiz_3)3과 5의 배수를 구분하는 조건문을 코딩(단순if문,중첩if문,다중if문)
//1)3과 5의 배수(공배수)
//2)3의 배수
//3)5의 배수
//4)3의 배수도 5의 배수도 아닌 값
/*
//단순if문
#include <stdio.h>
void main() {
	int n;
	printf("정수값: "); scanf_s("%d", &n);

	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d는 3과 5의 배수다.\n", n);
	}
	if (n % 3 == 0 && n % 5 != 0) {
		printf("%d는 3의 배수다.\n", n);
	}
	if (n % 5 == 0 && n % 3 != 0) {
		printf("%d는 5의 배수다.\n", n);
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d는 5의 배수도 3의 배수도 아니다.\n", n);
	}
}
*/

//중첩if
//1)코드가 많고, 중복이 되서 좋진 X
/*
#include <stdio.h>
void main() {
	int n;
	printf("정수값: "); scanf_s("%d", &n);
	if (n % 3 == 0) {
		if (n % 5 == 0) {
			printf("%d는 3과 5의 배수다.\n", n);
		}
		else {
			printf("%d는 3의 배수다.\n", n);
		}
	}
	if (n % 5 == 0) {
		if (n % 3 == 0) {
			printf("%d는 3과 5의 배수다.\n", n);
		}
		else {
			printf("%d는 5의 배수다.\n", n);
		}
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d는 5의 배수도 3의 배수도 아니다.\n", n);
	}
}
*/

/*
//2)좋진 X(else문이 복잡해짐)
#include <stdio.h>
void main() {
	int n;
	printf("정수값: "); scanf_s("%d", &n);

	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d는 5의 배수도 3의 배수도 아니다.\n", n);
	}
	else {   //n % 3 == 0 || n % 5 == 0
		if (n % 3 == 0) {
			if (n % 5 == 0) {
				printf("%d는 3과 5의 배수다.\n", n);
			}
			else {
				printf("%d는 3의 배수다.\n", n);
			}
		}
		if (n % 5 == 0 && n % 3 != 0) {
			printf("%d는 5의 배수다.\n", n);
		}
	}

}
*/
/*
//3)중첩if문 (단, else문은 되도록이면 조건식이 없는 것이 좋다.)
#include <stdio.h>
void main() {
	int n;
	printf("정수값: "); scanf_s("%d", &n);

	if (n % 3 == 0) {
		if (n % 5 == 0) {
			printf("%d는 3과 5의 배수다.\n", n);
		}
		else {
			printf("%d는 3의 배수다.\n", n);
		}
	}
	else {    //n % 3 != 0
		if (n % 5 == 0) {
			printf("%d는 5의 배수다.\n", n);
		}
		else {
			printf("%d는 5의 배수도 3의 배수도 아니다.\n", n);
		}
	}
}
*/
/*
//다중if문
//1)3과 5의 배수(공배수)
//2)3의 배수
//3)5의 배수
//4)3의 배수도 5의 배수도 아닌 값
#include <stdio.h>
void main() {
	int n;
	printf("정수값: "); scanf_s("%d", &n);

	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d는 3과 5의 배수다.\n", n);
	}
	else if (n % 3 == 0) {
		printf("%d는 3의 배수다.\n", n);
	}
	else if (n % 5 == 0) {
		printf("%d는 5의 배수다.\n", n);
	}
	else {
		printf("%d는 5의 배수도 3의 배수도 아니다.\n", n);
	}
}
*/

/*
//23_5)Quiz_4)
// 3개의 과목(국어,수학,영어)의 값을 입력 받은 후, 평균값을 구하고,
// 70.00점 이상은 합격
// 60.00점 ~ 69.xx점은 미달
// 60.00점 미만은 불합격을 판단해서 출력하는 소스를 코딩
#include <stdio.h>
void main() {
	int kor, mat, eng;
	double avg = 0.0;

	printf("국어: "); scanf_s("%d",&kor);
	printf("수학: "); scanf_s("%d", &mat);
	printf("영어: "); scanf_s("%d", &eng);
	
	avg = (double)(kor + mat + eng) / 3;
	printf("%.2lf\n", avg);

	if (0 <= avg && avg <= 100) {
		if (avg >= 70) {
			printf("합격!\n");
		}
		else if (60 <= avg && avg < 70) {
			printf("미달\n");
		}
		else {
			printf("불합격...\n");
		}
	}
	else {
		printf("평균점수가 잘못됬습니다. 다시해주세여.\n");
	}

}
*/




//24.제어문 : switch ~ case (스위치 : 선택형문)
/*
//문법
switch (식) {   //식은 아무 변수값 들어가는 변수명이 들어가도 되는데 
				//결과값이 case에 선택되는 정수(상수)가 되게 해야함.
case 상수1(정수):
	명령문들;
	break;
case 상수2:
	명령문들;
	break;
case 상수3: 명령문들; break;
default:
	경우의수제외한 나머지는 여기로 선택;
	break;
}
*/

//switch에 들어가는 값과 '동일한 값'을 가진 case의 구문으로 선택됨
//case '상수'
// break는 만나는 즉시 프로그램을 중단
/*
//24_1)예시1)식 : 정수
#include <stdio.h>
void main() {
	int n;
	int num = 4;
	printf("정수값 입력: "); scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("1번 선택\n");
		break;
	case 2:
		printf("2번 선택\n");
		break;
	case 3: printf("3번 선택\n"); break;

	//case num:printf("\n"); break;  //case는 무조건 상수
	//case 4.14: printf("실수도 불가능\n"); //case는 정수 계열로만 가능
	case 'a': printf("a번선택\n"); break;
	default:
		printf("1,2,3을 제외한 값 선택\n");
		//break;   //default에 break는 생략 가능
	}

}
*/
//case에 들어갈 경우의 수 표현: 알파벳과 정수 상수만.