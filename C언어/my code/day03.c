

// 6. main함수 유형들
// int main() <- return 0;
// main함수가 종료될 때 정수:0 값을 리턴한다
// void main() : main() 함수가 종료될 때 아무 값도 반환 x
// 'void'는 '피하다' 또는 '값이 없다'
// int main() ,void main() ,int main(void) ,void main(void) 는 모두 동일하게 실행함

/*
// 정렬
# include <stdio.h>
void main() {
	printf("%%s		 :%s%d\n","ABC",123);
	// %%가 문자열 내의 % 표현
	printf("%%5문자		: |%5s||%5d|\n", "ABC", 123);
	printf("%%-5문자		: |%-5s||%-5d|\n", "ABC", 123);

	printf("%%5.2lf		:|%5.2lf|\n", 3.17);
	printf("%%5.2lf		: |%-5.2lf|\n", 3.17);

	//고정길이를 잡아둔 고정길이보다 길 켱우 자동으로 길이를 잡아준다 (비주얼 스튜디오) 
	//printf("|%3s|\n", "123456");

}
*/

// 오른쪽 정렬 : +, 왼쪽 정렬: -
//%-5s : 5자리를 고정잡아서 왼쪽 정렬
// %5.2lf : 5자리를 고정 잡아 소수점 2번째 자리까지 오른쪽 정렬


// 8. 변수 : 변할 수 있는 값
// 메모리의 일정 공간으로 데이터의 저장 및 변경이 가능
// 변수를 생성한다 -> 메모리의 일정 공간을 확보한다는 의미
// 변수명(변할 수 있는 것을 저장할 매개체)

// 변수의 선언(문법)

// 자료형 변수명 : 초기값     
// 예) int a = 5;   int(자료형), a(변수명), 5(초기값) 
// =(대입연산자) 유일하게 읽는 방향이 오른쪽에서 왼쪽
// 5라는 정수값을 int(정수형) a라는 변수명에 초기화시킨다

// 자료형 종류
/*
int		: integer로 정수형 자료형(크기 : 4byte)
double  : long float 로 긴정수형 자료형(크기 : 8byte)
float   : float 실수형 자료형(크기 : 4byte)
char    : character 로 문자 및 문자열 자료형(char크기: 1byte, 문자열 크기: 문자갯수에 따라 변함)
void    : 자료형이 없는 형태
*/

// 변수명 작명 규칙
/*
1. 영문, /숫자, /특수기호 중 (밑줄 _)만 사용 가능: ck ck1 c_k _ck1
2. 변수명의 시작명은 영문, _ 만 해야함(= 숫자는 x): 1ck X
3. 대소문자 구분: ck CK Ck cK 서로 다른 변수명들
4. C언어에서 사용하는 예약어들은 선언 불가능: void int if main() .. X
5. 기본 사용하는 함수들(printf())들은 사용 하면 안된다
6. 변수명 안에 공백을 넣으면 안 된다
7. 변수명을 선언시 존재하는 동안은 재 선언(중복)이 불가능하다
*/


// 8_1) 변수명 예시
/*
#include <stdio.h>
void main() {
	int a = 5;
	char a1 = 'a';
	double a_1 = 3.14;

	// b = 1; b의 자료형을 몰라서 선언되지 않은 식별자
	// int 1b = 1;  변수 인식 못함 
	// float 1 b = 3.1;  변수 인식 못함
	// double if = 3.14;  변수 인식 못함
}
*/

// 8_2) 변수명 제시
/*
# include <stdio.h>
void main() {
	//정수
	int a;  // 정수형a 선언
	// printf ("%d",s): //값을 초기화시킨다
	a = 10; // 10값을 a에 초기화
	printf("a: %d\n", a); 

	int A = 20;  // 정수형 A를 선언 후 20으로 초기화
	printf("A: %d\n", A);

	//실수
	double b = 1.2;
	float c = 3.14f; // 실수값에 f,F(float형): 접미사 
	printf("b: %1.lf,  c: %.2f\n", b, c);


	//문자
	char ch = 'A';
	char f_h = 97;
	printf("ch: %c,  %d\n", ch, ch);
	printf("f_h: %c, %d\n", f_h, f_h);
	int aa = 'a';
	printf("%d\n", aa);

	//문자열(배열)
	char str[10] = "clang";  // 문자열배열, 문자를 하나씩 열거해서 연결한 것
						     // 선언시 [10]은 문자를 10개를 고정

	printf("str: %s\n", str);
	printf("str[2]: %c\n",str[2]);    

	// char d[5] = "clang";  // error :문자열 배열은 특징이 마지막에
	char e[6] = "clang";     // 존재는 하는데 보이지 않는 "NULL"값이 필요함


	printf("d: %s\n", d);    // 널은 문자열의 끝을 표현하기 위해 사용 
	printf("e: %s\n", e);
}
*/



