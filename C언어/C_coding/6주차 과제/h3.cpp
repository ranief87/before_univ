// 7���� ����

// 13. ���� ���� ����

#include <stdio.h>
int main() {
	int a,b,c,d,e,f;
	double num1 = 0.0,num2=0.0;
	double total1 = 0.00, total2 = 0.00;
	double g, h;


	printf("�����ü�(��): "); scanf_s("%d", &a);
	printf("\n");
	rewind(stdin);

	printf("[���] \(10%%\)\n");
	printf("����(���� 3ȸ= �Ἦ 1ȸ): "); scanf_s("%d", &b);
	rewind(stdin);
    

	printf("�Ἦ(���� �ü� 1/5 �̻� F): "); scanf_s("%d", &c);
	printf("\n");
	printf("\n");
	rewind(stdin);

	printf("[����] \(30%%/40%%\)\n");
	printf("�߰���� ����(100�� ����): "); scanf_s("%d", &d);
	
	rewind(stdin);

	printf("�⸻��� ����(100�� ����): "); scanf_s("%d", &e);
	printf("\n");
	printf("\n");
	rewind(stdin);

	printf("[��Ÿ] \(20%%\)\n");
	printf("���� ����(10�� ����): "); scanf_s("%d", &f);
	printf("\n");
	printf("\n");

	if (a == 17) {
		g=b/3;
		num1 = g + c;
		if (num1 > 17 / 5) {
			printf("��� �̴��̹Ƿ� ���� ������ F�̴�..");
		}
		else {
			total1 = (double)f * 2.0 + (double)e * 0.4 + (double)d * 0.3 + 0.1 * (100.0 - ((double)(num1 / a) * 100.0));
			if (total1 >= 80) {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ A�̴�.", total1);
			}
			else if (total1 < 60) {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ C�̴�.", total1);
			}
			else {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ B�̴�.", total1);
			}
		}
	}

	else if (a == 34) {
		h = b / 3;
		num2 = h + c;
		if (num2 > 34 / 5) {
			printf("��� �̴��̹Ƿ� ���� ������ F�̴�..");
		}
		else {
			total2 = (double)f * 2.0 + (double)e * 0.4 + (double)d * 0.3 + 0.1 * (100 - ((double)(num2 / a) * 100));
			if (total2 >= 80) {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ A�̴�.", total2);
			}
			else if (total2 < 60) {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ C�̴�.", total2);
			}
			else {
				printf("���� �� ������ %.2lf���̹Ƿ� ������ B�̴�.", total2);
			}
		}
		printf("\n");
	}






}

// 14. ��Ģ ���� ����
/*
#include <stdio.h>
int main() {
	float a, b;
	char c;
	printf("�� �Ǽ��� �Է�: "); scanf_s("%f", &a); scanf_s("%f", &b);
	rewind(stdin);
	printf("�����ȣ(+,-,*,/) �Է�: "); scanf_s("%c", &c,1);
	printf("\n");
	switch (c) {
	case 43:
		printf("���� %.f �Դϴ�\n", a + b);
		break;
	case 45:
		printf("���� %.f �Դϴ�\n", a - b);
		break;
	case 42:
		printf("���� %.f �Դϴ�\n", a * b);
		break;
	case 47:
		printf("���� %.2f �Դϴ�\n", a / b);
		break;
	default:
		printf("�߸��� ���� ��ȣ�Դϴ�\n");
	}
	printf("\n");
	return 0;
}
*/



// 15. ���޻��� �뷡�� �ϴ°�
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("    ___(__)___\n");
	printf("   |        |\n");
	printf("  |    ___   |\n");
	printf("  |   ('v') |\n");
	printf("  |  ((___)) |\n");
	printf("  |--/-\"---\"---|\n");

	printf("\n");
	srand((unsigned)time(NULL));
	int num1, num2;
	int num3 = 0;
	num1 = rand() % 24;
	num2 = rand() % 2;
	if (num1 > 12) {
		printf("���� �ð��� ���� %d���Դϴ�.\n", num1 - 12);
		num3 = num1-12;
	}
	else {
		printf("���� �ð��� ���� %d���Դϴ�.\n", num1);
	}
	
	if (num2 == 0) { 
		printf("���� ������ ȭâ���� �ʽ��ϴ�.\n");
	}
	else {
		printf("���� ������ ȭâ�մϴ�.\n");
	}

	printf("\n");

	if (num2 == 1) {
		if (num1 >= 6 && num1 <= 9) {
			printf(">���޻��� �뷡�� �Ѵ� �������� ������~\n");
		}
		else if (num3 >= 2 && num3 <= 4) {
			printf(">���޻��� �뷡�� �Ѵ� �������� ������~ \n");
		}
		else {
			printf(">���޻��� �뷡�� ���� �ʴ´�\n");
		}
	}
	else {
		printf(">���޻��� �뷡�� ���� �ʴ´�\n");
	}
	printf("\n");
	return 0;




}
*/

