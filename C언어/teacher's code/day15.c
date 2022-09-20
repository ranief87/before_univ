//day15.c

//36_7)������ ������ �̷���� '������ �迭'
//������ ������ �̷������, �ּ� �� ������ ������ �迭
// 1. int* arr1[10];  ���̰� 10�� int�� ������ ������ �̷��� �迭
// 2. double* arr2[5]; ���̰� 5�� double�� ������ ������ �̷��� �迭

/*
//36_8)������ �迭 ����
#include <stdio.h>
void main() {
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = { &n1, &n2, &n3 };

	printf("%d   %d   %d\n", *arr[0], *arr[1], *arr[2]);
	printf("%p   %p   %p\n", arr[0], arr[1], arr[2]); //�������� �ּҰ��� ��� ������ �޸� ���� X
	printf("%dB\n", sizeof(arr)); //�޸� �ּ�ũ��: 4B * 3 
}
*/

/*
//36_9)������ �迭 ���ڿ�
#include <stdio.h>
void main() {
	char* strarr[3] ={"One", "Two", "����"};
	
	printf("%s    %s    %s\n", strarr[0], strarr[1], strarr[2]);
	printf("%p    %p    %p\n", strarr[0], strarr[1], strarr[2]);

	//printf("%s\n", strarr);
	//printf("%s\n", &strarr[0]); //�̰��� ������ �迭�� �ε��� �ּҰ��� ��Ÿ���Ƿ� ���ڿ��� ����X
	printf("%s\n", *strarr);
	printf("%p      %p\n", strarr, &strarr[0]);
	printf("%dB\n", sizeof(strarr));  //12B

}
*/


//36_8)Quiz_1)
// ����:6�� int�� �迭 arr ���� = {1,2,3,4,5,6}
// �迭�� ������ �Ųٷ� �ǰ� �մϴ�.
// ��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �̿��ؼ� Ȱ��!
/*
#include <stdio.h>
void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* arr_m[6] = { &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5] };
	//printf("%p   %p\n", arr_m[0], arr_m[1]);
	int i = 0, temp = 0, len = 0;
	len = sizeof(arr_m) / sizeof(int*);
	printf("%d\n", len);
	
	//1)������ �迭 �̿�
	//for (i = 0; i < len/2; i++) {
	//	temp = *arr_m[i];
	//	*arr_m[i] = *arr_m[len - i - 1];
	//	*arr_m[len - i - 1] = temp;
	//}
	
	//2)������ ���� 2���� �̿�
	int* fptr = &arr[0], * bptr = &arr[5];

	for (i = 0 ; i < len/2; i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;   //fptr = fptr + 1
		bptr--;
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
		if (i == 5) {
			printf("\n");
		}
	}
	
}*/



//37. �Լ�(Function): ����ڰ� ���� ���� �Ǵ� �̸� ���ǵ� �Լ��� ȣ���ؼ� ���
// Ư���� ����� �����ϴ� �ϳ��� ������ ���
// ��� ����� �Լ��� �����ϸ� "���� ���� �� �Լ��� ȣ���ؼ� ���"
// �� ���� �Լ��� �����ϸ�, �� ���� ��(���)�� �ǰ� ����� ��Ÿ���°� ����.

/*
//�����ϰ� �Լ� ����
//1)�Լ�����
��ȯ�ڷ��� �Լ���() {
	���1;
	���2;
	...;
	return ��ȯ�ڷ����� ������ ��ɿ��� ���� �����(��);
}

//2)ȣ��
void main() {
	�Լ���();
}
*/

/*
//37_1)�Լ��� ����Լ�:  printf()�� ��ȯ
#include <stdio.h>
void main() {
	int n1, n2;
	n1 = printf("123\n");
	n2 = printf("String Length\n");
	printf("n1 : %d,  n2: %d\n", n1, n2);

}

//printf("")�Լ��� ��ȯ��: ���ڿ� �ȿ� �ִ� ���ڵ��� ����(�� ����)
*/

/*
//37_2)�Լ� �̿��ϱ�
#include <stdio.h>

void func() {
	printf("�Լ�(func)ȣ���ؼ� ��ȯ\n");
}

void main() {
	func();
}
*/

/*
//37_3)�Լ��� �⺻������ main�Լ� ������ �����մϴ�.
#include <stdio.h>

void main() {
	func();
}

void func() {
	printf("�Լ�(func)ȣ���ؼ� ��ȯ\n");
}
*/


//37_5)�Լ��� ����: �����μ��� ��ȯ ���� ����
//1.�����μ�(O), ��ȯ��(O)
//2.�����μ�(O), ��ȯ��(X)
//3.�����μ�(X), ��ȯ��(O)
//4.�����μ�(X), ��ȯ��(X)

/*
//�Լ��� ����
#include <stdio.h>
//1)�Լ�����
��ȯ�ڷ��� �������Լ���(�ڷ���1 �Ű�����1, �ڷ���2 �Ű�����2, ...) {

	�������Լ����� ��ɵ�;

	return ��ɿ� ���� �����(��);  //���´� ��ȯ�ڷ����� ����!
}

//2)�Լ� ȣ��
void main() {
	�������Լ���(�����μ�1, �����μ�2, ...);
}

//�Ű�������? �Լ� ȣ��� �����μ��� ���� ���޹޴� ����
//�����μ�(�μ�)��? �Լ� ȣ���� ��, �Ű������� ���޵Ǵ� ��
//�μ��� �Ű������� ��������, ���� ���� �ְ� �ޱ� ������ ������ �ݵ��, ����!)
*/


/*
//37_5_1)���� ���� ���� �Լ� ����(�μ�,��ȯ �Ѵ� ����)
#include <stdio.h>
int Add(int n1, int n2) {    //Add(����1,����2)�Լ� ȣ��� �Ű������� �μ����� ����
	return n1 + n2;          //�Ű������� ����� �� �� ���� ���ؼ� ����� ��ȯ;
}

void main() {
	int res, a, b;
	printf("Add���: %d\n", Add(1, 2));
	
	res = Add(1, 2);
	printf("Add���1: %d\n", res);

	a = 5, b = 8;
	res = Add(a, b);
	printf("Add���2: %d\n", res);

}
*/

//37_5_2)�����μ� �� ��ȯ�� ����
#include <stdio.h>
int Add(int n1, int n2) {	//�μ�(O), ��ȯ(O)
	int hap = 0;			//�Լ��� ���� ���� �����ϸ� �� �Լ� ���������� �����ϴ� ����
	hap = n1 + n2;
	return hap;				//��� ��ȯ
}

void Show_Add_res(int num) {//�μ�(O), ��ȯ(X)
	int hap = 0, n = 1;
	hap = num + n;
	printf("���� ��� ����X.. Add�� ��������� ���: %d  ��ȯ(X)\n", num);
}

int Read_Num(void) {		//�μ�(X), ��ȯ(O)
	int num;
	scanf_s("%d", &num);
	return num;		//�Ű������� void�� ���� ����(�μ��� ���� �ʴ´�)
}

void Void_use() {			//�μ�(X), ��ȯ(X)
	printf("Void_use()�Լ��� ���ุ�ǰ�, �ƹ��͵� ��ȯ X\n");
	printf("�ΰ��� ������ �Է��ϸ� ��������� ���: ");
	return;   //return;�� ��ȯ ���� ���ٶ�� �ǹ��Դϴ�.���� ����
}


void main() {
	int res, num1, num2;
	Void_use();
	num1 = Read_Num();
	num2 = Read_Num();
	res = Add(num1,num2);
	Show_Add_res(res);
}