// 8_3) 변수명 예시
/*
# include <stdio.h>
void main() {
	int data;
	data = 12;
	// printf("1)초기: %d\n", data);   // 디버깅: 중간에 오류 난 것을 검사한다라는 의미
	                                   // 개발자가 직접 기능들이 어떻게 됬는지 확인 할 때
	                                   // printf()로 출력한다든가
	data = 100;
	printf("2)초기변화: %d\n", data);


	// int d1= 11, d2= 10;   // 여러 변수명 선언 : 자료형 변수형1 = 값1, 변수형2=값2
	                      // 단, 동일한 자료형으로 선언시만 가능
	 
	int d1 = 11, d2 = 22, res;
	res = d1 + d2;    // 코드 순서는 올바르게 잡아야한다(초기화되지 않는 것끼린 연산x)
	// d1=19,d2=33 
	printf("%d + %d= %d\n", d1, d2, res);


	int a = 1, b = 10;
	a = 2;
	b = a;
	printf("a: %d, b: %d\n", a, b);  
	

}
*/



// Quiz) a는 20 , b는 30이 있습니다. 이 두 개의 값을 서로 바꾸는데
// 새로운 변수명 temp를 이용하여 a는 30 b는 20으로 값을 바꿔서 출력
/*
# include <stdio.h>
void main() {
	int a = 20;
	int b = 30;
	int temp;
	printf("a: %d, b: %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("a: %d, b: %d\n", a, b);
	// 둘이 바꾸는 문법

}
*/


// 9. 상수
// 메모리 어딘가에 일정공간에 저장되어 변경이 불가능한 데이터(즉, 한 번 지정시 변할 수 없는 값: 상수값)


// 고정된 상수로 지정: const
/*
#include <stdio.h>
void main() {
	int n1 = 20;       // 변할 수 있는 값들이 저장 가능 
	const int n2 = 30;   // n2:30을 초기화해서 const선언하면 변경 불가능
	n1 = 20 + 10;
	printf("%d\n", n1);
	// n2 = n1;

	// const는 상수화 시켜서 바꿀 수 없게 막아주는 겁니다

}

*/

// 10. 연산자들
// 10.1) 산술연산자
/*
=		: num=20 ( 우항의 값을 좌항에 대입, 대입연산자)
+		: num= 4 + 3 (두 합을 더한 값을 좌항에 대입)
-		: num= 4 - 3 (뺄셈)
*		: num= 4 * 3 (곱셈)
/		: num= 4 / 3 (나눗셈)  (즉 몫만 구함)
%		: num= 4 % 3 (나눈 결과의 나머지값을 좌항에 대입)(즉, 나머지만 구함)
*/


// 10.2) 산술 연산자 예시(1)
/*
# include <stdio.h>
void main() {
	printf("%d + %d = % d\n", 20, 3, 20 + 3);
	printf("%d - %d = % d\n", 20, 3, 20 - 3); 
	printf("%d * %d = % d\n", 20, 3, 20 * 3);
	printf("%d / %d = % d\n", 20, 3, 20 / 3);
	printf("%d %% %d = % d\n", 20, 3, 20 % 3);

	// 정수 연산자 정수는 항상 정수
	// 정수 연산자 실수는 항상 실수
	printf("%d  연산 % .2lf는 %f\n", 10, 2.0, 10 + 2.0);
	                          // 바로 위가 d이면 불가능

	// 나눗셈의 주의 사항
	printf("4.0/2.0= %.lf\n", 4.0 / 2.0);
	printf("2.0/4.0= %.2f\n", 2.0 / 4.0);
	printf("2/4= %d\n", 2 / 4);     // 정수/정수 는 항상 정수(몫 : 0)


	// 나머지 %의 주의 사항
	printf(" 2 %% 4= %.d\n", 2% 4);
	printf(" 4 %% 2= %.d\n",  4 % 2);
	// printf("4.0 %% 2= %.1lf\n",4.0 % 2);
	// printf(" 10.1 % % 3= %1.lf\n",10.1 % 3);
	// %는 나머지를 구하는 연산자로 실수형은 추가 x

}

*/



// 10.3) 산술 연산자에서 주의할 점 

#include <stdio.h>
void main() {
	int a = 6, c;
	double b = 2.5, d = 0.0;
	c = a + b;
	d = a - b;

	printf("%d + %.1lf= %d\n", a, b, c);
	printf("%d - %.1lf= %.1lf\n", a, b, d);


}














