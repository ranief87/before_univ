// 10���� ����

// 22. �迭 ���� 01

#include <stdio.h>
int main() {
	int Score[6];
	int plus = 0;
	for (int i = 1; i < 6; ) {
		printf("%d �� �л��� ������ �Է��ϼ���:  ", i); scanf_s("%d", &Score[i-1]);
		plus += Score[i-1];
		i++;
		
	
	}
	printf("\n");


	printf("������ %d���̰� ����� %d���Դϴ�\n", plus, plus / 5);
	return 0;
	}
	*/


// 23. �迭 ���� 02
/*
#include <stdio.h>
int main() {
	char naming[50];
	printf("�̸��� ����? "); scanf_s("%s", &naming,30);
	printf("�ʰ� �ٷ� �� ������ %s�̱���\n", naming);
	return 0;
}

*/


// 24. �迭 ���� 03

#include <stdio.h>
int main() {
	int number[10];
	int i, num;

	for (i = 0; i < 10; i++) {
		number[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d��° �� �Է�: ", i + 1); scanf_s("%d", &num);
		if (num < 10 && num >= 0) {
			number[num]++;
		}
		else {
			printf("what the fruit");
		}
	}



	printf("[�� �� ���]\n");

	for (i = 0; i < 10; i++) {
		printf("%d��: %d\n", i, number[i]);
	}
	printf("\n");


}











