//day11.c

//31. 1차원 배열

// 정의: 같은 자료형으로 연속된 메모리 공간에 할당하여 사용.

// 문법
// 자료형 배열명[길이(갯수)];  //배열 선언
// int arr[3] = {1,2,3}; //배열 안에 값 초기화
//        배열명[인덱스번호] -> 인덱스번호에 있는 값 (시작은 0번째부터)
// int arr[5];   _ _ _ _ _ (인덱스[0~4], 크기는 int형(4Byte), 길이는 5개
//						   배열의 크기: 자료형 * 길이 (int형:4B, 길이: 5개, 4*5 = 20Byte)
//배열명은 배열의 첫번째 요소(인덱스:[0])의 시작주소 :  &배열명[0]


//배열의 사용도?
// -다수의 변수선언을 효율적으로 사용(배열명 1개로 여러 값 이용 가능)
// -다수의 변수로는 표현 할 수 없는 걸 배열이 가능!(순차적 메모리 할당!)


//사용예)
/*
int arr[10]; (arr배열 선언 : 길이가 10인 int형 배열 선언)
int arr1[5] = { 1,2,3,4,5 };  (초기값 데이터)
char arr2[6] = { "clang" };  (길이 6개에 문자열 초기화)
char arr3[] = "C language";  (포괄적으로 문자열 길이에 맞게 초기화)

//float arr4[];  Error: float 4Byte는 알아도 몇 개 줘야할지 선언을 모름(표현 X)
//double arr5[] = {1,2,3.14};  Error: 인덱스[0],[1]의 값은 int형 정수임으로 크기가 다름
*/
/*
//31_1)배열 예시1) 배열 접근
#include <stdio.h>
void main() {
	//정수(실수) 접근
	int arr[5];
	double darr[3];
	arr[0] = 1;
	arr[1] = 20;
	arr[2] = 300;
	arr[3] = 4000;
	darr[0] = 1.1, darr[1] = 1.14, darr[2] = 2.27;
	printf("0번째 인덱스 요소값: %d,    %g\n", arr[0], darr[0]);
	printf("1번째 인덱스 요소값: %d,    %g\n", arr[1], darr[1]);
	printf("2번째 인덱스 요소값: %d,    %g\n", arr[2], darr[2]);

	//darr[3] = 4.15;
	//printf("3번째 인덱스 요소값: %d,    %g\n", arr[3], darr[3]);
	//darr배열이 모르는 메모리에 접근해서는 절.대 안된다(darr[3]): 디버깅 에러
	//접근이 가능한 이유: 일정 크기의 메모리 연속으로 접근하기 때문!
	//printf("4번째 인덱스번호: %d\n", arr[4]);
}
*/

/*
//31_2)배열 예시2) 초기화
#include <stdio.h>
void main() {
	int arr[3] = { 1,2 }; //초기화시 값이 없으면, 0으로 초기화!
	double darr[2] = { 3.14 };
	printf("arr[1]:|%d|, arr[2]:|%d|\n", arr[1], arr[2]);
	printf("darr[1]:|%g|\n", darr[1]);
}
*/
/*
//31_3)배열 예시3) 반복문을 이용한 순처적 배열 선언 및 접근
#include <stdio.h>
void main() {
	int arr[10];   //{1,2,...,9,10}
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;    //arr[인덱스번호] = 인덱스번호 + 1;
	}
	for (int i = 1; i < 11; i++) {
		printf("arr[%d] : |%d|\n", i - 1, arr[i - 1]);
	}
}
*/
/*
//31_4)반복문 정수형 입력 및 배열 길이를 이용한 배열 선언
#include <stdio.h>
void main() {
	int arr[10], arrlen;
	//printf("int arr[10]의 크기: %dB\n", sizeof(arr)); //40B
	//printf("arr[4]의 크기: %dB\n", sizeof(arr[4]));   //4B
	arrlen = sizeof(arr) / sizeof(int);  //int형 배열 arr의 길이
	//printf("arrlen: %d\n", arrlen);
	for (int i = 0; i < arrlen; i++) {
		printf("arr[%d]번째 정수 입력: ",i);
		scanf_s("%d", &arr[i]);   //arr[i]는 배열 안의 요소값을 나타내므로, 주소값이 필요
	}
	int j = 0;
	while (j < arrlen) {
		printf("arr[%d] : %d\n", j, arr[j]);
		j++;
	}

}
*/


//숙제: 
//31_5)배열을 이용해서, 1 ~ 10까지 값들 저장하고 그 중 짝수값들 출력 후, 짝수값들의 합을 출력
/*
#include <stdio.h>
void main() {
	int arr[10], sum = 0, arrlen;
	arrlen = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arrlen ;i++) {
		arr[i] = i + 1;
		if (arr[i] % 2 == 0) {
			printf("arr[%d](짝수): %d\n", i,arr[i]);
			sum += arr[i];
		}
	}
	printf("짝수합: %d\n", sum);
}
*/

//31_6)길이가 5인 int형 배열을 선언해서, 총 5개의 정수를 입력받으면, 
//     최댓값,최솟값,총합을 구하는 코딩 작성합니다.
#include <stdio.h>
void main() {
	int arr1[5];
	int max, min, sum;
	for (int i = 0; i < 5; i++) {
		printf("정수값 1개씩 입력: "); scanf_s("%d", &arr1[i]);
	}
	max = min = sum = arr1[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr1[i]) {
			max = arr1[i];
		}
		if (min > arr1[i]) {
			min = arr1[i];
		}
		sum += arr1[i];
	}

	printf("최댓: %d, 최솟: %d, 총합: %d\n", max, min, sum);
}