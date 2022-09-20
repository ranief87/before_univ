

// 29. 반복문 do ~ while 문
// while 문과 사용법이 동일
// 조건식 비교 전 먼저 do 문장 안에 있는 명령을 실행하고 조건을 판단


// 문법
/*
초기식;
do {
	먼저 반복할 거 수행문;
	
}while (조건식);
*/


// 29_1) 예시(for, while)과 do ~ while 차이

// 29_1_1) for
/*
# include <stdio.h>
void main() {
	int i =2;
	for (i; i; i++) {
		printf("i: %d\n", i);
	}

	while (i) {
		printf("i: %d\n", i);
		i++;
	}

	do {
		printf("i: %d\n", i);
		// i++;
	} while (i);
	// 처음 먼저 수행 후 조건식 판별만 다르고 나머지는 동일
}
*/


// 29_2) 할아버지의 연세는 68세이다
//		 할아버지는 손자의 나이의 5배보다 3살이 많을 때
//		 손자의 나이는 몇 살인가

//# include <stdio.h>
//void main() {
	//int s=1;
	// for
	//for (s; s * 5 +3!= 68; s++) {}
		//printf("%d", s);
	

	//while
	//s = 1;
	//while (s * 5 + 3 != 68) {
		//s++;
	//}
	//printf("%d\n", s);


	// do ~ while
	//s = 0;
	//do {
	//	s++;
	//} while(s * 5 + 3 != 68);
	//printf("%d\n", s);


//}





// 30. 분기문
// 반복에서 제어문을 강제로 변경해주는 기법



//30_1) break는 한 번에 한 개의 반복만 중지 가능
// 반복 실행 중 내가 원할 때 중지용으로 사용
// {} 영역 중 if문 자체에만은 사용 x
// break는 반복용으로 사용되는 곳에서만 사용 된다

// 30_1_2) if 문 만으론 break 안된다
//# include <stdio.h>
//void main() {
	//printf("before break\n");
	//if (0 < 3) {
	//break;
	//}
	//printf("after break\n");




	//  do~ while
	//do {
	//	break;
		//printf("\n");
	//} while (1);
	//printf("");

//}


// 30_3) 숫자 3을 입력 받을 때까지 무한 출력
/*
# include <stdio.h>
void main() {
	int a;
	while (1) {
		printf("숫자 입력: "); scanf_s("%d", &a);
		if (a == 3) {
			break;
		}
	}
}
*/


//30_4) Quiz  숫자 입력 받을 때 범위는 0~100 사이라고 지정
// 내가 원하는 숫자를 찾으면 프로그램 종료 되게 코딩
// 조건 1. 만약 음수나 101이상의 수 를 입력하면 잘못 입력했다는 조건 잡기
// 조건 2. 원하는 숫자를 찾으면 프로그램 종료
// 조건 3. 원하는 숫자가 근접하면 힌트 주는 식으로 만들기
// 조건 4. 기회는 10 번 만 주는 반복
/*
# include <stdio.h>
void main() {
	int n, cnt;
	for (cnt = 0; cnt <= 10; cnt++) {
		printf("n: "); scanf_s("%d", &n);
		if (n < 0 && n>100) {
			printf("잘못 입력");
		}
		else {
			if (n == 7) {
				printf("정답!");
				break;
			}
			if (n < 7) {
				printf("아깝네 더 위로 ");
			}
			if (n > 7 && n < 15) {
				printf("아깝네 더 아래로");
			}

		}
	}
}


# include <stdio.h>
void main() {
	int n, cnt;
	while (cnt) {
		if (cnt == 10) {
			break;
		}
		else {

		}
	}
}

*/




//30_5) goto 문
// 프로그램 내에 지정된 곳으로 제어문을 강제로 이동

// 문법
// goto 전에 위치 지정 (반복문처럼 보임)
/*
지정할 명;

명령문들;

goto 지정할 명; // 알파벳으로만 표현  : a, aa

*/





// goto 후에 위치 지정 
/*
goto 지정할 명;

명령문들;

지정할 명;
*/


/*
// 30_6) 예시
# include <stdio.h>
void main() {
	// (1) goto 전
	//int n = 1;
//aa:
	//printf("n = %d\n", n++);
	//if (n <= 3) {
		// goto aa;
	//}

	// goto  후
	int a = 1;
	goto aa;
	printf("a = %d\n", a);
aa:
}

*/



// 30_7) continue 문
// 반복문이 실행해야 할 명령 중 아직 실행하지 않은 명령들이 있을 경우;
// continue 문을 만나면 반복문 처음으로 이동해서 조건 판별


// 30_8) 예시
/*
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 1; a <= 20; a++) {
		if (a % 2 != 0) {
			continue;
		}
		printf("a= %d\n", a);

	}
}
*/



// 30_9) Quiz .
// 1~10 까지의 숫자 중 2의 배수 3의 배수 5의 배수 가 아닌 것만 출력
/*
# include <stdio.h>
void main() {
	int a;
	for (a = 1; a <= 10; a++) {
		if (a % 2 == 0) {
			continue;
		}
		if (a % 3 == 0 ) {
			continue;
		}
		if (a % 5 == 0) {
			continue;
		}
		printf("a = %d\n", a);
	}
}

*/





// Quiz 반복문 응용 

/*
*****
*****
*****
*****
*****
*/

// 별 문자열을 printf("*")만 이용
// 반복문들을 이용 

/*
# include <stdio.h>
void main() {
	for (int c = 1; c <= 5; c++) {
		for (int a = 1; a <= 5; a++) {
			printf("*");
			
		}
		printf("\n");
	}

}
*/

# include <stdio.h>
void main() {
	int a=1, b=1;
	while (b<=5) {
		if (a <= 5) {
			printf("*");
			a++;	
		}
		
	}
	printf("\n");
	b++;
}






