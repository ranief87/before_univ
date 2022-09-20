/*
//16_1)예시1)
#include <stdio.h>
void main() {
	int n1 = 12;
	int n2 = 7;
	int res1 = n1 | n2;
	int res2 = n1 & n2;
	int res3 = n1 ^ n2;

	//printf("res1 : %d\n", res1); // 12 -> 1100,  7 -> 111
								 // 1100 or 0111 = 1111 -> 15
	//printf("res2 : %d\n", res2); //4
	//printf("res3 : %d\n", res3); //11

	int su = 15;
	su = ~su;
	printf("su :  %d\n", su);  //15 -> 00001111  ->NOT연산(11110000)에서 맨 왼쪽 1: 음수부호(-)
												 //1의 보수로 구한거라 2의 보수는 비트+1만 함
							   //1의 보수결과값: -16
							   //2의 보수는 -15

	int mv1 = 30, res1;
	int mv2 = 30, res2;
	res1 = mv1 << 3;
	printf("res1 : %d\n", res1);  //00011110  -> 왼쪽으로 비트 3칸씩 이동 : 11110000
	res2 = mv2 >> 3;
	printf("res2 : %d\n", res2);  //00011110  -> 오른쪽으로 비트 3칸씩 이동: 00000011
}
*/


//18.기타 연산자(sizeof(자료형),   ,(콤마연산자: A,B 따로 구별), 조건부 연산자)
// sizeof()는 크기를 바이트 단위로 해서 정수값으로 반환
// ,연산자는 둘 이상의 변수 및 문장 선언을 따로 이어서 사용 할 경우
// 조건부 연산자: 조건을 판별하여 조건이 참인 경우 참의 내용을 수행, 거짓이면 거짓을 수행
// 형태:       조건 ?   참  :  거짓;

/*
//18_1)예시1) sizeof(자료형)
#include <stdio.h>
void main() {
	int a = 123;
	char ch = 'a';
	double b = 3.14;
	float f = 2.17F;
	char str[10] = "clang";

	printf("int크기: %dByte\n", sizeof(int));
	printf("short int크기: %dByte\n", sizeof(short int));
	printf("char크기: %dByte\n", sizeof(char));
	printf("double크기: %dByte\n", sizeof(double));
	printf("float크기: %dByte\n", sizeof(float));
	printf("long float크기: %dByte\n", sizeof(long float));

	printf("\n");
	printf("%dB\n", sizeof(a));
	printf("%dB\n", sizeof(ch));
	printf("%dB\n", sizeof(a + ch));
	printf("%dB, %dB,  %dB\n", sizeof(b), sizeof(f), sizeof(b + f));
	printf("%dB\n", sizeof(a + f));
	printf("%dB\n", sizeof('A'));
}
*/

/*
//18_2),연산자 및 조건부 연산자
#include <stdio.h>
void main() {
	printf("콤마 연산자','는 "), printf("두 문장을 이어 주는 역할\n");
	printf("콤마 연산자','는 "); printf("두 문장을 이어 주는 역할\n");

	//조건부 연산자
	int n1 = 1;
	int n2 = 0;
	n1 ? printf("참\n") : printf("거짓\n");
	n2 ? printf("참\n") : printf("거짓\n");
}
*/


//19.표준 입력 함수 : scanf()		[키보드로 입력받아서 반환하는 함수]
// 콘솔창에 입력한 값을 실제 메모리(변수명의 주소값)에 저장 할 때 사용
// 기본 폼:  scanf("입력 서식 문자[%]", 입력위치(주소));
// int a;
// scanf("%d", &a);

//19_1) 현재 scanf()는 보안에 문제로 보안을 해제해야 사용 가능...
/*
#include <stdio.h>
void main() {
	int n;
	printf("정수값 입력: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}

//C4996에러 : scanf는 VC++2010이후부터 scanf()가 외부의 주소도 찾아가는 문제점 때문에
//			  보안 문제로 scanf-> scanf_s로 개정

*/

//19_2_1)scanf이용 방법1) 보안을 무시하는 정의를 선행처리
/*
#define _CRT_SECURE_NO_WARNINGS //보안 경고를 무시한다라고 정의
#include <stdio.h>
void main() {
	int n;
	printf("정수값 입력: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}
*/

//19_2_2)비주얼 스튜디오의 속성값으로 보안 무시 설정
/*
#include <stdio.h>
void main() {
	int n;
	printf("정수값 입력: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}
*/

