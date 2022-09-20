//day04.c
//1)두 값(8, 2)을 이용해서 짝수이면 '짝수입니다'. 
//2)두 값(9, 2) 홀수이면 '홀수입니다'.를 출력하는 코드 작성
/*
#include <stdio.h>
void main() {
	int a = 8, b = 9, div = 2;
	printf("%d %% %d = %d는 나머지가 0: %s입니다.\n", a, div, a % div, "짝수");
	printf("%d %% %d = %d임으로 홀수다\n", b, div, b % div);
}
*/

//11. 복합 대입 연산자 (자기자신 = 자기자신 연산자 다른값 : 누적)
/*
+=		:   a += b   (a = a + b)
-=		:   a -= b   (a = a - b)
*=		:   a *= b
/=		:   a /= b
%=		:   a %= b
*/

/*
//11_1)예시1)
#include <stdio.h>
void main() {
	int a = 5, b = 3;
	printf("초기값 a: %d, b: %d\n", a, b);
	a += b;      // a = a + b;
	printf("a+=b -> a: %d\n", a);
	a = a - b;   // a -= b;
	printf("a = %d, b = %d\n", a, b);
}
*/

/*
//11_2)예시2)
#include <stdio.h>
void main(void) {
	int n1, n2;
	n1 = 5, n2 = 5;
	printf("n1 += 1 = %d\n", n1 += 1);    //n1 = n1 + 1 에서 n1은 5:  5 + 1 => 6
	printf("n1 -= 1 = %d\n", n1 = n1 - 1); //n1 -= 1해서 6 : 6 - 1 -> 5

	printf("n1 *= n2 = %d\n", n1 *= n2);  // 5:   5 * 5 -> 25
	printf("n1 /= n2 = %d\n", n1 /= n2);  // 25:  25 / 5 -> 5
	printf("n1 %%= n2 = %d\n", n1 %= n2); // 5:   5 % 5 -> 0
}
*/


//12. 증감 연산자
/*
++num	: num에 값 : 1 증가(누적) 후, num을 이용(진행)  (선 증가, 후 처리)
		: val = ++num; (num을 1누적(증가) 후, val에 초기화)
num++	: num을 이용(진행) 후, num에 값 1증가(선 처리, 후 증가)
		: val = num++; (num값을 먼저, val에 초기화 후, num을 1증가)
--num   : (선 감소, 후 처리)
num--   : (선 처리, 후 감소)
*/
/*
//12_1)예시
#include <stdio.h>
void main() {
	int n1 = 10, n2 = 11;
	printf("n1      : %d\n", n1);     //10
	printf("n1++    : %d\n", n1++);   //n1을 먼저 출력 후, n1 + 1 : 10
	printf("증가     : %d\n", n1);    // 11
	printf("\n");
	printf("n2      : %d\n", n2);     //11
	printf("++n2    : %d\n", ++n2);   //n2 + 1을 먼저 후, n2 출력: 12
	printf("증가     : %d\n", n2);    // 12

	//--n1, n2--는 직접 해보기;
	printf("n1      : %d\n", n1);     //11
	printf("--n1    : %d\n", --n1);   //10
	printf("감소     : %d\n", n1);    //10
	printf("\n");
	printf("n2      : %d\n", n2);     //12
	printf("n2--    : %d\n", n2--);   //12
	printf("감소     : %d\n", n2);    //11
}
*/

/*
//12_2)Quiz_1)
#include <stdio.h>
int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;  //이 때, num1은 10값으로 처리됨

	printf("num1은 %d\n", num1);  //9  : num1은 결국 1감소(num1--)
	printf("num2는 %d\n", num2);  //12
	
	return 0;
}
*/

//13. 자료형의 데이터 종류들의 크기
// 1Byte = 문자 한 개(8bit)
// a   ==  97(01100001)
// _   ==     ________

// 1024Byte = 1KByte, 1024KByte = 1MByte ,  1024MByte = 1GByte , 1024GByte = 1TByte

// 정수 데이터
// int (4바이트)		기본형(총: 2^32 개: 약43억개)  (-2^31 ~ (2^31 - 1))
// short int(2바이트)  
// long int (4바이트)
// long long int (8바이트)
// unsinged int(4바이트: 0~양수)

// 실수 데이터
// double (8바이트)  기본형(2^64개)
// float  (4바이트)
// long float (8바이트)
// long double (8바이트)
// long long double (8바이트 초과)

// 문자 데이터
// char (1바이트)    기본형(2^8) -> (-128 ~ 127)
// unsined char (1바이트)    0 ~ 255

// void는 0바이트


//14. 자료형의 변환(day03.c의 10_3)산술 연산자예시3) 참고)

//14_1)예시1)
/*
#include <stdio.h>
void main() {
	int n1;
	double n2 = 2.5;
	n1 = n2;
	printf("n1 = %d, n2 = %.1lf\n", n1, n2);   //2   2.5
}
*/

//14_2) Cast 연산자에 의한 강제 자료형 변환:  (자료형)변수명
//변수 또는 상수에 대하여 명시한 자료형으로 강제 변환
/*
#include <stdio.h>
int main() {
	int n1 = 5, n2 = 2;
	double n3;
	printf("결과1 : %d\n", n1 / n2);  //  5/2 : 2
	n3 = (double)n2;
	printf("결과2 : %.1lf\n", n1 / n3);  // 5 / 2.0
	printf("결과2_1: %d\n", n1 / n2);   
	printf("결과3 : %d\n", n1 / (int)n3);
	return 0;
}
*/


