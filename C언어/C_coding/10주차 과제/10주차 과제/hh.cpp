// 10주차 과제

// 22. 배열 연습 01

#include <stdio.h>
int main() {
	int Score[6];
	int plus = 0;
	for (int i = 1; i < 6; ) {
		printf("%d 번 학생의 성적을 입력하세요:  ", i); scanf_s("%d", &Score[i-1]);
		plus += Score[i-1];
		i++;
		
	
	}
	printf("\n");


	printf("총점은 %d점이고 평균은 %d점입니다\n", plus, plus / 5);
	return 0;
	}
	*/


// 23. 배열 연습 02
/*
#include <stdio.h>
int main() {
	char naming[50];
	printf("이름이 뭐니? "); scanf_s("%s", &naming,30);
	printf("너가 바로 그 유명한 %s이구나\n", naming);
	return 0;
}

*/


// 24. 배열 연습 03

#include <stdio.h>
int main() {
	int number[10];
	int i, num;

	for (i = 0; i < 10; i++) {
		number[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d번째 수 입력: ", i + 1); scanf_s("%d", &num);
		if (num < 10 && num >= 0) {
			number[num]++;
		}
		else {
			printf("what the fruit");
		}
	}



	printf("[빈도 수 결과]\n");

	for (i = 0; i < 10; i++) {
		printf("%d빈도: %d\n", i, number[i]);
	}
	printf("\n");


}











