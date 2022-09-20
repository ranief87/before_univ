

// 24_5) Quiz1. 스위치로 3의 배수인지 아닌지 선택해봅시다
/*
#include <stdio.h>
void main() {
	int n;
	printf("숫자 입력: "); scanf_s("%d", &n);
	int nmg = n % 3;
	switch (nmg ) {
	case 0: printf("%d는 3의 배수\n", n); break;
	default: printf("%d는 3의 배수 아니다\n"); break;
	}
	//if (n % 3 == 0) {
		///printf("3의 배수");
	//}
	//else {
		//printf("아니네");
	//}
}

*/






// 24_6) 다음의 선택형을 코딩

// A 선택하면 90출력
// B 선택하면 80 출력
// C 70
//D  60
//E 0

/*
#include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	switch (n) {
	case 90: printf("A\n"); break;
	case 80: printf("B\n"); break;
	case 70: printf("C\n"); break;
	case 60: printf("D\n"); break;
	case 0: printf("E\n"); break;
	}
}

*/



// 제어문(반복문: for문)
// 지정한 조건이 만족하는 동안 어떤 처리를 저정한 횟수만큼 반복 해서 실행
// 같은 처리(코드), 유사한 코드를 간단하게 여러번 실행할때 주로 사용 

// 문법
//for (초기식(값);조건식;증감연산자(생략 가능)) {
	//반복할 기능들;
//}

// 25_1) for반복문 잡아보기

//#include <stdio.h>
//void main() {
	// 1) 가장 보편적인 초기값 잡기
	//int i = 1;
	//for (i = 0; i < 2; i++) {
		//printf("i : %d\n",i);

	//}
	//printf("i가 %d회에서 for문 끝났습니다\n", i);

	//2) 초기값을 for문 안에 선언
	//for (int i = 4; i < 2; ++i) {
		//printf("%d\n", i);
	//}
	//printf("%d\n", i); // error : for문 안에 초기식 선정시 for문에서만 존재함

	//3) 증감식 생략
	//for (int i = 0; i <= 1;) {

		//printf("infinity?");
	//}

	//4) 초기값 다르게 표현
	//int i = 2;
	//for (i = 1; i >= 0; i--) {
		//printf("%d\n", i);
	//}

//}


// 25_2) Quiz 2. 정수 1부터 10까지의 값이 나오게 출력(for문) 
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 1; n < 11; n++) {
		printf("%d\n", n);
	}
}
*/

// 25_3) Quiz 3. 정수 1부터 10까지의 값 중 짝수가 나오게 출력 (for+ if,for)
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 1; n < 11; n++) {
		if (n % 2 == 0) {
			printf("%d\n", n);
		}
		else {
			printf("");
		}
	}
}
*/

/*
# include <stdio.h>
void main() {
	int n;
	for (n = 2; n < 11; n += 2) {
		printf("%d\n", n);
	}
	for (n = 1; n < 6; ) {
		n = n * 2;
		printf("%d\n", n);
	}
}
*/


// 25_4) 1부터 10까지의 모든 정수의 합?
/*
# include <Stdio.h>
void main() {
	int a = 1;
	int sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a; // sum= sum +a; // 누적합계코드
		printf("%d= %d +%d", sum, sum - a, a); //디버깅
	}
	printf("%d", sum);
}
*/



// 25_6) Quiz 5. 1부터 100까지 중 7의 배수의 합과 갯수를 구하는 소스 코딩

# include <stdio.h>
void main() {
	int a = 1;
	int c = 0, sum = 0;
	for (a = 1; a <= 100; a++) {
		if (a % 7 == 0) {
			sum += a;
			c ++;
			
		}
	}
	printf("합: %d, 갯수: %d\n", sum, c);
}







// 25_7) Quiz 6. 1부터 10까지의 숫자를 한 개씩 누적한 값들 중 홀수만 출력하는 소스 코딩 
// 단 출력 결과 1,3,15,21,45,55

/*
# include <stdio.h>
void main() {
	int i;
	int sum = 0;
	for (i = 1; i < 11; i++) {
		sum += i;
		if (sum % 2 == 0) {
			printf("");
		}
		else {
			printf("%d\n",sum);
		}
	}
}

*/






