//day05.c 소스파일 -> 속성 -> C/C++ 안에 SDL(보안프로그램)을 아니요 적용;
//단, 효력은 day05.c 소스파일 내에서만


//19_3)scanf_s를 이용

//1)숫자(%d,%lf)
//scanf_s("%서식", &변수명);

//2)문자(%c)
//scanf_s("%c", &변수명, 크기값);

//3)문자열(%s)
//scanf_s("%s", 변수명, 크기값);

/*
//19_3_1)scanf_s(정수)
#include <stdio.h>
void main() {
	int n;
	printf("정수 입력: ");
	scanf_s("%d", &n);
	printf("n : %d\n", n);
}
*/

//19_3_2)scanf_s(실수)
/*
#include <stdio.h>
void main() {
	double d;
	float f;
	printf("두 개의 실수값 입력: "); scanf_s("%lf%f", &d, &f);
	printf("d : %lf,  f: %f\n", d, f);
}
*/

/*
//19_4)scanf_s사용시 주의 사항
#include <stdio.h>
void main() {
	int n1, n2;
	//printf("정수1 입력: "); scanf_s("%d", &n1);
	//printf("정수2 입력: "); scanf_s("%d", &n2);
	//printf("n1: %d,  n2: %d\n", n1, n2);
	//1)입력이 2개면, 두 개 동시 입력도 가능하나, 출력따로 입력따로임으로 하나씩 사용..

	//printf("정수 입력: \n"); scanf_s("%d", &n1);
	//printf("n1: %d\n", n1);
	//2)문법엔 문제 X (단, 사용하기가 좀 요상함...)

	printf("정수 입력: "); scanf_s("%d\n", &n1);
	printf("n1: %d\n", n1);
	//3)입력함수는 서식지정자외엔 다른 입력값을 표현해서는 안됩니다.
	//다른 문자가 들어갈 경우: 하나 더 입력받아야한다고 판단..
}
*/

/*
//19_5)문자 및 문자열 입력
#include <stdio.h>
void main() {
	//문자 출력
	//char ch = ' ';
	//printf("문자입력: "); scanf_s("%c", &ch, sizeof(ch));  //크기는 1 가능
	//printf("ch : %c, %d\n", ch, ch);

	//문자열 출력
	//char str[10] = "abc";
	//printf("문자열 입력: "); scanf_s("%s", str, sizeof(str));
	//printf("str : %s\n", str);
	//문자열 입력은 문자의 갯수에따라 크기가 변함으로 반드시, 얼만큼 크기를 지정할지
	//"명확하게 인식"을 시켜야 하며,
	//문자열배열명: str은 배열의 첫번째 요소(인덱스번호[0])의 주소값이 저장되있음.
	// 주소 위치: &를 쓸 필요 X

	//문자열 입력시 주의사항(단어 입력시 띄어쓰기를 사용하면 안된다.)
	char word1[50];

	printf("단어 입력: "); scanf_s("%s", word1, 50);
	printf("Hello world !!!를 입력: %s\n", word1);
}
*/



//19_6)Quiz_1)한 개의 정수값, 한 개의 실수값을 입력받아서 덧셈과 뺄셈의 결과를 코딩
//예) %d + %lf = %lf를 입력받은걸로 사용


//19_7)Quiz_2)수강생 과목 정보입니다. 
//            수강생 이름, C, Linux, Windows, Network의 점수를 입력받고, 
//            합계 및 평균을 구해서 출력
















#include <stdio.h>
int main()
{
	char Student[20];
	int C = 0, Linux = 0, Windows = 0, Network = 0, sum;
	double avg;

	printf("수강생 : "); scanf_s("%s", Student, 20);
	printf("C점수 : "); scanf_s("%d", &C);
	printf("리눅스 점수 : "); scanf_s("%d", &Linux);
	printf("윈도우 점수 : "); scanf_s("%d", &Windows);
	printf("네트워크 점수 : "); scanf_s("%d", &Network);

	sum = C + Linux + Windows + Network;
	avg = (double)sum / 4;
	printf("\n");
	printf("=============================================================\n");
	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "수강생", "C", "Linux", "Win", "Net", "합계", "평균");

	printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2lf\n", Student, C, Linux, Windows, Network, sum, avg);
	return 0;
}

