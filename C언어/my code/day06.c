

// 제어문 (if 문)
// 조건식에 따라서 프로그램의 실행 순서를 결정하는 제어문

// 20_1) 단순 if문 (if문 하나)
// 조건식을 평가한 후 참이면 영역 안에 종속문장 실행 거짓이면 실행 x

// 문법
//if (조건식) {
//	조건식이 참일때 수행 후 if문 종료;


//}
//if문이 끝난후 다음 명령 실행



// 20_3) 예시 1
/*
# include <stdio.h>
void main() {
	int n;
	printf("정수 입력: "); scanf_s("%d", &n);

	if (n) {
		printf("%d는 참임으로 수행\n", n);

		printf("if 문 종료 후 , 수행됨\n");
	}
}
*/



// 20_3) 예시 2
/*
#include <stdio.h>
void main() {
	int n1 = 1, n2 = 0;

	if (n1) {
		printf("1은 참임으로 수행\n");

	}

	printf("첫번째 if문 종료\n");

	if (n2) {
		printf("0은 거짓임으로 수행x\n");
	}

	printf("두번째 if문 종료\n");
}
*/



// 20_4) Quiz
// 두 개의 정수값을 입력받고 두 개의 값을 비교해서 크면 n1이 n2보다 크다
// 크지 않으면 반대로 구별해서 출력
/*
#include <stdio.h>
void main() {
	int n1, n2;
	printf("정수값 1 입력: "); scanf_s("%d", &n1);
	printf("정수값 2 입력: "); scanf_s("%d", &n2);
	if (n1 > n2) {
		printf("n1이 n2보다 크다");
	}
	if (n1 < n2) {
		printf("n2가 n1보다 크다");
	}
}
*/


//20_5) 조건문을 이용한 짝수, 홀수 판별
/*
#include <stdio.h>
void main() {
	int n, nmg = 0;
	printf("정수 입력: "); scanf_s("%d", &n);
	nmg = n % 2;

	if (nmg == 0) {
		printf("짝수!");
	}
	if (nmg == 1) {
		printf("홀수!");
	}

}
*/


//21. if - else문
// 조건식을 평가해서 참이면 if문 영역 수행, 거짓이면 else영역 수행

//문법

//if (조건식) {
//	if 문 조건식이 참일때 ,수행 후 ,if 문 종료
//}
//else {
//	if 문 조건이 거짓일때, 수행 후 ,if 문 종료
//}



// 21_1) if - else 예시1
/*
#include <stdio.h>
void main() {
	int n;
	printf("정수 입력: "); scanf_s("%d", &n);

	if (n) {
		printf("%d는 참\n", n);
	}
	else {
		printf("%d는 거짓\n", n);
	}
}
*/


// 21_2) if - else 
// 두 개의 값을 비교 후, 크면 크다, 작으면 작다, 같으면 같다를 판별해서 출력
/*
# include <stdio.h>
void main() {
	int n1, n2;
	printf("정수 1 입력: "); scanf_s("%d", &n1);
	printf("정수 2 입력: "); scanf_s("%d", &n2);

	if (n1 > n2) {
		printf("%d이 %d보다 크다\n",n1,n2);
	}
	if (n1 == n2) {
		printf("같다\n");
	}
	if (n1 < n2) {
		printf("%d가 %d보다 작다\n",n1,n2);
	}
}
*/
// if - else는 총 경우의 수 결과가 2개로 나올 경우에만 사용 가능





// 21_4) Quiz 1
// 두 수를 입력받아 최댓값과 최솟값을 판별
// 단 크기가 같으면 최댓값으로 받게 하기
/*
#include <stdio.h>
void main() {
	int a, b;
	printf("숫자1 입력: "); scanf_s("%d", &a);
	printf("숫자2 입력: "); scanf_s("%d", &b);

	if (a >= b) {
		printf("최댓값 %d\n", a);
		printf("최솟값 %d", b);
	}
	if (a < b) {
		printf("최솟값 %d\n",a);
		printf("최댓값 %d",b);
	}
	printf("\n");
}
*/

// 21_5) Quiz 2
// 지금 돈이 수중에 2000원 있습니다
// 만약 커피값이 2000원보다 적거나 같으면 "커피 구입"
// 2000원보다 높으면 "수업 들어가자" 출력
/*
#include <stdio.h>
void main() {
	int money = 2000;
	int coffee;
	printf("커피값: "); scanf_s("%d", &coffee);
	if (money >= coffee) {
		printf("커피구입");
	}
	else {
		printf("수업이나 들으러 가자\n");
	}
}
*/



//21_6) Quiz 3
// 숫자 하나를 입력 받은 후 다음의 조건으로 코딩 해서 출력
// 1) 입력하는 숫자는 0~10 사이의 범위라고 가정되게 합니다
// 2) 5보다 크거나 같다면 "5이상 10이하다"를 출력
// 3) 5보다 작다면 "5미만이다"
// 4) 그렇지 않다면 "크지도 작지도 않다"


# include <stdio.h>
void main() {
	int n;
	printf("0~10 사이의 숫자를 입력: "); scanf_s("%d", &n);

	if (n>0 &&n< 5) {
		printf("5미만이다\n");
	}
	if (n>=5 && n<= 10) {
		printf("5이상 10 이하다\n");
	}

	if (n<0 || n>10) {
		printf("거절\n");
	}

}



// 22. if 중첩( if 문 안에 또 if문을 사용할때)
if (조건식1) {
	조건식1이 참이면 수행;
	if (조건식2) {
		조건식1이 참이고 조건식2가 참이면 수행;
		if (조건식3) {
			조건식1이 참이고 조건식2가 참이고 조건식3이 참일때 수행 후, if문 종료;
		}
		else
	}

}







