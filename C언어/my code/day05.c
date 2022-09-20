

// 18. 기타 연산자 (sizeof(자료형),  ,(콤마연산자: A ,B 따로 구분, 조건부 연산자)
// sizeof()는 크기를 바이트 단위로 해서 정수값으로 반환
// , 연산자는 둘 이상의 변수 및 문장 선언을 바로 이어서 사용할 경우
// 조건부 연산자: 조건을 판별하여 조건이 참인 경우 참의 내용을 수행, 거짓이면 거짓을 수행
// 형태:        조건 ?   참  :  거짓


// 18_1) 예시(1) sizeof(자료형)
/*
#include <stdio.h>
void main() {
	int a = 123;
	char ch = 'a';
	double b = 3.14;
	float f = 2.17F;
	char str[10] = "clang";

	printf("int 크기: %d Byte\n", sizeof(int));
	printf("short int 크기: %d Byte\n", sizeof(short int));
	printf("char 크기: %d Byte\n", sizeof(char));
	printf("double 크기: %d Byte\n", sizeof(double));
	printf("float 크기: %d Byte\n", sizeof(float));
	printf("long float 크기: %d Byte\n", sizeof(long float));
	//printf("long long double 크기: %d Byte\n", sizeof(long long double)); // 64비트의 체제에서만 볼 수 있음 지금은 32비트

	printf("\n");
	printf("%dByte\n", sizeof(a));
	printf("%dByte\n", sizeof(ch));
	printf("%dByte\n", sizeof(a + ch));
	printf("%dByte ,%dByte ,%dByte\n", sizeof(b),sizeof(f),sizeof(b +f));
	printf("%dByte\n", sizeof(a + f));
	printf("%dByte\n", sizeof('A'));


}
*/


// 18_2) , 연산자 및 조건부 연산자
/*
# include <stdio.h>
void main() {
	printf("콤마 연산자 ','는 "), printf("두 문장을 이어주는 역할\n");
	printf("콤마 연산자 ','는 "); printf("두 문장을 이어주는 역할\n");

    // 조건부 연산자
	int n1 = 1;
	int n2 = 0;
	n1 ? printf("참\n") : printf("거짓\n");
	n2 ? printf("참\n") : printf("거짓\n");

}
*/



// 19. 표준 입력 함수 : scanf() 키보드로 입력받아서 반환하는 함수
// 콘솔창에 입력한 값을 실제 메모리 (변수명의 주솟값) 에 저장할 때 사용
// 기본 형태 :scanf("입력 서식 문자)










//19_2_2)비주얼 스튜디오의 속성값으로 보안 무시 설정

/*
#include <stdio.h>
void main() {
	int n;
	printf("정수값 입력: );
	scanf("%d , &n);
	printf("n : %d\n" , n);

}
*/

//day05.c 소스파일 -> 
// 단, 효력은 day05.c 소스파일 내에서만

// 19_3) scanf_s를 이용

// 1) 숫자(%d, %lf)
// scanf_s("%서식", & 변수명)

// 2) 문자(%c)
// scanf_s("%c",&변수명,크기값)


//3) 문자열(%s)
// scanf_s("%s", 변수명(이미 주소값을 가지고 있어서),크기값)

// 19_3_1) scanf_s(정수)

/*
# include <stdio.h>
void main() {
	int n;
	printf("정수입력: ");
	scanf_s("%d", &n);
	printf("n : %d\n", n);
}
*/

// 19_3_2) scanf_s(실수)
/*
#include <stdio.h>
void main() {
	double d;
	float f;
	printf("두 개의 실수값 입력: "); scanf_s("%lf%f", &d, &f);
	printf("d: %lf, f: %f", d, f);

}
*/

// 19_4) scanf_s 사용시 주의 사항
/*
#include <stdio.h>
void main() {
	int n1, n2;
	//printf("정수 1 입력: "); scanf_s("%d", &n1);
	//printf("정수 2 입력: "); scanf_s("%d", &n2);
	//printf("n1: %d, n2: %d\n", n1, n2);
	// 1) 입력이 2개면, 두 개 동시 입력도 가능하나, 출력따로 입력따로임으로 하나씩 사용

	//printf("정수 입력: \n"); scanf_s("%d", &n1);
	//printf("n1: %d\n", n1);
	// 문법엔 문제 x 사용하기에 조금 요상할뿐...

	printf("정수 입력: "); scanf_s("%d\n", &n1);
	printf("n1: %d\n", n1);
	// 2) 입력함수는 서식지원자외엔 다른 입력값을 표현해서는 안됩니다
	// 다른 문자가 들어갈 경우 하나 더 입력받아야 한다고 판단


}
*/


// 19_5) 문자 및 문자열 입력

# include <stdio.h>
void main() {
	// 문자 출력
	//char ch = 'a';
	//printf("문자입력: "); scanf_s("%c", &ch,1);  // 크기는 1 가능
	//printf("ch: %c, %d\n",ch,ch);

	// 문자열 출력
	char str[10] = "abc";
	printf("문자열 입력: "); scanf_s("%s", str, sizeof(str));
	printf("str: %s\n", str);
	// 문자열 입력은 문자의 갯수에 따라 크기가 변하니까 반드시 얼만큼인지 크기를 지정할지
	// 명확하게 인식을 시켜야 하며
	// 문자열 배열명: str은 배열의 첫번째 요소 (인덱스번호[0])의 주소값이 저장되어있음
	// 주소 위치, &를 쓸 필요 x

	//문자열 입력시 주의사항(단어 입력시 띄어쓰기를 사용하면 안된다.)
	char word1[50];
	printf("단어 입력: "); scanf_s("%s", word1, 50);
	printf("Hello World !!!를 입력: %s\n", word1);

}











