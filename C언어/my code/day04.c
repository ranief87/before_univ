
// 어제자 퀴즈
/*
# include <stdio.h>
void main() {
	int a = 8, b = 9, div = 2;
	printf("%d %% %d는 나머지가 %d이므로 %s입니다\n", a, div, a % div,"짝수");
	printf("%d %% %d는 나머지가 %d이므로 %s입니다\n", b, div, b % div, "홀수");

}
*/


// 11.복합 대입 연산자 (자기자신= 자기자신 연산자 다른값: 누적)
/*
+=		: a+=b (a=a+b)
-=		: a-=b (a=a-b)
*=		: a*=b (a=a x b)
/=		: a/=b (a=a/b)
%=		: a%=b (a=a%b)
*/

//11_1)예시(1)
/*
# include <stdio.h>
void main() {
	int a = 5, b = 3;
	a += b;
	a = a - b;
	printf("a =%d, b=%d\n", a, b);
}
*/

//11_2) 예시(2)

/*
# include <stdio.h>
void main() {
	int n1, n2;
	n1 = 5, n2 = 5;
	printf("n1+=1=%d\n", n1 += 1);
	printf("n1-=1=%d\n", n1 -= 1);
	
	printf("n1*=n2 = %d\n", n1 *= n2);
	printf("n1/=n2= %d\n", n1 /= n2);
	printf("n1%=n2 = %d\n", n1 %= n2);

}
*/

// 12. 증감 연산자
/*
++num	: num값을 1 증가(누적) 후, num을 이용 (진행) (선 증가, 후 처리)
	    : val = ++num, (num을 1누적(증가) 후 val에 초기화)
num++	: num을 이용(진행) 후, num에 값 1 증가( 선 처리, 후 증가)
	    : val = num ++ (num값을 먼저 val에 초기화 후 num에 1증가)
--num	: num값을 1 감소(누적) 후, num을 이용
num--   : num을 먼저 이용 후, num값에서 1 감소 
*/


// 12_1) 예시(1)
/*
# include <stdio.h>
void main() {
	int n1 = 10, n2 = 11;
	printf("n1      : %d\n", n1);
	printf("n1++    : %d\n", n1++);
	printf("증가     : %d\n", n1);
	printf("\n");
	printf("n2      : %d\n", n2);
	printf("++n2    : %d\n", ++n2);
	printf("증가    : %d\n", n2);

}
*/


//12_2) Quiz
/*
# include <stdio.h>
void main() {
	int num1 = 10;
	int num2 = (num1--) + 2; // 이때 num1은 10값으로 처리함

	printf("num1 =%d\n", num1);   // 9    // num1은 결국 1감소
	printf("num2=%d\n", num2);    // 12   

}
*/


// 13. 자료형의 데이터 종류들의 크기
// 1 Byte= 문자 한 개(8bit)
// a ==97(01100001)
// _== ________

// 1024 Byte= 1KByte  ,1024KByte=1MByte  , 1024MByte=1GByte  , 1024GByte=1TByte

// 정수 데이터
//int(4바이트)     기본형(총: 2^33개 ,약 43억개)  ( 2^31 ~ (2^33-1))
// short int(2Byte)
// long int (4Byte)
// long long int (8Byte)
// unsigned int(4Byte: 0 ~양수)

// 실수 데이터
// double(8Byte)  기본형(2^64개)
// float(4Byte) 
// long float(8Byte)
// long double(8Byte)
// long long double(8Byte 초과)

// 문자 데이터
// char(1Byte) , 기본형(2^8) (-128~127)
// unsigned char (1Byte)  (0~255)

// void는 0바이트



//14. 자료형의 변환 (day03.c의 10_3) 산술 연산자예시 (3) 참고)

// 14_1) 예시(1)
/*
# include <stdio.h>
void main() {
	int n1;
	double n2 = 2.5;
	n1 = n2;
	printf("n1=%d, n2=%.1lf", n1, n2);   // 2  2.5

}
*/

//14_2) cast 연산자에 의한 강제 자료형 변환 :(자료형) 변수명
/*
# include <stdio.h>
int main() {
	int n1 = 5, n2 = 2;
	double n3;
	printf("결과1: %d\n", n1 / n2);
	n3 = (double)n2;
	printf("결과2_1: %.1lf\n", n1 / n3);
	printf("결과2_2: %d\n", n1 / n2);
	printf("결과3 : %d\n", n1 / (int)n3);
	return 0;

}
*/


//14. 관계 연산자 (판별식으로 조건이 맞으면 참(1) 맞지 않으면 거짓(0)
/*
A <			: A가 작다
A >			: A가 크다
A <=		: A가 작거나 같다
A >=		: A가 크거나 같다
크기 비교 연산자

A ==		: A와 같다
A !=		: A와 같지 않다
비교 연산자

*/

// 14_1) 예시(1)
/*
#include <stdio.h>
void main() {
	printf("%d와 %.1lf의 크기 비교 결과: %d\n", 1, 3.14, 1 <= 3.14);	
}
*/


