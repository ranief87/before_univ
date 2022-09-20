//day18.c

//41_3)Call_by_value & Call_by_Reference

//41_3_1)Call_by_value(���� ���� �ϴ� ������ �Լ� ȣ��)
//(�߸��� ���� ����)
/*
#include <stdio.h>
void Swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("Swap �Լ� �� n1   n2 : %d  %d\n", n1, n2);
}

void main() {
	int num1 = 10, num2 = 20;
	printf("�Լ�ȣ�� ��  num1  num2: %d  %d\n", num1, num2);

	Swap(num1,num2);   //num1���� num2�� ����� ���� ���� �ٲ�� ���!
	printf("ȣ�ⳡ  num1  num2: %d  %d\n", num1, num2);
}
*/

/*
//41_3_2)Call_by_Reference(�ּҰ��� �����ϴ� ������ �Լ� ȣ��)
#include <stdio.h>

void Swap(int * nptr1, int *nptr2) {
	int temp = *nptr1;
	*nptr1 = *nptr2;
	*nptr2 = temp;
	printf("�����ͺ����� ����Ű�� ��  %d   %d \n", *nptr1, *nptr2);
}

void main(){
	int num1 = 10, num2 = 20;
	printf("�Լ�ȣ�� ��  num1  num2: %d  %d\n", num1, num2);
	int* ptr1 = &num1;

	Swap(ptr1, &num2);   
	printf("ȣ�ⳡ  num1  num2: %d  %d\n", num1, num2);
}
*/

/*
//41_4)Quiz_1)
//���� num�� ����� ���� ������ ����ϴ� �Լ��� ������ֽð�,
//�̸� ȣ���ϴ� �ڵ� �ۼ�
//�� ���� ������� �Լ��� �����غ��ϴ�.
//1)Call_by_value ����� Square_by_value(x)
//2)Call_by_reference ����� Square_by_reference(*x)

#include <stdio.h>
int Square_by_value(x);
void Square_by_reference(int* x);
int Square_by_reference1(int* x);
int* Square_by_reference2(int* x);

void main() {
	int num;
	printf("������ �Է�: "); scanf_s("%d", &num);
	int res = Square_by_value(num);
	printf("1)�� ���� ���: %d\n", res);

	int* ptr = &num;
	//Square_by_reference(ptr);

	//printf("%d\n", Square_by_reference1(ptr));
	printf("%d\n", num);

}

int Square_by_value(n) {
	return n * n;
}

void Square_by_reference(int* x) {
	int num = *x;
	*x = num * num;
}

int Square_by_reference1(int* x) {
	int num = *x;
	*x = num * num;
	return *x;
}

int* Square_by_reference2(int* x) {
	int num = *x;
	*x = num * num;
	return x;
}
*/

/*
//41_5)������ ����� const ����
#include <stdio.h>
void main() {
	//const  ������ ���ȭ
	int num1 = 20;
	const int num2 = 30;
	num1 = 200;
	//num2 = num1 + 30;  //const�� �� �� ������ ���� �ι��ٽ� ���ٲٰ� ������Ŵ


	//������ ������ ����Ű�� ����� const ����
	int n = 20;
	//printf("n: %d\n", n);
	const int* ptr = &n;
	n = 30;
	//printf("n: %d\n", n);
	//*ptr = 20;           //������ ����(const)
	//printf("n: %d\n", n);
}
*/

//const int* ptr�� ptr -> n
//���ȭ�� �Ǵ� �� *ptr�� ���ȭ�� �Ǽ�, ptr�� ����Ű�� ���·� �� ������ �����̴ϴ�.!
//��, n��ü�� ������ �����ѵ�, ���� ���ϰ� �ϴ°� ptr�����ͷ� ������ ��쿡�� ���� X

/*
//41_6)������ ������ ���ȭ
#include <stdio.h>
void main() {
	//������ ���� ��ü�� const  ����
	int n1 = 20, n2 = 200;
	int* ptr1 = &n1;
	int* const ptr2 = &n2;
	n2 = 20;
	*ptr2 = 200;
	//ptr2 = &n1;   //������ ����
}

//n2�� ���� �� �����ͷ� ����Ű�� ����� �� ���� ����������,
//�ּҰ�: ptr2�� ����Ű�� ���(�ּ�)�� ���� ��� ���� �ʽ��ϴ�.
*/



//43.�������� ������
//������ ������ ����Ű�� �� �ٸ� ������ ����(���� ������, ���� ������ ��)
//����:  �ڷ���** �������� �����ͺ����� = ������ ����;
/*
//43_1)����1)
#include <stdio.h>
void main() {
	double d = 3.14;
	double* ptr = &d;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p  %9p  %9p\n", ptr, *dptr, &d);
	printf("%9g  %9g  %9g\n", *ptr, **dptr, d);

	ptr2 = *dptr;		//ptr2 = ptr;
	*ptr2 = 1.147;

	printf("%9g  %9g  %9g\n", *ptr, **dptr, d);
}
*/

//  **dptr -> *(*dptr) -> *(ptr) -> d


//43_2)����: Swap�� ������ ���� ���� ���� Ȯ��

/*
//43_2_1)�ּҰ� ����� �� �����ؼ� �� �ٲٱ�(����)
#include <stdio.h>
void Swap1(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
	printf("�ּҰ� ����: %d  %d\n", *p1, *p2);
}

void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("���� �� *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);

	Swap1(ptr1,ptr2);
	printf("���� �� *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);
}
*/


//43_2_2)���������ͷ� �� �ٲٱ�(����)
#include <stdio.h>
void Swap2(int** p1, int** p2) {
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("�ּҰ� ����: %p  %p\n", *p1, *p2);
}

void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("���� �� *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);

	Swap2(&ptr1, &ptr2);
	printf("���� �� *ptr1, *ptr2:  %d   %d\n", *ptr1, *ptr2);
}



