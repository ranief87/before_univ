//day16.c

//�Լ����
/*
//37_7)�Լ��� ���� �� ���� ���� ���
#include <stdio.h>
void main() {
	//func();			//������ ����: func ��ü�� ��
	func1();			//���� ȣ�� �ȵǴ°� ����
						//�׷���, ����� ��Ʃ��� ���α׷� Ư�� ������
						//�Լ� ȣ�� �������� �ڷ����� ���� ������, ����Ʈ������ int�� ����(exturn)
}

void func() {
	printf("funcȣ��..\n");
}

int func1() {
	printf("�⺻������ �Լ� ȣ�� �� ������ ���� ��� ����Ʈ��(int��)���� ����\n");
	return 0;
}
*/

/*
//37_8)�Լ����� �̸� ���� ��, ȣ���ؼ�, �ؿ� �Լ� ���� ǥ��
#include <stdio.h>
//1)�Լ� ���� : �Լ��� ������ ���� ����(������ X)
void func();

//2)�Լ� ȣ��
void main() {
	func();
}

//3)�Լ� ����
void func() {
	printf("func�Լ� ȣ��\n");
}
*/

/*
//37_9)�Լ� ������ �̿뵵
#include <stdio.h>
//�̸� ������ ��, �Լ� �̸��� �ٷ� ȣ���ؼ� �۾��ϸ�, �����ϱ⵵ ������ ������ �۾� �� �� �ִ�!
int kg();
double it();
char bank();
void eroom();

void main() {
	kg();
	it();
	bank();
	eroom();
}

int kg() {
	printf("1)�� �Լ� ȣ��\n");
	return 1;
}

double it() {
	printf("2�� ȣ��\n");
	return 1.1;
}

char bank() {
	printf("3�� ȣ��(%c)\n", 'a');
	return 'a';
}

void eroom(void) {
	printf("������ȣ��\n");
	return;
}

*/

/*
//37_9)�Լ� ���� return�� ��뵵(�� �� �̻� ��ȯ�� �Ұ���)
#include <stdio.h>
int Two_num(int a, int b);

void main() {
	printf("%d\n", Two_num(1, 2));
}

int Two_num(int n1, int n2) {
	return n1 + 1, n2 + 2;  //return�� ����� ��Ÿ���Ƿ� �ݵ��, �ϳ��� ��ȯ!(�������Ÿ�)
	return n1;	//return�� ����� ��ȯ ��, �׻� ���� ����
	return n2;
}
*/

/*
//37_10)�Լ� ���� return�� �� �� �̻� ����
#include <stdio.h>
int Return_Compare(int num1, int num2);

void main() {
	printf("3�� 4�߿��� ū ���� %d�̴�.\n", Return_Compare(3, 4));
	printf("4�� 3�߿��� ū ���� %d�̴�.\n", Return_Compare(4, 3));
}

int Return_Compare(int n1, int n2) {
	if (n1 >= n2)		//�߰�ȣ ������ ����������, �����ϰԸ� ǥ�� �� ���� �̿����ּ���.
						//��Ģ�� { ~ } ���������� ������ ������� ���α׷��� �ν� X
						//�ǵ��� ��Ģ���� ���ֽñ�ٶ��ϴ�!
		return n1;
	else
		return n2;
}
*/


/*
//37_11)Quiz_1)
//���� �ڵ带 �̿��ϸ�, �Լ� �ϳ��� �߰��ؼ� ����ϴ�.
//�Լ��� ������ ���ϴ� �Լ�: Abs_Compare()��� �Լ��� ���� ��������.
//������ ���� ����� ������ ���ݴϴ�.
#include <stdio.h>
#include <stdio.h>
int Return_Compare(int num1, int num2);
int Abs_Compare(int num);
void main() {
	//printf("%d\n", Abs_Compare(-5));   //�����

	int a, b;
	printf("�� ���� ������ �Է�:"); scanf_s("%d%d", &a, &b);
	printf("%d�� %d�߿��� ������ ū ���� %d�̴�.\n", a,b,Return_Compare(a, b));
	//ex) -1�� -2 �� ���� ū ��: -2
}
int Return_Compare(int n1, int n2) {
	if (Abs_Compare(n1) >= Abs_Compare(n2))		
		return n1;
	else
		return n2;

	//���� ���� �Լ��� ���ο� �Լ��� �߰��ؼ� ��ɵ� �����ϸ�, ���ο� �Լ��� ���� �� �ִ�!
}

int Abs_Compare(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
	//return num;
}

*/



