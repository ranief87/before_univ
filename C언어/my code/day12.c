

// 33_6) 배ㅕㄹ의 문자와 문자열
/*
#include <stdio.h>
int  main() {
	// 문자 접근
	//char arr2[3];
	//arr2[0] = 'a';
	//arr2[1] = 'b';
	//arr2[2] = 'c';
	//printf("arr2[0]: %c, arr2[1] : %c, arr2[2] : %c\n", arr2[0], arr2[1], arr2[2]);

	//arr2[3] = 'd';
	//printf("arr2[3]: %d\n", arr2[3]);
	//return 0;


	// 문자열 접근
	char arr3[] = "c language";
	char arr4[6] = { "clang" };
	printf("%c\n", arr3);
	printf("%c\n", arr4);
	printf("배열 arr3의 크기 : %d\n",sizeof(arr3))
	printf("배열 arr4의 크기 : %d\n", sizeof(arr4));
	return 0;

}
*/
// 널 (NULL) 이 있어야만 문자열이 끝남


// 32. 배열의 문자열 표현
// char형 배열의 문자열 저장 및 널(null) 관계

// 32_1) 문자열 배열 예시(1)
/*
# include <stdio.h>
void main() {
	// 문자열 배열 선언
	char str[] = "C_ Lang_Array";
	printf("문자열 출력: %c\n", str);
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("null 문자 문자형: %c\n", str[12]);
	printf("null 문자 정수형: %d\n", str[12]);

	char nu = "\0"; // 널 문자
	char spb = " "; // 공백 문자
	printf("%d      %d\n", nu, spb);
	// 널은 공백이 아닙니다 문자로 출력할 경우 우리 눈에 보이지 않을 뿐
	// 공백과 널은 값을 가지고 있습니다

}

// 문자열의 널을 이용해서 







// 32_3) 널을 뺀 값(문자열의 길이:


















#include <stdio.h>
void main() {
	char str[]
}
*/












// 32_5) 단어를 입력받아서 저장 후 저장된 영단어를 거꾸로 저장해서 출력하는 코드 만들기
// 예시 

# include <stdio.h>
void main() {
	char str[50];
	char temp= " ";
	printf("단어 입력: "); scanf_s("%c", str, sizeof(str));

	int len = 0;
	while (str[len] != '\0') {
		len++;

	}
	for (int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[(len - 1)-1];
		str[(len - 1)-1] = temp;
	}
	printf(" 변경후 : %s\n", temp);
	

}












// 33. random 
// 임의의 값을 만드는 함수: rand()

#include <stdlib.h>
# include <stdio.h>
void main() {
	// 랜덤 불러오기
	printf("%d\n", rand());
	printf("%d\n", rand());

	// 변수명에 저장
	int rad;

}













