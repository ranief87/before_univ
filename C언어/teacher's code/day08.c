//day08.c

//24_5)Quiz_1)����ġ�� 3�� ������� �ƴ��� �����غ��ô�.
/*
#include <stdio.h>
void main() {
	int n;
	printf("�� �Է�: "); scanf_s("%d", &n);
	int nmg = n % 3;
	switch (nmg) {
	case 0: printf("%d�� 3�ǹ����\n", n); break;
	default: printf("%d�� 3�� ����� X\n", n); break;
	}
	
}
*/

/*
//24_6)Quiz_2)������ �������� �ڵ�

// 90�����ϸ�, A ���
// 80�����ϸ�, B ���
// 70�����ϸ�, C ���
// 60�����ϸ�, D ���
// 0�����ϸ�, F ���
#include <stdio.h>
void main() {
	int grade;
	printf("���� �Է�: "); scanf_s("%d", &grade);
	switch (grade) {
	case 90: printf("'A'\n"); break;
	case 80: printf("'B'\n"); break;
	case 70: printf("'C'\n"); break;
	case 60: printf("'D'\n"); break;
	case 0: printf("'F'\n"); break;
	}
}
*/


//25. ���(�ݺ���: for��)
//������ ������ �����ϴ� ���� � ó���� '������ Ƚ����ŭ �ݺ�'�ؼ� ����
//���� ó��(�ڵ�) �Ǵ� ������ �ڵ带 �����ϰ� ������ Ƚ����ŭ ������ �� �ַ� ���

//����
//for (�ʱ��(��); ���ǽ�; ����������[��������] ) {
//	�ݺ��� ��ɵ�;
//}

/*
//25_1)for �ݺ��� ��ƺ���
#include <stdio.h>
void main() {
	//1)���� �������� �ʱⰪ ���
	//int i = 1;
	//for (i = 0; i < 2; i++) {
	//	printf("i : %d\n", i);
	//}
	//printf("i�� %dȸ���� for�� �������ϴ�.\n",i);

	//2)�ʱⰪ�� for�� �ȿ� ����
	//for (int i = 0; i < 2; ++i) {
	//	printf("i : %d\n", i);
	//}
	//printf("%d\n", i);    //Error: for�� �ȿ� �ʱ�� ������ for�������� �����մϴ�.

	//3)������ ����
	//for (int i = 0; i <= 1;) {
		//i++;
		//printf("i: %d\n", i);
		//i++;
	//}

	//4)�ʱⰪ �ٸ��� ǥ��
	int i = 2;
	for (i = 1; i >= 0; i--) {
		printf("i: %d\n", i);
	}

}
*/



//25_2)Quiz_3) ���� 1���� 10������ ���� ������ ���(for��)
/*
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 0; a < 10;a++ ) {
		printf("%d  ", a + 1);
	}
}
*/
//25_3)Quiz_4) ���� 1���� 10������ �� �� ¦���� ������ ���( for + if, for����)
//for+if
/*
#include <stdio.h>
void main() {
	for (int a = 1; a <= 10; a++) {
		if (a % 2 == 0) {
			printf("%d ", a);
		}
	}
}
*/

/*
//for����
#include <stdio.h>
void main() {
	for (int n = 2; n < 11; n+=2) {
		printf("%d  ", n);
	}
}
*/


/*
//25_4)1���� 10���� ��� ������ ��?  1 + 2 + .. + 9 + 10 : 55 
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a;   //sum = sum + a;   ���� �հ� �ڵ�	
		//printf("%d = %d + %d\n", sum, sum - a, a);  //�����
	}
	printf("\n�հ� : %d\n", sum);
}
*/

//25_5)�ʱⰪ �ٸ� ���...
//1)
/*
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 1;
	int cnt = 0;
	for (a = -1; a < 11; a++) {
		sum += a;
		cnt++;
	}
	printf("�հ� : %d, Ƚ��: %dȸ\n", sum, cnt);
}
*/
/*
//2)
#include <stdio.h>
void main() {
	int a = 1;
	int sum = 1;
	int cnt = 0;
	for (a = 1; a < 11; a++) {
		if (a > 1) {
			sum += a;
			cnt++;
		}
	}
	printf("�հ� : %d, Ƚ��: %dȸ\n", sum, cnt);
}

*/





//25_6)Quiz_5) 1���� 100���� �� 7�� ����� �հ� ������ ���ϴ� �ҽ� �ڵ�
/*
#include <stdio.h>
void main() {
	int a = 1, sum = 0, cnt = 0;
	for (a; a <= 100; a++) {
		if (a % 7 == 0) {
			sum += a;
			cnt++;
		}
	}
	printf("��: %d, ����: %d��\n", sum, cnt);
}
*/

//25_7)Quiz_6) 1���� 10������ ���ڸ� �� ���� ������ ���� �� Ȧ������ ����ϴ� �ҽ� �ڵ�
//��, ��°�� =>       1, 3, 15, 21, 45, 55
#include <stdio.h>
void main() {
	int a = 0, sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a;
		if (sum % 2 == 1) {
			if (a == 10) {  //sum == 55
				printf("%d\n", sum);
			}
			else {
				printf("%d, ", sum);
			}
			//����: ����ġ�� ���� if ~ else�� ������ ����� ǥ��

			//printf("%d, ", sum);  //�ؿ� �̽��������� ���� �̿�
		}
	}
	//printf("\b\b \n");  //�齺���̽��� �̿�
}






