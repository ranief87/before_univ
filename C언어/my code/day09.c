

// for문 계속

//25_8) 5개의 정수를 입력 받아서 입력받은 정수의\
// 최댓값, 최솟값을 구하는 코드(단 정수는 0~100 안에 있다고 가정)
/*
#include <stdio.h>
void main() {
	int num;
	int maximum = 0, minimum = 100;
	for (int i = 0; i < 5; i++) {
		printf("%d째 정수 입력: ", i + 1); scanf_s("%d", &num);
		if (num >= 0 && num <= 100) {
	
			if (num > maximum) {
				maximum = num;
			}
			if (num < minimum) {
				minimum = num;
			}
		}
		else {
			break;
		}
	}
	printf("max: %d\n", maximum);
	printf("min: %d\n", minimum);
}
*/




// 26. for문의 문법 형식 중 생략됐을 때
//#include <stdio.h>
//void main() {
	// 1) 초기값 생략 (기왕이면 문법에 맞게 쓰면 좋음)
	//int i = 1;
	//for (; i <= 2; i++) {
		//printf("%d: ", i);
	//}
	// 2) 조건식 생략 (무한으로 감. 조건식 없으면 참이라고만 인식)
	//for (int i = 1; ; i++) {
		//printf("%d\n", i);
	//}
	// 3) 조건식과 증감식을 두 개씩 사용한 반복문
	//char a;
	//int b;
	//printf("a,b\n=============");
	//for (a = "A", b = 65; a <= '7'; a++, b++) {
		//printf("%c %d\n", a, b);
	//}


//}



// 27. 중첩 for문(이중)
// 문법
/*
for (초기식1; 조건식1; 증감식1) {
	반복할 명령문 1;
	for (초기식2; 조건식2; 증감식2) {
		반복할 명령문2;
	}
}
*/

// 27_1) 반복문 안에 반복문이 들어갈 때 유의점
/*
#include <stdio.h>
void main() {
	//27_1_1) for1의 i가 2번 돌 때 for2의 j가 3번 돌 때
	int i, j;
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			printf("i=%d,  j= %d\n", i, j);
		}
	}
}
*/

// 27_1_2) 외부문 - 내부문 구별
/*
#include <stdio.h>
void main() {
	int a = 0, b = 0;
	for (a = 1; a <= 2; a++) {
		printf("외부1: for문의 %d번째 시작\n", a);
		for (b = 1; b < a; b++) {
			printf("내부: for문의 %d번째 턴\n", b);
		}
		printf("외부2: for문의 %d 턴 start\n", a);
	}
}
*/

// 27_1_3) 내부 for문의 주의점
// 1. for문에 초기식 설정(문제 x)
//# include <stdio.h>
//void main() {
	//for (int a = 1; a < 3; a++) {
		//for (int j = 1; j < 3; j++) {
			//printf("a=%d, j=%d\n", a, j);
		//}
	//}

	// 2. 바깥 초기식을 이용
	//int i = 1, j = 1;
	//for (i; i <= 2; i++) {
		//for (j; j <= 3; j++) {
			//printf("i=%d, j=%d\n", i, j);
		//}
	//}

//}


// 27_2) Quiz 1
// 구구단 출력 (가로로 한 단 씩)
// 2*1=2  2*2=4 2*3=6


//#include <stdio.h>
//void main() {
	//int a = 2,b=1;
	// 가로
	//for (a=2; a < 10; a++) {
		//for (b = 1; b < 10; b++) {
			
			//printf("%d x %d = %d\t", a, b, a * b);

		//}
		//printf("\n");

	//}
	// 세로
	/*
	for (int k = 2; k < 10; k++) {
		printf("%d단\t\t", k);
		printf("\n");
		for (a = 1; a < 10; a++) {
			for (b = 1; b < 10; b++) {


				
				printf("%d x %d=%d\n", a, b, a * b);
			}
			printf("\n");
		}
	}



}
*/




// 28. while문
//for문과 동일하게 반복
// 조건이 거짓될 때까지 무한 반복

// 문법
/*
자료형 변수명 = 초기값;
while (조건식) {
	반복할 명령문(조건식이 거짓될 때까지 무한);
	// 증감식(선택)
}

*/



// 28_1) 무한 반복
/*
#include <stdio.h>
void main() {
	int i = 0;
	while (i++) {
		printf("i= %d\n", i);
	}
}
*/


//28_2) i 가 10보다 작거나 같을 때까지 반복
//#include <stdio.h>
//void main() {
	//for (int i = 0; i <= 10; i++) {
		//printf("i : %d\n", i);
	//}
//}


//#include <stdio.h>
//void main() {
	//int i = 0;
	//while (i <= 10) {
		//printf("i : %d\n", i++);
	//}
//}


// 28_3) 초기값 i=10, i가 0이 될 때까지 반복(출력)
/*
#include <stdio.h>
void main() {
	int i = 10;
	for (i; i != 0; i--) {
		printf("i : %d\n", i);
		
	}
}


*/




//28_4) Quiz 3. 1~100까지의 합
/*
#include <stdio.h>
void main() {
	int sum=0;
	for (int i = 1; i <= 100;i++) {
		sum += i;
		//printf("%d\n", sum);
	}
	printf("%d", sum);
}
*/




//28_5) Quiz 4. 1~100까지의 수 중에서 3과 5의 공배수의 갯수를 구하는 소스 코딩

# include <stdio.h>
void main() {
	int count = 0;
	for (int n = 1; n <= 100; n++) {
		if (n % 3 == 0 && n % 5 == 0) {
			count += 1;
		}
	}
	printf("%d", count);
}