// 판별식으로 연산될 경우 참은 정수값1 반호나 거짓은 0반환



// 15. 논리 연산자(참 및 거짓들을 논리로 판별)
/*
a || b		: 둘 중 적어도 1개가 참이면, 모두 참. 둘 다 거짓일때만 거짓(논리합: or)
a && b		: 둘 중 적어도 1개가 거짓이면, 모두 거짓. 둘 다 참일때만 참 (논리합: and)
!a			: 참이면 거짓. 거짓이면 참으로 값 반환(논리부정: not)
*/

// 15_1) 예시(1)
/*
#include <stdio.h>
void main() {
	printf("0 && 0: %d\n", 0 && 0);
	printf("0 && 1: %d\n", 0 && 1);
	printf("1 && 0: %d\n", 1 && 0);
	printf("1 && 1: %d\n", 1 && 1);
	printf("123 && 0.01: %d\n", 123 && 0.01);
    printf("1 && 0.0: %d\n", 1 && 0.0);
	printf("\n");
	printf("0 || 0: %d\n", 0 || 0);
	printf("0 || 1: %d\n", 0 || 1);
	printf("1 || 0: %d\n", 1 || 0);
	printf("1 || 1: %d\n", 1 || 1);
	printf("123 || 0: %d\n", 123 || 0);
	printf("\n");
	printf("10.0 !123 : %d\n", 10.0, !123);

}
*/

// 0: 거짓 1: 참 // 0을 제외한 나머지 값들은 모두 참

// 15_2) 예시(2) 관계연산자와 논리연산자
/*
# include <stdio.h>
void main() {
	int a = 5;
	double b = 5.01;
	printf("%d > %.1lf && 3 >2 : %d\n", a, b, a > b && 3 > 2);
	printf("%d < %.1lf && 3 >2 : %d\n", a, b, a < b && 3 > 2);
	printf("%d > %.1lf || 3 >2 : %d\n", a, b, a > b || 3 > 2);
	printf("%d > %.1lf || 3 <2 : %d\n", a, b, a > b || 3 < 2);
}
*/ 


// 15_3) Quiz
/*
#include <stdio.h>
void main() {
	int num1 = 10, num2 = 20;
	int res1, res2, res3;
	res1 = (num1 == 10 && num2 <= 12);
	res2 = (num1 < 10 || num2 > 12);
	res3 = (!num1 != 0);

}
*/

// 우선 순위
// 1순위: 묶는 녀석들 -> () {} []
// 2순위: 비교 대상이 적은 것 -> 단항연산자
// 3순위: 산술> 비교> 논리

//16. 비트 연산자 (10진수-> 2진수 (bit: 0,1) )들끼리 논리 비교
/*
|		: 비트 단위 논리합(OR)
&		: 비트 단위 논리곱(AND)
^		: 비트 단위 배타적 논리합(XOR)
~		: 비트 부정(NOT)
<<		: 비트 좌측 이동(Left Shift)
>>		: 비트 우측 이동(Right Shift)
*/


// 16_1) 예시(1)
/*
# include <stdio.h>
void main() {
	int n1 = 12;
	int n2 = 7;
	//int res1 = n1 | n2;
	//int res2 = n1 & n2;
	//int res3 = n1 ^ n2;

	//printf("res1: %d\n", res1);   // 12 -> 1100 , 7-> 111
								  // 1100 or 0111= 1111-> 15
	//printf("res2: %d\n", res2);   // 4
	//printf("res3: %d\n", res3);   // 11

	int su = 15;
	su = ~su;
	printf("su : %d\n", su);      // 15-> 00001111 -> NOT연산(11110000)에서 맨 왼쪽 1 : 음수부호
	                              // 1의 보수로 구한거에 2의 보수는 비트 +1만 함
	                              // 1의 보수결과값: -16
	                              // 2의 보수는 -15 (11110001)
	                              // 2의 보수랑 15의 비트로 된 거 더하면 0

	int mv1 = 30, res1;
	int mv2 = 30, res2;
	res1 = mv1 << 3;
	printf("res1: %d\n", res1);     // 00011110  -> 왼쪽으로 비트 3칸씩 이동 : 11110000
	res2 = mv2 >> 3;
	printf("res2: %d\n", res2);     // 00011110 -> 오른쪽으로 비트 3칸씩 이동: 00000011

}
*/



// 18. 기타 연산자 (sizeof(자료형),  ,(콤마연산자: A ,B 따로 구분, 조건부 연산자)
// sizeof()는 크기를 바이트 단위로 해서 정수값으로 반환
// , 연산자는 둘 이상의 변수 및 문장 선언을 바로 이어서 사용할 경우
// 조건부 연산자: 조건을 판별하여 조건이 참인 경우 참의 내용을 수행, 거짓이면 거짓을 수행
// 형태:        조건 ?   참  :  거짓













