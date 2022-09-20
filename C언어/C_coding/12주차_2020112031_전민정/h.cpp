// 12주차 과제 

// 25. 포인터_연습

#include <stdio.h>
int main() {
	int nA[5];
	int* pA = NULL;
	int i = 0;

	pA = &nA[0];

	for (i = 0; i < 4; i++) {
		nA[i] = i;
	}

	printf("&nA = %d, &nA[0] = %d, pA = %d\n\n", &nA, &nA[0], pA);

	for (i = 0; i < 5; i++) {
		printf("nA[%d] = %d, &nA[%d] = %d\n", i, nA[i], i, &nA[i]);

	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("pA + %d = %d, *(pA + %d) = %d\n", i, pA + i, i, *(pA + i));
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		*(pA + i) = 10 + i;
		printf("*(pA + %d) = %d, nA[%d] = %d\n", i, *(pA + i), i, nA[i]);
	}

	return 0;
}
*/

// 26. 비상금_비밀지도

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int i, j, m, k;
	int arr_1[10][10];		
	int arr_2[10][10];

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		m = rand() % 1024;
		k = rand() % 1024;
		for (j = 9; j >= 0; j--) {
			arr_1[i][j] = m % 2;
			m = m / 2;

			arr_2[i][j] = m % 2;
			k = k / 2;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (arr_1[i][j] || arr_2[i][j]) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
	
}

