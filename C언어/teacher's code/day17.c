//day17.c

//38_2)��������
//���������� ���ΰ� �ƴ� �ܺ������� ������. ��, day17.c �������� ��ü ������ ������
//���α׷��� �������ڸ��� �Ҵ�Ǽ�, ���α׷��� ���� �� ������ ����.
//�׷���, ���������� �ϳ� ������, ������ �������� ����� ������ ������ �����Ƿ� ����!

//38_2_1)
//����1)
/*
#include <stdio.h>
int num;			//���������� �⺻��: 0���� �ʱ�ȭ��(�ʱ�ȭ ���� �ʱ�ȭ������ �̿�)

void Add(int val);

void main() {
	printf("ȣ�� �� num: %d\n", num);
	Add(3);
	printf("ȣ�� �� num: %d\n", num); //Add���� �� ��ɿ� �������� num�� �ʱ�ȭ ����
	num++;	//�������� num�� 1 ����
	printf("num++ ���� num: %d\n", num);
}

void Add(int val) {
	int num;
	num += val;
}

*/
//num�� ��ü �ҽ�����(���α׷�)�� ������ �ְ� �ִ�.

//�� �Ⱦ��� ����: �� �� ���� �ٸ� �������� �����ϰ� ���� ���
//��� ���� ������ �������� �� �� ���̸�, �ٸ� �Լ��鿡�� ������ �ֹǷ� ������� �ʴ°� ����!

/*
//39.��������: static
//static�� ��������, �������� ��� ����� ����
//���������� static�� ������, �̴� ���������� ������ ���� �ȴ�.
//static���� ���� �� �ں��� �� ������ ���� �����ϴ� ���������������� �ٲ� ����.

//���������� ����ϴ� ����?
//1)���� ������ ���(�Ҹ� X)
//2)�ܺ� ������ ����(�Լ� ����)

//39_1)����
#include <stdio.h>
void SimpleFunc() {
	int num1 = 0;
	static int num2 = 0;	//��������ó�� �� �� �ʱ�ȭ ��, ���α׷� ������� ���� �����ϸ�,
						    //�缱���� ���� X
	num1++, num2++;
	printf("num1: %d,   num2:%d\n", num1, num2);
}

void main() {
	int i;
	for (i = 0; i < 3; i++) {
		SimpleFunc();
	}
	//printf("num2�� �ᱹ ��������: %d\n", num2);

	//static ����: 1)�� �Լ� �������� ���� ��� ������ ���������� Ư¡
	//			  2)���� �Ҹ����� X, ������ �� �ִ� Ư¡
}
*/

//39_3)Quiz_5)���� ���α׷��� �Է°��� �������� �հ� ����ϴ� �Լ��� ���Ե� ����
//���⼭ ���� ���� total�� static ������ �˸°� ��ü �ؼ� �ڵ带 �����غ��ϴ�.
//����� �ݵ�� ��������ó�� �����ϰ� ������ �ؾ��մϴ�.
/*
#include <stdio.h>
int total = 0;

int Addtotal(int num);

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("%d��° �Է�: ", i + 1); scanf_s("%d", &num);
		printf("����: %d\n", Addtotal(num));
	}
	return 0;
}

int Addtotal(int num) {
	total += num;
	return total;
}
*/

//��
/*
#include <stdio.h>
//int total = 0;

int Addtotal(int num);

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("%d��° �Է�: ", i + 1); scanf_s("%d", &num);
		printf("����: %d\n", Addtotal(num));
	}
	return 0;
}

int Addtotal(int num) {
	static int total = 0;
	total += num;
	return total;
}
*/



//40.��� �Լ�


//����Լ��� �Լ� ������ ({ ~ }) "�ڱ� �ڽ�"�� �ٽ� ȣ���ϴ� �Լ�
/*
//40_1)����Լ� ����1)
#include <stdio.h>
void Refunc();

void main() {
	Refunc();
}

void Refunc() {
	printf("Refunc call\n");
	Refunc();	//�ڱ� �ڽ��� ��ȣ��?
}
*/

//������ �ִ� �Լ��� �������ؼ� ����� �� �ڵ带 ���� �޸� CPU�� ��������� ��,
// �Լ��� ȣ���� ������ ����� �޸��� "���纻"�� ī�ǵǼ� ���纻���� �����ؼ� ȣ��


/*
//40_2)����Լ� ����2)����Լ�Ż���ȯ
#include <stdio.h>
void ReFunc(int num) {
	if (num <= 0) {
		return;
	}
	printf("ReFunc reCall! %d\n", num);
	ReFunc(num - 1);
}

void main() {
	ReFunc(3);
}
*/

//40_3)����Լ� ������
// ���丮�� => ���� n�� ���丮��: n! = n * (n-1) * (n - 2) * ... * 2 * 1
//						          = n * (n-1)!

//��) 5! = 5 * 4 * 3 * 2 * 1
//       = 5 * (5 - 1) * (5 - 2) * (5 - 3) * (5 - 4)
// 0!��: 1�� ���

/*
//���丮�� ����Լ� ���ù�
#include <stdio.h>
int Factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

void main() {
	for (int i = 0; i < 6;i++) {
		printf("%d! = %d\n", i ,Factorial(i));
	}
}
*/

/*
//41. �����Ϳ� �Լ��� ����

//41_1)�Լ��� �μ� ����
#include <stdio.h>
void func(int num);

void main() {
	int num = 5;
	printf("%p\n", &num);
	printf("%d\n", num);
	func(num);   //num�� ���� �ӽ� ������ �����ؼ� �ӽ� ������ �μ��� ����!
}

void func(int num) {
	printf("%p\n", &num);
	printf("%d\n", num);
}

//main�� int num�� func(int num)�� num���� 5�� ������, �ּҴ� ���� �ٸ��ϴ�.
// �μ����� ���� �� ��, num�� ����� ���� ���� �ִ� "������ �ʴ� �ӽ� ����"�� ���� �����ؼ� ����
// ������ ���޵� ���� main�� num�� �ƴ� 'num�� ����� �ӽ� ���� ��'�� ���޵Ǵ� ���̴�!
*/


//41_2)�Լ��� ���ڸ� �迭�� ����
#include <stdio.h>

void Func(int * ptr) {
	printf("%d  %d  %d\n", ptr[0], ptr[1], *(ptr+2));
}

void main() {
	int arr[3] = { 5,55,555 };
	Func(arr);  //&arr[0]
}

//�迭������ �μ� ���޽� �迭�� �迭�� 0��° �ּҰ��� �������������,
//�� �ּҸ� ������ ������ "������ ����" ��, �����ͺ����� �Ű������� �̿�!