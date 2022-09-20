//day12.c
/*
//31_6)배열의 문자와 문자열
#include <stdio.h>
int main() {
	//문자 접근
	//char arr2[3];
	//arr2[0] = 'a';
	//arr2[1] = 'b';
	//arr2[2] = 'c';
	//printf("arr2[0] : %c, arr2[1] : %c, arr2[2] : %c\n", arr2[0], arr2[1], arr2[2]);

	//arr2[3] = 'd';
	//printf("arr2[3]: %c\n",arr2[3]);
	//printf("%s\n", arr2);  //-> 문자열 배열은 널이 필요

	//문자열 접근
	char arr3[] = "C Language";
	char arr4[6] = { "Clang" };
	printf("%s\n", arr3);
	printf("%s\n", arr4);
	printf("배열 arr3의 크기: %dB\n", sizeof(arr3));
	printf("배열 arr4의 크기: %dB\n", sizeof(arr4));
	return 0;
}
*/

//널(NULL) 문자는 문자열의 끝을 의미합니다.


//32.배열의 문자열 표현
//char형 배열의 문자열 저장 및 널(null)관계
/*
//32_1)문자열 배열 예시1)
#include <stdio.h>
void main() {
	//문자열 배열 선언
	char str[] = "C_Lang_Array";
	printf("문자열 출력: %s\n", str);  //배열명은 배열명의 인덱스 0을 가리킨 주소값
	printf("배열 str의 크기: %dByte\n", sizeof(str));
	printf("널 문자 문자형: %c\n", str[12]); //널 문자는 값은 존재하지만, 문자 출력으론 볼 수 X
	printf("널 문자 정수형: %d\n", str[12]); //공백처럼 값이 안보여도 '\0'이란 널 값은 존재

	char nu = '\0';  //널 문자
	char spb = ' ';  //공백 문자
	printf("%d    %d\n", nu, spb);
	//널은 공백이 아닙니다. 문자로 출력할 경우 저희 눈에 보이지 않을 뿐,
	//공백과 널은 값을 가지고 있습니다.!
}
*/

//문자열의 널을 이용해서 문자열이 끝났다라는 걸 알려 줄 수 있다.
/*
//32_2)문자열의 중간에 널 삽입해서 문자열 끝 변경하기
#include <stdio.h>
void main() {
	char str[50] = "I need C Programming";
	printf("문자열: %s\n", str);
	printf("크기?:%dB\n", sizeof(str));

	printf("널 확인: %d\n", str[20]);
	//printf("%d\n", str[30]);  // 어차피 널은 str[20]에 있음으로 의미 X

	str[8] = '\0';
	printf("문자열: %s\n", str);
	printf("안나온 문자: %c\n", str[12]);

	str[6] = 0;
	printf("문자열: %s\n", str);

	str[6] = ' ', str[8] = ' ';
	printf("문자열: %s\n", str);
}
*/

/*
//32_3)널을 뺀 값( 문자열의 길이: 함수)
// strlen(문자열) : 널을 뺀 갯수
#include <stdio.h>
#include <string.h>    //strlen(x)이 내장(문자열과 관련된 헤더파일)

void main() {
	
	//char str[] = "clang";
	//printf("문자열의 길이: %d\n", strlen(str));
	//char str1[50];
	//printf("문자열 입력: "); scanf_s("%s", str1, sizeof(str1));
	//printf("문자열의 길이: %d\n", strlen(str1));
	
	//printf("문자열 길이: %d\n", strlen("chl"));

}
*/

/*
//32_4)strlen함수 없이 문자열 길이 구하기
#include <stdio.h>
void main() {
	char str[50];  //충분한 문자 갯수 넣기 위함.
	int len = 0;
	printf("단어 입력: "); scanf_s("%s", str, sizeof(str));

	while (str[len] != '\0') {  //널이 될 때까지 갯수 증가
		len++;
	}
	printf("문자열: %s,  문자열 길이: %d\n", str, len);
}
*/



//32_5)Quiz_1)단어를 입력해서 저장 후, 저장된 영단어를 거꾸로 저장해서 출력하는 코드 만들기
//예시)  chlrkd  -> dkrlhc
/*
//함수없이
#include <stdio.h>
void main() {
	char arr[50];
	char temp = ' ';

	printf("단어 입력: "); scanf_s("%s", arr, sizeof(arr));
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	//printf("문자열 길이: %d\n", len);
	printf("초기값 문자열: %s\n", arr);
	for (int i = 0; i < len/2; i++) {
		temp = arr[i];
		arr[i] = arr[(len - i) - 1];
		arr[(len - i) - 1] = temp;
	}
	printf("변경후 문자열: %s\n", arr);
}
*/

/*
//함수이용(새로운 문자열 배열 선언해서 거꾸로 저장)
#include <stdio.h>
#include <string.h>
void main() {
	char arr[30];
	printf("단어 입력: "); scanf_s("%s", arr, sizeof(arr));
	char tmp[30];

	//chlrkd  ->  dkrlhc
	printf("초기값 문자열: %s\n", arr);

	for (int i = 0; i < strlen(arr); i++) {
		tmp[i] = arr[strlen(arr) - i - 1];
	}
	tmp[strlen(arr)] = '\0';

	printf("변경후 문자열: %s\n", tmp);
}
*/



//33.random 및 기타 함수들 불러오기
// 임의의 값을 만드는 함수: rand();
// 이 함수는 <stdlib.h>에 내장된 함수

/*
//33_1)예시1)
#include <stdlib.h>
#include <stdio.h>
void main() {
	//1)랜덤 불러오기
	//printf("난수 : %d\n", rand());
	//printf("난수 : %d\n", rand());

	//2)변수명에 저장
	int ran;
	ran = rand();
	printf("난수 : %d\n", ran);
	//rand()는 정수값을 규칙이 있게 랜덤 뽑기(변하지 X)
}
*/

/*
//33_2)예시2) srand(초기값)
// rand() 함수의 초기값을 설정하는 함수(마찬가지로 <stdlib.h>에 내장)
#include <stdlib.h>
#include <stdio.h>
void main() {
	int i, num = 0;
	srand(6);  //초기값 설정해서 임의값 생성(단, 정수만)
	for (i = 0; i < 3; i++) {
		num = rand();
		printf("rand: %d\n", num);
	}
}
*/


//33_3)예시3)  time(NULL) 함수
// 1970년 1월 1일 0시 0분 0초 부터 현재 까지 흐른 초 수를 돌려주는 함수
// <time.h>에 내장(시간과 관련된 함수들이 저장된 헤더파일)
// 형식: time(NULL);    보통: srand(time(NULL)); 로 함께 사용(난수)
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main() {
	int i, num = 0;
	//printf("%lld\n", time(NULL));
	srand(time(NULL));  
	for (i = 0; i < 20; i++) {
		num = rand();
		printf("rand: %d\n", num);
		printf("rand % 10 : %d\n", rand() % 10);  //0 ~ 9까지의 임의 난수

		//Quiz_2) 1 ~ 10 까지의 난수 뽑기
		//Quiz_3)  1 ~ 100 까지의 난수 뽑기
		//Quiz_4)  -1 ~ 1 까지의 난수 뽑기
	}
}
*/