//14. 관계 연산자(판별식으로 조건이 맞으면 참(1), 맞지 않으면, 거짓(0))
/*
A  <		:  A가 작다
A  >		:  A가 크다
A  <=		:  A가 작거나 같다
A  >=		:  A가 크거나 같다
 크기 비교 연산자

A  ==		: A와 같다
A  !=		: A와 같지 않다
비교 연산자
*/

/*
//14_1)예시
#include <stdio.h>
void main() {
	printf("%d와 %.1lf의 크기 비교 결과: 참:%d\n", 1, 3.14, 1 <= 3.14); //1
	printf("%d와 %.1lf의 크기 비교 결과: 참:%d\n", 3, 3.14, 3 <= 3.14); //1
	printf("%d와 %.1lf의 크기 비교 결과: 거짓:%d\n", 1, 3.14, 1 >= 3.14); //0
	printf("%d와 %.1lf의 크기 비교 결과: 거짓:%d\n", 1, 3.14, 1 == 3.14); //0
	printf("%d와 %.1lf의 크기 비교 결과: 참:%d\n", 0, 3.14, 0 != 3.14); //1
	//판별식으로 연산될 경우 참은 정수값 1 반환, 거짓은 0 반환
	//printf("%s < %s = %d\n", "a", "b", "a" > "b"); 
	// 크기 비교 연산자는 숫자만 대상으로 이용하세요!
	printf("a == a : %d\n", "a" == "a");
	printf("a != a : %d\n", "a" != "a");

}
*/


//15. 논리 연산자(참 및 거짓들을 논리로 판별)
/*
a || b		: 둘 중 적어도 1개가 참이면, 모두 참, 둘 다 거짓일 때만, 거짓(논리합:OR(또는))
a && b		: 둘 중 적어도 1개가 거짓이면, 모두 거짓, 둘 다 참일 때만, 참(논리곱:AND(그리고))
!a			: 참이면, 거짓, 거짓이면, 참으로 값 반환(논리부정(NOT))
*/
/*
//15_1)예시1) 논리
#include <stdio.h>
void main() {

	//0 : 거짓, 1: 참    <0을 제외한 나머지 값들은 전부 참>
	printf("0 && 0 : %d\n", 0 && 0); //0
	printf("0 && 1 : %d\n", 0 && 1); //0
	printf("1 && 0 : %d\n", 1 && 0); //0
	printf("1 && 1 : %d\n", 1 && 1); //1
	printf("123 && 0.01 : %d\n", 123 && 0.01); //1
	printf("1 && 0.0 : %d\n", 1 && 0.0);//0
	printf("\n");
	printf("0 || 0 : %d\n", 0 || 0);     //0
	printf("0 || 1 : %d\n", 0 || 1);     //1
	printf("1 || 0 : %d\n", 1 || 0);	 //1
	printf("1 || 1 : %d\n", 1 || 1);	 //1
	printf("123 || 0 : %d\n", 123 || 0); //1
	printf("\n");
	printf("!0.0 , !123: %d, %d\n", !0.0, !123);
}
*/

//15_2)예시2)관계연산자와 논리연산자
/*
#include <stdio.h>
void main() {
	int a = 5;
	double b = 5.01;
	printf("%d > %.1lf && 3 > 2 : %d\n", a, b, a > b && 3 > 2); //거짓 && 참 : 거짓(0)
	printf("%d < %.1lf && 3 > 2 : %d\n", a, b, a < b && 3 > 2); //참 && 참 : 참(1)
	printf("%d > %.1lf || 3 > 2 : %d\n", a, b, a > b || 3 > 2); //거짓 || 참 : 참(1)
	printf("%d > %.1lf || 3 < 2 : %d\n", a, b, a > b || 3 < 2); //거짓 || 거짓 : 거짓(0)
}
*/
/*
//15_3)예시3)Quiz_2)참, 거짓 판별하기
#include <stdio.h>
void main() {
	int num1 = 10, num2 = 20;
	int res1, res2, res3;
	res1 = (num1 == 10 && num2 == 12);  //0
	res2 = (!(num1 < 10 || num2 > 12));    //0
	res3 = (!num1 != 0);//0
	printf("%d\n", res2);
}
*/

//우선 순위
//1순위: 묶는 녀석들 -> (), [], {}
//2순위: 비교대상이 적은 것부터 -> 단항연산자
//3순위: 산술>비교>논리


//16.비트 연산자(10진수 -> 2진수, 2진수(bit:0,1)들끼리 논리 비교)
/*
|		:   비트 단위 논리합(OR)
&		:   비트 단위 논리곱(AND)
^		:   비트 단위 배타적 논리합(XOR)
~		:   비트 부정(NOT)
<<		:   비트 좌측 이동(Left Shift)
>>		:   비트 우측 이동(Right Shift)
*/

//16_1)예시1)
#include <stdio.h>
void main() {
	int n1 = 12;
	int n2 = 7;
	int res1 = n1 | n2;
	int res2 = n1 & n2;
	int res3 = n1 ^ n2;
	
	printf("res1 : %d\n", res1); // 12 -> 1100,  7 -> 111
								 // 1100 or 0111 = 1111 -> 15
	printf("res2 : %d\n", res2); //4
	printf("res3 : %d\n", res3); //11
}