//day13.c

//��� ���

//33_4)����4)Sleep(�и���);
// <windows.h> ����
// �μ����� �и� �� (1/1000)����
/*
#include <stdio.h>
#include <time.h>
#include <windows.h>
void main() {
	for (int i = 0; i < 100;i++) {
		printf("%d\n", time(NULL));
		Sleep(1000);  //1�� ��, ����
	}
}
*/

/*
//33_5)����5)system("��ɾ�")�Լ�
// �ܼ�â���� ����ϴ� ��ɾ ���� �����ϰ� �ϴ� �Լ�
// ���������� <windows.h> ����
#include <stdio.h>
#include <Windows.h>
void main() {
	int i = 0;
	while (1) {
		for (i = 0; i < 10; i++) {
			printf("i:%d\n", i);
			Sleep(50);
		}
		printf("\n");
		//system("cls");  //cmd���� ȭ�� ���� �����ϰ� ����
		//system("pause");  // �ý��� ������ ��� �ߴ�(�ƹ��ų� Ű ������ �ٽ� ����)

		//system("shutdown -s -t 0"); //������ �ý��� ���� ��ɾ�...
	}
}
*/



//34. ������
// ������: ���𰡸� ����Ű�� ��
// ������ ����: -���𰡸� ����Ű�� ����, "�ּ� ���� ��� ����"(�� �����ġ:CPU�� Ư�� �ּ�)
// ����:  �ڷ��� *�����ͺ����� = &������;

/*
//��1)
#include <stdio.h>
void main() {
	//������ �ּҰ�
	//int n = 10;
	//int* ptr = &n;     //������ ������ ����: int *ptr;
	//printf("n : %d,   *ptr : %d\n", n, *ptr);

	//printf("%d\n", ptr);  //�������´� ������ �޸� �ּҰ��� �ݵ��, 16������ ǥ��
	//printf("%d\n", &n);

	//%p: �����ͷ� ���������� �ؼ� �ּҰ��� ��Ÿ����(16����)
	//printf("%p\n", ptr);  //ptr�� ����� ��: &n
	//printf("%p\n", &n);   //n�� �ּҸ� ���

	//printf("%p\n", *ptr);  *ptr�� int�� ������ ������ ptr�� ����� �ּҸ� ����Ű�� ��

	//�Ǽ��� �ּҰ�
	//double d = 3.14;
	//double* ptrd;
	//ptrd = &d;
	
	//float f = 3.14f;
	//int* ptrf = &f;

	//printf("d: %g, *ptrd : %G\n", d, *ptrd);
	//printf("f: %g, *ptrf : %f\n", f, *ptrf);
	// float�� �����ͺ����� �����ؾ� float�� �ּҿ� �ִ� ���� �̿��� �� �ִ�!

	//���ڿ� �ּҰ�
	char ch = 'A';
	char* pch1, * pch2;
	pch1 = &ch;
	pch2 = pch1;

	printf("%c\n", ch);
	printf("%c\n", *pch1);
	printf("%c\n", *pch2);
	printf("\n");
	printf("%p\n", &ch);
	printf("%p\n", pch1);
	printf("%p\n", pch2);

	printf("&pch1: %p\n", &pch1);
	printf("&pch2: %p\n", &pch2);

}

*/

/*
//��2)
#include <stdio.h>
void main() {
	int n = 10;
	int* ptr = &n;
	//int ptr1 = &n;     //n�� �ּҰ��� ������ ptr1������ ����

	//printf("n: %d,  *ptr: %d,  ptr1: %d\n", n, *ptr, ptr1);
	//ptr1�� ����� �͸� ��������� �ǹ� X

	*ptr = 20;
	//*ptr1 = 30;  //Error: ptr1�� int�� �������̶� �����Ͷ�� ������ ���� X

	printf("*ptr: %d    n : %d\n", *ptr, n);
	
}
*/

/*
//34_1)������ ����1
#include <stdio.h>
void main() {
	int n1 = 10;
	double n2 = 20.12;
	
	int* pn1 = &n1;
	double* pn2;
	pn2 = &n2;

	*pn1 += 1;
	*pn2 -= 0.12;

	printf("n1 : %d,  n2 : %.2lf\n", n1, n2);   //������ ����� ��  :  11,  20.00
	printf("&ũ��		  : %dB,  %dB\n", sizeof(&n1), sizeof(&n2));  
	printf("�ּ� ���� ũ�� : %dByte,   %dByte\n", sizeof(pn1), sizeof(pn2));
	printf("�������� ũ��  : %d����Ʈ,   %d����Ʈ\n", sizeof(*pn1), sizeof(*pn2));
}
*/

/*
//34_2)������ ����2
#include <stdio.h>
void main() {
	int num = 1;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;      //*ptr1++  (���� �켱�� ����, ptr1�� �ּҰ��� 1 ���� ��, ����Ŵ..)
	++(* ptr2);
	//�����ͺ����� ���� ������ ���� �ݵ��, �����ͷ� ����Ű�� �� ����, �����Ѵ�(��ȣ ���)

	printf("%d\n", num); //3
}
*/

/*
//34_3)������ ����3) �Է��� �ּҷ� �̿�
#include <stdio.h>
void main() {
	int num;
	int* ptr_num = &num;
	printf("���� �Է�: "); scanf_s("%d", ptr_num);
	printf("num: %d     *ptr_num: %d\n", num, *ptr_num);
	printf("&num:%p     ptr_num: %p\n", &num, ptr_num);
}
*/


//34_5)Quiz_1)

// �־��� ��(10), (20)�� �ʱ�ȭ ��, �������� ������ ����Ű�� �մϴ�.
// �� ��, �������� ������ 10����� ������ 10�� ���ϰ�, 20����� ������ 10�� ���ҽ�Ų��,
// "�� ������ ������ ����Ű�� ����� ���� �ٲߴϴ�.", ��, ���� �ּ� ������ ����Ű�� �� �ٲٸ�˴ϴ�.
// �ٲ㼭 �� ��� ���

#include <stdio.h>
void main() {
	int n1 = 10, n2 = 20;
	int* ptr1 = &n1, * ptr2 = &n2, * temp;
	printf("%d %d \n", *ptr1, *ptr2);

	(*ptr1) += 10;
	(*ptr2) -= 10;
	//printf("%d %d \n", *ptr1, *ptr2); 

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d \n", *ptr1, *ptr2);
}