//38.������ ����Ⱓ�� ���ٹ���
//�˾ƾ� �� ��!
//1. �޸𸮻� �����ϴ� �Ⱓ��?
//2. ������ ���� �� �� �ִ� ������?

//38_1)����������?
//���������� �Լ�() ���� '�߰�ȣ{ ~ } �ȿ���' ����� �������� �Լ��� ���������� �մϴ�.
//����� �߰�ȣ�� ���������� �� �ȿ� �������� ����Ǹ� �� ����� ���������� �˴ϴ�.
// ��Ȯ��, ���������� {} �ȿ� ������ ����� �������� ���� �������� ��ȿ�ϴ�.

/*
//38_1_1)����1)
#include <stdio.h>
int Func_One(void) {
	int n = 1;						// �Լ� ȣ�� ���� ���� Func_One�� n�� ����
	n++;
	printf("Func_One n: %d\n", n);
	return 0;
}									//ȣ�� ���� ��, FUnc_One�� n�� '�ڵ� �Ҹ�'

int Func_Two() {
	int n = 5;
	int n1 = 4;
	n++, n1--;
	printf("n & n1 : %d  %d\n", n, n1);
	return 0;
}

void main() {
	int n = 50;
	Func_One();
	Func_Two();
	printf("main n : %d\n", n);
	//printf("%d\n", n1);   //n1�� Func_Two() {} �ȿ����� ��� ����
}
*/

//���������� ����� ���ķ� �� ����� ���� �������� ���� ����
// �ٸ� ������ ������ �̸��� �־�� �޸𸮴� ������ ���� �ٸ��� ������ ���� �̸� ���� ����!


//38_1_2)�پ��� ������ ��������
//����1) ����� �߰�ȣ �� ����� ������ ����������
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 0; n < 3; n++) {
		int num = 0;			//����� num = 0�� for�� �� ������, �Ҹ�ǰ�, �ٽ� ���Ҵ��.
								//�ݺ��� �ȿ� �Ϲ������� ���� ������ �ʿ�ܿ� �Ⱦ��°� �����ϴ�.
								//�޸𸮿� ���Ӱ� �Ҵ�ǰ�, �Ҹ��ϴ� �δ��� �ǿ�!
		++num;
		printf("%d��° �ݺ�, �������� num�� %d.\n", n + 1, num);
		printf("%p\n", &num); //�ݺ������� ���������� �Ȱ��� �ּ� �޸𸮿� ���Ҵ�ȴ�!
	}

	if (n == 3) {
		int num = 7;
		num++;
		printf("if�� ���� �����ϴ� �������� num: %d\n", num);
	}

	//printf("%d\n", num);
}
*/

//����2)���������� �ܺο� ����� ������ ������ ������.
#include <stdio.h>
void main() {
	int num = 100;
	//printf("main %p\n", &num);

	if (num == 100) {
		int num = 7;			//if�� ������ num
		//printf("if %p\n", &num);
		//num = 7;		//main�� �ִ� num�� ����ؼ� ���� O
		num += 10;
		printf("if�� �� �������� num: %d\n", num); //17
	}
	printf("main �Լ� �� �������� num: %d\n", num); //100
}

//main�Լ��� num�� if ���� num�� ������ �ݴϴ�. �ٸ�, if�� num�� ���� ����Ǹ�,
//if�� num�� main�� num�� ������, if�� num�� �˴ϴ�.




