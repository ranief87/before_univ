//day07.c

//23. ���� if��
/*
//����
if (���ǽ�1) {
	���ǽ�1�� ���� ��, ���� ��, if������;
}
else if (���ǽ�2) {
	���ǽ�1�� �����̰�, ���ǽ�2�� �� �� ��, ���� ��, if������;
	//���ǽ�1�� ���̸�, �ߵ� X
}
else if (���ǽ�3) {
	���ǽ�1�� 2�� �����̰�, ���ǽ�3�� ���� ��, ���� ��, if������;
}
else {
	���� ���ǽĵ��� �� ������ ��, ���� ��, if�� ����;
}
*/

//23_1)�־��� ��(24)�� ���� ��, ���� ������ ������ ��, ����غ���
//10���� ū ����.
//20���� ū ����.
//30���� ū ����.

/*
//1.�ܼ�if��
#include <stdio.h>
void main() {
	//(10���� ū ��, 20���� ū �� ��)
	int n = 24;
	//if (n > 10) {
	//	printf("10���� ũ��.\n");
	//}
	//if (n > 20) {
	//	printf("20���� ũ��.\n");
	//}
	//if (n > 30) {
	//	printf("30���� ũ��\n");
	//}

	//20���� ū ���� ��
	if (n > 10 && n <= 20) {
		printf("10���� ũ��.\n");
	}
	if (n > 20 && n <= 30) {
		printf("20���� ũ��.\n");
	}
	if (n > 30) {
		printf("30���� ũ��\n");
	}
}
*/

/*
//2.��ø if����
#include <stdio.h>
void main() {
	int n = 24;
	//(10���� ū ��, 20���� ū �� ��)
	//if (n > 10) {
	//	printf("10���� ũ��\n");
	//	if (n > 20) {
	//		printf("20���� ũ��\n");
	//		if (n > 30) {
	//			printf("30���� ũ��\n");
	//		}
	//	}
	//}

	//20���� ū ���� ��
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

//10���� ū ����.
//20���� ū ����.
//30���� ū ����.

/*
//3.����if��
#include <stdio.h>
void main() {
	int n = 24;
	if (n > 30) {
		printf("30���� ũ��\n");
	}
	else if (n > 20) {
		printf("20���� ũ��\n");
	}
	else if (n > 10) {
		printf("10���� ũ��\n");
	}
}
*/

/*
//23_2)����if�� ����2)
//����
//1) 0 < num <= 10
//2) 0 > num
//3) 10 < num
//4) ������ ������ X
#include <stdio.h>
void main() {
	int num;
	printf("�Է°�: "); scanf_s("%d", &num);
	if (0 < num && num <= 10) {
		printf("0�ʰ� 10����(%d)\n", num);
	}
	else if (num < 0) {
		printf("0�̸� (%d)\n", num);
	}
	else if (num > 10) {
		printf("10�ʰ� (%d)\n", num);
	}
	else {
		printf("0��: %d\n", num);
	}
}
*/



//23_4)Quiz_3)3�� 5�� ����� �����ϴ� ���ǹ��� �ڵ�(�ܼ�if��,��øif��,����if��)
//1)3�� 5�� ���(�����)
//2)3�� ���
//3)5�� ���
//4)3�� ����� 5�� ����� �ƴ� ��
/*
//�ܼ�if��
#include <stdio.h>
void main() {
	int n;
	printf("������: "); scanf_s("%d", &n);

	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d�� 3�� 5�� �����.\n", n);
	}
	if (n % 3 == 0 && n % 5 != 0) {
		printf("%d�� 3�� �����.\n", n);
	}
	if (n % 5 == 0 && n % 3 != 0) {
		printf("%d�� 5�� �����.\n", n);
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d�� 5�� ����� 3�� ����� �ƴϴ�.\n", n);
	}
}
*/

//��øif
//1)�ڵ尡 ����, �ߺ��� �Ǽ� ���� X
/*
#include <stdio.h>
void main() {
	int n;
	printf("������: "); scanf_s("%d", &n);
	if (n % 3 == 0) {
		if (n % 5 == 0) {
			printf("%d�� 3�� 5�� �����.\n", n);
		}
		else {
			printf("%d�� 3�� �����.\n", n);
		}
	}
	if (n % 5 == 0) {
		if (n % 3 == 0) {
			printf("%d�� 3�� 5�� �����.\n", n);
		}
		else {
			printf("%d�� 5�� �����.\n", n);
		}
	}
	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d�� 5�� ����� 3�� ����� �ƴϴ�.\n", n);
	}
}
*/

