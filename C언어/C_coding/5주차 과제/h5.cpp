// 5주차 과제

// 1.
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
	srand(unsigned(time(NULL)));
	int num1, num2,a,b,c;
	num1 = rand() % 100;
	num2 = rand() % 100;

	printf("1. %d + %d= ", num1, num2); scanf_s("%d", &a);
	if (a == num1 + num2) {
		printf("정답!");
	}
	else {
		printf("오답..");
	}
	printf("\n");
	printf("\n");
	printf("2. %d - %d=", num1, num2); scanf_s("%d", &b);
	

	if (b == num1 - num2) {
		printf("정답!");
	}
	else {
		printf("오답..");
	}
	printf("\n");
	printf("\n");
	printf("3. %d * %d=", num1, num2); scanf_s("%d", &c);
	if (c == num1 * num2) {
		printf("정답!");
	}
	else {
		printf("오답..");


	}
	printf("\n");
	printf("\n");
}
*/


// 2.

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
	int num1;
	char a,b;
	
	
	srand((unsigned)time(NULL));
	num1 = rand() % 9;

	printf(" 박수: \'x\' \n");
	printf("\n"); 
	printf("%d > ",num1); scanf_s("%c",&a,1);
	int c = atoi(&a);
	
	rewind(stdin);



	if (a == 'x') {

		if (num1 % 3 == 0) {
			printf("정답!\n");
		}
		else {
			printf("틀림..\n");
		}
	}
	else if (atoi(&a) == (num1 + 1)&& (num1+1) % 3 != 0) {
		printf("정답!\n");
	}
	else {
		printf("틀림..\n");
	}
	
	printf("\n");

	printf("%d > ", atoi(&a)); scanf_s("%c", &b, 1);
	

	if (b=='x') {
		
		if ((c+1) % 3==0) {
			printf("정답!\n");
		}
		else {
			printf("틀림..\n");
		}
	}
	else if (atoi(&b) == (c+1)) {
		printf("정답!\n");
	}
		else {
			printf("틀림..\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
