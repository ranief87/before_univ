

// ����  if��

// ����
/*
if (���ǽ�1) {
	���ǽ�1�� ���϶� ���� �� if�� ����
}
else if (���ǽ�2) {
	���ǽ�1�� �����̰� ���ǽ�2�� ���϶� ���� �� if�� ����
}
else if (���ǽ�3) {
	���ǽ�1�� 2�� �����϶� ���ǽ�3�� ���϶� ���� �� if�� ����
}
else {
	���� ���ǽĵ��� ��� �����϶� ���� �� if�� ����
}
*/



// 23_1) �־��� ��(24) �� ���� �� ���� ������ ������ �� �ڵ��غ���
// 10���� ū ����
// 20���� ū ����
// 30���� ū ����

/*
# include <stdio.h>
void main() {
	if (24 > 10) {
		printf("10���� ū ���̴�\n");
	}
	if (24 > 20) {
		printf("20���� ū ���̴�\n");
	}
	if (24 > 30) {
		printf("30���� ū ���̴�");
	}

}
*/

/*
#include <stdio.h>
void main() {
	int n = 24;
	if (n > 10) {
		printf("10���� ū ���̴�\n");
			if (n > 20) {
				printf("20���� ū ���̴�\n");
				if (n > 30) {
					printf("30���� ū ���̴�");
				}
			}		
	}	
}
*/


// 30���� ū ���� ��
/*
# include <stdio.h>
void main() {
	int n = 35;
	if (n > 10) {
		if (n > 20) {
			if (n > 30) {
				printf("30���� ũ��\n");
			}
			else {
				printf("20���� ũ��\n");
			}
		}
		else {
			printf("10���� ũ��\n");
		}
	}
}
*/

/*
# include <stdio.h>
void main() {
	int n = 27;
	if (n > 30) {
		printf("10���� ũ��\n");
	}
	else if (n > 20) {
		printf("20���� ũ��\n");
	}
	else if (n > 10) {
		printf("30���� ũ��\n");
	}
}
*/

// 23_2) ���� if�� ����(1)
// ����
// 0< num <= 10
// 0 > num
// 10 < num
// ������ ������ x
/*
# include <stdio.h>
void main() {
	int num;
	printf("�Է°�: "); scanf_s("%d", &num);
	if (num > 0 && num <= 10) {
		printf("0 �ʰ� 10����(%d)\n", num);
	}
	else if (num < 0) {
		printf("�����ε�(%d)\n", num);
	}
	else if (num > 10) {
		printf("10�ʰ�(%d)\n", num);
	}
}
*/



// 23_3) Quiz 
// 3���� ���� (���� ���� ����)�� ���� �Է� ���� �� ��հ��� ���ϰ�
// 70�̻��� �հ�
//60�̻� 70�̸��� �̴�
// 60 �̸��� ���հ��� �Ǵ��ؼ� ����ϴ� �ҽ��� ���

/*
# include <stdio.h>
void main() {
	float k, m, e, avg;
	printf("���� : "); scanf_s("%f", &k);
	printf("���� : "); scanf_s("%f", &m);
	printf("���� : "); scanf_s("%f", &e);
	avg = (k + m + e) / 3;
	if (avg >= 70) {
		printf("�հ�!");
	}
	else if (avg >= 60) {
		printf("-- �̴�");
	}
	else if (avg < 60) {
		printf("��! �հ�");
	}
}
*/

// 23_4) Quiz 3�� 5�� ����� �����ϴ� ���ǹ��� �ڵ�
// �ܼ�if, ��øif, ����if
// 3�� 5�� �����
// 3�� ���
// 5�� ���
// �� �� �ƴ� ��

// �ܼ� if 
/*
# include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("3�� 5�� �����");
	}
	if (n % 3 == 0) {
		printf("3�� ���");
	}
	if (n % 5 == 0) {
		printf("5�� ���");
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("�ش���� ����");
	}
}

*/


// ��øif
 /*
#include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0) {
		printf("n�� 3�� ���");
		if (n % 5 == 0) {
			printf("n�� 15�� ���");
		}
		else {
			printf("n�� 3�� ����̳� 5�� ����� �ƴ�");
		}
	}
	else {
		printf("�ش���� ����");
	}
	if (n % 5 == 0) {
		printf("5�� ���");
	}
}
*/


// ���� if
/*
# include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("n�� 3�� 5�� �����");
	}
	else if (n % 3 == 0) {
		printf("n�� 3�� ���");
	}
	else if (n % 5 == 0) {
		printf("n�� 5�� ���");
	}
	else if (n % 5 != 0 && n % 3 != 0) {
		printf("�ش���� ����");
	}
}
*/



// 23_5) Quiz
// 3rodml rhkahr 





// 25. ���: switch ~ case (����ġ: ��������)
/*
// ����
switch (��) {  // ���� �ƹ� ������ ���� �������� ���� �Ǵµ� �� ����� �ݵ�� ���;���
			  // ������� case�� ���õǴ� ����(���)�� �ǰ� �ؾ���
case ���1(������):
	��ɹ���;
	break;
case ���2:
	��ɹ���;
	break;
case ���3:��ɹ���; break;
default:
	����� �� ������ �������� ����� ����;
	break;


}
*/

// switch�� ���� ���� ������ ���� ���� case�� �������� ������
// case '���'
// break�� ������ ��� ���α׷��� ����


// 24_1) ����(1)

#include <stdio.h>
void main() {
	int n;
	printf("������ �Է�: "); scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("1�� ����\n");
		break;

	case 2:
		printf("2�� ����\n");
		break;
	case 3: printf("3�� ����\n"); break;
		// case num: printf("\n"); break; // case�� ������ ���
		// case 3.14: printf("�Ǽ��� �Ұ���\n"); break; // case�� ���� �迭�θ� ����
	case 'a': printf("a����\n"); break;

	default:
		printf("�� ����\n");
		break;
		// break: // default�� break�� ���� ����
	}
}





















