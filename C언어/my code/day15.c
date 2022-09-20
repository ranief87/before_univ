

// 36_7) 포인터 변수로 이루어진 '포인터 배열'
// 포인터 변수로 이루어지며 주소 값 저장이 가능한 배열
// 1. int arr1[10] : 길이가 10인 int형 포인터 변수로 이루어진 배열
// 2. double arr2[5] : 길이가 5인 double형 포인터 변수로 이루어진 배열




// 36_8) 포인터 배열 정수
/*
#include <stdio.h>
void main() {
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = { &n1,&n2,&n3 };

	printf("%d\n%d\n%d\n", *arr[0], *arr[1], *arr[2]);
	printf("%p\n%p\n%p\n", arr[0], arr[1], arr[2]); // 변수들의 주소값을 출력 함으로 메모리 순서 x
	printf("%d\n", sizeof(arr));  // 메모리의 주소크기: 4byte 
}
*/





// 36_9) 포인터 배열 문자열
/*
# include <stdio.h>
void main() {
	char* strarr[3] = { "One","Two","쓰리" };

	printf("%s    %s    %s\n", strarr[0],strarr[1],strarr[2]);
	printf("%p    %p    %p\n", strarr[0], strarr[1], strarr[2]);

	// printf("%s\n",strarr);
	printf("%s\n", *strarr);
	// printf("%s\n", &strarr[0]);  // 이것은 포인터 배열의 인덱스 주소값을 나타냄으로 문자열과는 관계 x
	printf("%p     %p\n", strarr, &strarr[0]);
	printf("%d\n", sizeof(strarr)); // 12b  // 주소값의 크기
}
*/




// 36_9) Quiz 1.
// 길이 6인 int형 배열 arr 선언= {1,2,3,4,5,6}
// 배열의 숫자가 거꾸로 되게 합니다
// 단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 이용해서 활용


/*
# include <stdio.h>
void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr[0], * ptr2 = arr[1], * temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d  %d\n", ptr1, ptr2);


}
 
# include <stdio.h>
void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* arr_m[6] = { &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5] };
	// printf("%p   %p",arr_m[0],arr_m[1]);
	int i = 0, temp = 0, len = 0;
	len = sizeof(arr_m) / sizeof(int*);
	printf("%d\n", len);

	
	// 1) 포인터 배열 이용
	for (i = 0, i < len / 2, i++) {
		temp = *arr_m[i];
		*arr_m[i] = *arr_m[len - 1 - i];
		*arr_m[len - 1 - i] = temp;

	}
	

	// 2) 포인터 변수 2개 이용
	int* fptr = &arr[0], * bptr = &arr[0];

	for (i = 0; i < len / 2, i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;

	}




	for (i = 0, i < 6; i++) {
		printf("%d", arr[1]);
		if (i == 0) {
			printf("\n");
		}
	}
}

*/




// 37. 함수 (function): 사용자가 직접 정의 또는 이미 정의된 함수를 호출해서 사용
// 특정한 기능을 수행하는 하나의 독립된 명령
// 어떠한 기능을 함수로 구현하면 내가 원할 때 함수를 호출해서 사용
// 한 개의 함수를 정의하면, 한 개의 기능만 되게 결과가 나타나는 게 좋다


// 간단하게 함수 정의
// 함수정의
/*
반환자료형 함수명() {
	기능1;
	기능2;
	...;

	return 반환자료형과 동일한 기능에서 나온 결과식(값);
}

*/


// 2) 호출

//void main() {
	//함수명()
//}


// 37_1) 함수의 출력함수: printf()값 반환
/*
#include <stdio.h>
void main() {
	int n1, n2;
	n1 = printf("123\n");
	n2 = printf("string length\n");
}
*/



// 37_2) 함수 이용하기
/*
#include <stdio.h>
void func() {
	printf("함수(func) 호출해서 반환\n");
}

void main() {
	func();

}
*/


//37_3) 함수는 기본적으로 main 함수 이전에 정의합니다.
/*
#include <stdio.h>

void main() {
	func();

}

void func() {
	printf("함수(func) 호출해서 반환\n");
}
*/




// 37_4) 함수의 종류: 전달인수의 반환 값의 유무
// 1. 전달인수 (o)  반환값(o)
// 2. 전달인수 (o)  반환값(x)
// 3. 전달인수 (x)  반환값(o)
// 4. 전달인수 (x)  반환값(x)

// 함수의 구조
/*
#include <stdio.h>
// 함수 정의
//반환자료형 임의의 함수명(자료형1 매개변수1, 자료형2 매개변수2...) {

	임의의 함수명 기능들;

	return 기능에 대한 결과값(식);  // 형태는 반환자료형과 동일!
}

// 함수 추출
void main() {
	임의의 함수명(전달인수1, 전달인수2...);
}
*/
// 매개변수란? 함수 호출시 전달인수의 값을 전달 받는 변수
// 전달인수(인수)란? 함수 호출할때 매개변수에 전달 되는 값
// 인수와 매개변수는 별개지만 값을 서로 주고 받기 때문에 갯수는 반드시 동일!





// 37_5) 제일 많이 쓰는 함수 형식(인수, 반환) 둘 다 존재
/*
# include <stdio.h>
int add(int n1, int n2) {      // add(정수1, 정수2) 함수 호출시 매개변수가 인수값을 받음
	return n1 + n2;             // 매개변수에 저장된 값 두 개를 더해서 결과값 반환
}

void main() {
	int res,a,b;
	printf("add res:   %d\n", add(3, 7));
	res = add(3, 7);

	printf("add res:   %d\n", res);

	a = 5, b = 12;
	res = add(a, b);
	printf("%d", res);

}

*/



// 37_5_2) 전달인수 및 반환값 유무

# include <stdio.h>
int add(int n1, int n2) {    // 인수(o) 반환(o)
	int hap = 0;             // 함수에 변수 따로 선언하면 그 함수 영역에서만 존재하는 변수
	hap = n1 + n2;
	return hap;              // 결과 반환
}

void show_add(int num) {   // 인수(o)  반환(x)
	int hap = 0, n = 1;
	hap = num + 0;
	printf("위의 기능 관계 x add의 덧셈결과만 출력  %d\n", num);
}


int shad_num(void) {      // 인수(x)  반환(o)
	int num;
	scanf_s("%d", &num1);
	return num;          // 매개변수에 void는 생략 가능(인수를 받지 않는다)
}

void void_use() {      // 인수(x)   반환(x)
	printf("void_use()함수는 실행 안되고, 아무것도 반환 x \n");
	printf("두 개의 정수를 입력하면 덧셈 결과가 출력");
	return;    // return 은 반환 값이 없다라는 의미입니다. 생략 가능
}

void main() {
	int res, num1, num2;
	void_use();

}




