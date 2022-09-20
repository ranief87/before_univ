

// 다중  if문

// 문법
/*
if (조건식1) {
	조건식1이 참일때 수행 후 if문 종료
}
else if (조건식2) {
	조건식1이 거짓이고 조건식2가 참일때 수행 후 if문 종료
}
else if (조건식3) {
	조건식1과 2가 거짓일때 조건식3이 참일때 수행 후 if문 종료
}
else {
	위에 조건식들이 모두 거짓일때 수행 후 if문 종료
}
*/



// 23_1) 주어진 값(24) 가 있을 때 다음 조건을 만족할 때 코딩해보기
// 10보다 큰 수다
// 20보다 큰 수다
// 30보다 큰 수다

/*
# include <stdio.h>
void main() {
	if (24 > 10) {
		printf("10보다 큰 수이다\n");
	}
	if (24 > 20) {
		printf("20보다 큰 수이다\n");
	}
	if (24 > 30) {
		printf("30보다 큰 수이다");
	}

}
*/

/*
#include <stdio.h>
void main() {
	int n = 24;
	if (n > 10) {
		printf("10보다 큰 수이다\n");
			if (n > 20) {
				printf("20보다 큰 수이다\n");
				if (n > 30) {
					printf("30보다 큰 수이다");
				}
			}		
	}	
}
*/


// 30보다 큰 수만 참
/*
# include <stdio.h>
void main() {
	int n = 35;
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

/*
# include <stdio.h>
void main() {
	int n = 27;
	if (n > 30) {
		printf("10보다 크다\n");
	}
	else if (n > 20) {
		printf("20보다 크다\n");
	}
	else if (n > 10) {
		printf("30보다 크다\n");
	}
}
*/

// 23_2) 다중 if문 예시(1)
// 조건
// 0< num <= 10
// 0 > num
// 10 < num
// 범위에 속하지 x
/*
# include <stdio.h>
void main() {
	int num;
	printf("입력값: "); scanf_s("%d", &num);
	if (num > 0 && num <= 10) {
		printf("0 초과 10이하(%d)\n", num);
	}
	else if (num < 0) {
		printf("음수인듯(%d)\n", num);
	}
	else if (num > 10) {
		printf("10초과(%d)\n", num);
	}
}
*/



// 23_3) Quiz 
// 3개의 과목 (국어 수학 영어)의 값을 입력 받은 후 평균값을 구하고
// 70이상은 합격
//60이상 70미만은 미달
// 60 미만은 불합격을 판단해서 출력하는 소스를 출력

/*
# include <stdio.h>
void main() {
	float k, m, e, avg;
	printf("국어 : "); scanf_s("%f", &k);
	printf("수학 : "); scanf_s("%f", &m);
	printf("영어 : "); scanf_s("%f", &e);
	avg = (k + m + e) / 3;
	if (avg >= 70) {
		printf("합격!");
	}
	else if (avg >= 60) {
		printf("-- 미달");
	}
	else if (avg < 60) {
		printf("불! 합격");
	}
}
*/

// 23_4) Quiz 3과 5의 배수를 구분하는 조건문을 코딩
// 단순if, 중첩if, 다중if
// 3과 5의 공배수
// 3의 배수
// 5의 배수
// 둘 다 아닌 거

// 단순 if 
/*
# include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("3과 5의 공배수");
	}
	if (n % 3 == 0) {
		printf("3의 배수");
	}
	if (n % 5 == 0) {
		printf("5의 배수");
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("해당사항 없음");
	}
}

*/


// 중첩if
 /*
#include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0) {
		printf("n은 3의 배수");
		if (n % 5 == 0) {
			printf("n은 15의 배수");
		}
		else {
			printf("n은 3의 배수이나 5의 배수는 아님");
		}
	}
	else {
		printf("해당사항 없음");
	}
	if (n % 5 == 0) {
		printf("5의 배수");
	}
}
*/


// 다중 if
/*
# include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("n은 3과 5의 공배수");
	}
	else if (n % 3 == 0) {
		printf("n은 3의 배수");
	}
	else if (n % 5 == 0) {
		printf("n은 5의 배수");
	}
	else if (n % 5 != 0 && n % 3 != 0) {
		printf("해당사항 없음");
	}
}
*/



// 23_5) Quiz
// 3rodml rhkahr 





// 25. 제어문: switch ~ case (스위치: 선택형문)
/*
// 문법
switch (식) {  // 식은 아무 변수값 들어가는 변수명이 들어가도 되는데 단 결과가 반드시 나와야함
			  // 결과값이 case에 선택되는 정수(상수)가 되게 해야함
case 상수1(정수형):
	명령문들;
	break;
case 상수2:
	명령문들;
	break;
case 상수3:명령문들; break;
default:
	경우의 수 제외한 나머지는 여기로 선택;
	break;


}
*/

// switch에 들어가는 값과 동일한 값을 가진 case의 구문으로 선택함
// case '상수'
// break는 만나는 즉시 프로그래밍 중지


// 24_1) 예시(1)

#include <stdio.h>
void main() {
	int n;
	printf("정수값 입력: "); scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("1번 선택\n");
		break;

	case 2:
		printf("2번 선택\n");
		break;
	case 3: printf("3번 선택\n"); break;
		// case num: printf("\n"); break; // case는 무조건 상수
		// case 3.14: printf("실수도 불가능\n"); break; // case는 정수 계열로만 가능
	case 'a': printf("a선택\n"); break;

	default:
		printf("번 선택\n");
		break;
		// break: // default에 break는 생략 가능
	}
}





















