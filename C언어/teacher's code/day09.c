//day09.c

//for�� ���
/*
//25_8)5���� ������ �Է� �޾Ƽ� �Է¹��� ������
// �ִ�, �ּڰ��� ���ϴ� �ڵ�(��, ������ 0 ~ 100 �ȿ� �ִٰ� ����)
#include <stdio.h>
void main() {
	int score = 0, max = 0, min = 100;
	for (int i = 0; i < 5; i++) {
		if (0 <= score && score <= 100) {
			printf("%d° �����Է�: ", i + 1); scanf_s("%d", &score);
			if (max < score) {
				max = score;
			}
			if (min > score) {
				min = score;
			}
		}
		else {
			printf("���� �߸� �Է�...\n");
		}
	}
	printf("max: %d,   min: %d\n", max, min);
}
*/

/*
//26.for���� ���� ���� �� �������� ��..
#include <stdio.h>
void main() {
	//1)�ʱⰪ����
	//int i = 1;
	//for (; i <= 2 ; i++) {   //���� X
	//	printf("%d  ", i);
	//}
	
	//2)���ǽ��� �����Ǹ� ���ǰ�? '��'(���ѹݺ�)
	//for (int j = 0; ; j++) {
	//	printf("%d\n", j);
	//}

	//3)�ʱ�İ� �������� �� ���� ����� �ݺ���
	char a;
	int b;
	printf("a,b\n===============\n");
	for (a = 'A', b = 65; a <= 'Z'; a++, b++) {
		printf("%c %d\n", a, b);
	}
}
*/



//27. ��ø for��(����)
//����
/*
for (�ʱ��1; ���ǽ�1; ������1) {
	�ݺ��� ��ɹ�1;
	for (�ʱ��2; ���ǽ�2; ������2) {
		�ݺ��� ��ɹ�2;
	}
}
*/

/*
//27_1)�ݺ��� ���� �ݺ����� �� �� ������
#include <stdio.h>
void main() {
	//27_1_1)for1�� i�� 2�� �� ��, for2�� j�� 3�� �� ��, k�� 6�� �ݺ� Ȯ��
	//int i, j, k = 0;
	//for (i = 1; i <= 2; i++) {
	//	for (j = 1; j <= 3; j++) {
	//		k++;
	//		printf("i = %d,   j = %d,  k = %d��\n", i, j, k);
	//	}
	//}

	//27_1_2)�ܺι�, ���ι� ����
	//int a = 0, b = 0;
	//for (a = 1; a <= 2; a++) {
	//	printf("�ܺ�1: for���� %d��° ����~\n", a);
	//	for (b = 1; b < 4; b++) {
	//		printf("  ����: for���� %d��° ��\n", b);
	//	}
	//	printf("�ܺ�2: for���� %d �� start\n", a);
	//}

	//27_1_3)���� for���� ������
	//1)for���� �ʱ�� ����(���� X)
	//for (int a = 1; a < 3;a++) {
	//	for (int j = 1; j < 3; j++)
	//		printf("a = %d,  j = %d\n", a, j);
	//}

	//2)�ٱ� �ʱ���� �̿�()
	int i = 1, j = 1;
	for (i; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {  //����for���� �ʱⰪ�� �ٽ� �ʱ�ȭ ���Ѽ�
								    //��ݺ��� �ϰ� ������մϴ�.!
			printf("i = %d, j = %d\n", i, j);
		}
	}
	printf("i: %d, j: %d\n", i, j);
}
*/


//27_2)Quiz_1)
//27_2_1) ������ ���       (���η� �� �ܾ�)

//2 * 1 = 2    2 * 2 = 4  ...    2 * 9 = 18
//3 * 1 = 3    3 * 2 = 6  ...    3 * 9 = 27
//...
//9 * 1 = 9	  9 * 2 = 18 ...    9 * 9 = 81
/*
#include <stdio.h>
void main() {
	int a = 2, b = 1;
	for (a = 2; a < 10;a++) {
		printf("%d��: \t", a);
		for (b = 1; b <= 9; b++) {
			printf("%d * %d = %d\t", a, b, a * b);
		}
		printf("\n");
	}
}
*/


//27_2_2)  ������ ���      (���η� �� �ܾ�)
//2��          3��               9��
//2 * 1 = 2    3 * 1 = 3  ...    9 * 1 = 9
//2 * 2 = 4    3 * 2 = 6  ...    9 * 3 = 18
//...
//2 * 9 = 18   3 * 9 = 27 ...    9 * 9 = 81
/*
#include <stdio.h>
void main() {
	int a = 2, b = 1;
	//for (int k = 2; k < 10; k++) {
	//	printf("%d��\t\t", k);
	//}
	//printf("\n");
	for (a = 1; a < 10; a++) {
		if (a == 1) {
			for (int k = 2; k < 10; k++) {
				printf("%d��\t\t", k);
			}
			printf("\n");
		}
		for (b = 2; b <= 9; b++) {
			printf("%d * %d = %d\t", b, a, a * b);
		}
		printf("\n");
	}
}
*/



//28.��� - while��
// for���� �����ϰ� �ݺ�
// ������ ������ ������ ���� �ݺ�

//����
/*
�ڷ��� ������ = �ʱⰪ;
while (���ǽ�) {
	�ݺ��� ��ɹ�(���ǽ��� ������ ������ ����);
	//������(����)
}
*/

//28_1)���� �ݺ�
/*
#include <stdio.h>
void main() {
	int i = 1;
	while (i++) {
		printf("i = %d\n", i);
	}
}
*/


/*
//28_2) i�� 10���� �۰ų� ���� ������ �ݺ� ( 0~10)
#include <stdio.h>
void main() {
	int i = 0;
	while(i <= 10) {
		printf("i : %d\n", i++);
	}
}
*/

/*
//28_3) �ʱⰪ i = 10, i�� 0�� ������ �ݺ�(���)
#include <stdio.h>
void main() {
	int i = 10;
	while (i) {   //i > 0   , i != 0
		printf("i:%d\n", i);
		i--;
	}
	printf("i�� %d���� ����\n", i);
}
*/


//28_4)Quiz_3) 1 ~ 100������ �� (while��)
/*
#include <stdio.h>
void main() {
	int n = 1;
	int sum = 0;
	while (n < 101) {
		sum += n;  //sum = sum + n;
		n++;
	}
	printf("��: %d\n", sum);
}
*/

//28_5)Quiz_4) 1 ~ 100������ �� �߿��� 3�� 5�� ������� ������ ���ϴ� �ҽ� �ڵ�
#include <stdio.h>
void main() {
	int n = 1, cnt = 0;
	while (n <= 100) {
		if (n % 3 == 0 && n % 5 == 0) {
			cnt++;
		}
		n++;
	}
	printf("����: %d��\n", cnt);
}


