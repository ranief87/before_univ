

// 35. 포인터와 배열의 관계

// 배열명은 항상 배열의 시작 주소를 의미(인덱스 0번째 주소값)
// 배열이 현재 주소값을 저장하고 있는데, 포인터의 경우 배열의 주소를 받을 수 있어서, 포인터에 배열이 연결
// 배열명은 결국 포인터다.  다만, 주소값 변경이 불가능한 '포인터 상수'

// 예시
/*
# include <stdio.h>
void main() {
	int arr[3] = { -1,0,1 };
	printf("배열명: %p\n", arr);
	printf("&arr[0]: %p\n", &arr[0]);
	printf("&arr[1]: %p\n", &arr[1]);
	printf("&arr[2]: %p\n", &arr[2]);

	printf("arr[0]: %d\n", arr[0]);
	// arr[0]은 arr이라는 주소 안에 첫번째 요소 값
	printf("&arr[3]: %p\n", &arr[3]);
	// 배열에 없는 인덱스번호로 주소를 가리키면 배열의 순차적이고 일정한 크기로 인해
	// 다른 주소의 값도 확인은 가능하다!


}
*/

// 35_2)포인터와 배열 예시(2)
/*
# include <stdio.h>
void main() {
	int arr[2] = { 10,20 };
	int* ptr = &arr[0];


	printf("포인터 -> %d     %d\n", *ptr, *arr);
	printf("%p  %p\n", arr, ptr);
	printf("%d  %d\n", ptr[0], prt[1]);
}
*/

// 정리
// 1. 배열명과 포인터변수는 다 포인터(주소값 저장된 경로 값을 가리킴)
// 2. 배열명: 포인터 상수, 포잍어: 포인터 변수
// 3. 배열명이 하는 걸 포인터변수가 , 포인터변수가 하는 걸 배열명이 가능


// 36. 포인터의 연산
// 포인터를 대상으로 연산합니다. 즉 *형을 연산하는데 배열[]도 가능합니다
// 연산으로 증감만 가능. 곱, 나눗셈은 불가
// 메모리주소값을 연산하는 걸 포인터 연산이라고 해서 (다음 주소, 이전 주소를 나타냄)



//36_2) 포인터 연산 예시(2)
/*
# include <stdio.h>
void main() {
	int arr[3] = { 11,22 };
	int* ptr = arr;

	printf("arr[0]: %d  arr[1]: %d  arr[2]: %d\n", *ptr, *(ptr + 1), *ptr + 1);
	// *ptr은 arr에 저장된 주소값을 포인터로 가리킨 값: 11
	// *(ptr+1)은 ptr에 저장된 주소값에 1만큼 크기 증가로 arr[1]을 말함
	// *ptr + 1은 ptr이 가리킨 값 =11에서 +1에서 12로 나옴

	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	ptr--;
	printf("%d\n", *ptr);

	printf("%d\n", *arr);
	printf("%d\n", *(arr + 1));

	//arr++;
	// 배열명은 항상 0번째 주소값을 갖고 있어야하기 때문에 주소값을 변경해서 초기화는 불가능


}
*/


// 36_3) Quiz 1 . 정수값 5개를 입력받아서 배열에 저장합니다
// 그리고, 각 배열의 주소값(인덱스)과 그것을 가리키는 포인터를 이용해서 주소와 결과값(*)을 출력
/*
# include <stdio.h>
void main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수값 입력: ", i); scanf_s("%d", &a[i]);
	}

	for (int j = 0; j < 5; j++) {
		printf("배열주소: %p, 포인터결과값: %d\n", &a[j], *(a + j));
	}

}
*/

// 36_3) Quiz 3
// 길이가 5인 int형 배열 arr을 선언후 1부터 5까지 초기화 후
// arr의 마지막 요소를 가리키는 포인터 변수 ptr을 선언
// 그 다음 포인터 변수 ptr에 저장된 값을 1씩 감소되는 형태로 배열 요소에 접근해서
// 5+4+3+2+1가 된 결과 출력

/*
#include <stdio.h>
void main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];

	int total = 0;
	for (int i = 0; i < 5; i++) {
		ptr--;

	}
}
*/


// 36_5) 상수 형태의 문자열을 가리키는 포인터
// 문자열: "___"문자열 끝에 "\0"
// 두 가지 형태의 문자열을 표현
// 1. 배열: char str[] = "abcd" // str배열에 문자들 abcd로 초기화(문자열(변수))
// 2. 포인터: char* ptr = "defg"



// 36_6) 상수형 문자열 포인터 예시

#include <stdio.h>
void main() {
	char str1[] = "clang"; // 변수 형태의 문자열 배열
	char* str2 = "clang";   // 상수 형태의 문자열 포인터
	printf("str[0]: %c  str2[0]: %d\n", *str1, *str2);  // " " 안에 요소는 문자들임
	printf("str1: %s  str2: %s\n", str1, str2);         // 두 개 똑같이 "clang"을 출력
	printf("주소 출력: str1: %p   str2: %p\n", str1, str2);

	str2 = "Alang";
	printf("str1: %s  str2: %s\n", str1, str2);
	str1[0] = 'X';
	printf("str1: %s\n", str1);
	str2[0] = "X";     // 
	printf("str2[0]: %c\n", str2[0]);
	printf("str2: %s\n", str2);


}