/*
//2)���� X(else���� ��������)
#include <stdio.h>
void main() {
	int n;
	printf("������: "); scanf_s("%d", &n);

	if (n % 3 != 0 && n % 5 != 0) {
		printf("%d�� 5�� ����� 3�� ����� �ƴϴ�.\n", n);
	}
	else {   //n % 3 == 0 || n % 5 == 0
		if (n % 3 == 0) {
			if (n % 5 == 0) {
				printf("%d�� 3�� 5�� �����.\n", n);
			}
			else {
				printf("%d�� 3�� �����.\n", n);
			}
		}
		if (n % 5 == 0 && n % 3 != 0) {
			printf("%d�� 5�� �����.\n", n);
		}
	}

}
*/
/*
//3)��øif�� (��, else���� �ǵ����̸� ���ǽ��� ���� ���� ����.)
#include <stdio.h>
void main() {
	int n;
	printf("������: "); scanf_s("%d", &n);

	if (n % 3 == 0) {
		if (n % 5 == 0) {
			printf("%d�� 3�� 5�� �����.\n", n);
		}
		else {
			printf("%d�� 3�� �����.\n", n);
		}
	}
	else {    //n % 3 != 0
		if (n % 5 == 0) {
			printf("%d�� 5�� �����.\n", n);
		}
		else {
			printf("%d�� 5�� ����� 3�� ����� �ƴϴ�.\n", n);
		}
	}
}
*/
/*
//����if��
//1)3�� 5�� ���(�����)
//2)3�� ���
//3)5�� ���
//4)3�� ����� 5�� ����� �ƴ� ��
#include <stdio.h>
void main() {
	int n;
	printf("������: "); scanf_s("%d", &n);

	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d�� 3�� 5�� �����.\n", n);
	}
	else if (n % 3 == 0) {
		printf("%d�� 3�� �����.\n", n);
	}
	else if (n % 5 == 0) {
		printf("%d�� 5�� �����.\n", n);
	}
	else {
		printf("%d�� 5�� ����� 3�� ����� �ƴϴ�.\n", n);
	}
}
*/

/*
//23_5)Quiz_4)
// 3���� ����(����,����,����)�� ���� �Է� ���� ��, ��հ��� ���ϰ�,
// 70.00�� �̻��� �հ�
// 60.00�� ~ 69.xx���� �̴�
// 60.00�� �̸��� ���հ��� �Ǵ��ؼ� ����ϴ� �ҽ��� �ڵ�
#include <stdio.h>
void main() {
	int kor, mat, eng;
	double avg = 0.0;

	printf("����: "); scanf_s("%d",&kor);
	printf("����: "); scanf_s("%d", &mat);
	printf("����: "); scanf_s("%d", &eng);
	
	avg = (double)(kor + mat + eng) / 3;
	printf("%.2lf\n", avg);

	if (0 <= avg && avg <= 100) {
		if (avg >= 70) {
			printf("�հ�!\n");
		}
		else if (60 <= avg && avg < 70) {
			printf("�̴�\n");
		}
		else {
			printf("���հ�...\n");
		}
	}
	else {
		printf("��������� �߸�����ϴ�. �ٽ����ּ���.\n");
	}

}
*/




//24.��� : switch ~ case (����ġ : ��������)
/*
//����
switch (��) {   //���� �ƹ� ������ ���� �������� ���� �Ǵµ� 
				//������� case�� ���õǴ� ����(���)�� �ǰ� �ؾ���.
case ���1(����):
	��ɹ���;
	break;
case ���2:
	��ɹ���;
	break;
case ���3: ��ɹ���; break;
default:
	����Ǽ������� �������� ����� ����;
	break;
}
*/

//switch�� ���� ���� '������ ��'�� ���� case�� �������� ���õ�
//case '���'
// break�� ������ ��� ���α׷��� �ߴ�
/*
//24_1)����1)�� : ����
#include <stdio.h>
void main() {
	int n;
	int num = 4;
	printf("������ �Է�: "); scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("1�� ����\n");
		break;
	case 2:
		printf("2�� ����\n");
		break;
	case 3: printf("3�� ����\n"); break;

	//case num:printf("\n"); break;  //case�� ������ ���
	//case 4.14: printf("�Ǽ��� �Ұ���\n"); //case�� ���� �迭�θ� ����
	case 'a': printf("a������\n"); break;
	default:
		printf("1,2,3�� ������ �� ����\n");
		//break;   //default�� break�� ���� ����
	}

}
*/
//case�� �� ����� �� ǥ��: ���ĺ��� ���� �����.