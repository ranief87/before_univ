//day11.c

//31. 1���� �迭

// ����: ���� �ڷ������� ���ӵ� �޸� ������ �Ҵ��Ͽ� ���.

// ����
// �ڷ��� �迭��[����(����)];  //�迭 ����
// int arr[3] = {1,2,3}; //�迭 �ȿ� �� �ʱ�ȭ
//        �迭��[�ε�����ȣ] -> �ε�����ȣ�� �ִ� �� (������ 0��°����)
// int arr[5];   _ _ _ _ _ (�ε���[0~4], ũ��� int��(4Byte), ���̴� 5��
//						   �迭�� ũ��: �ڷ��� * ���� (int��:4B, ����: 5��, 4*5 = 20Byte)
//�迭���� �迭�� ù��° ���(�ε���:[0])�� �����ּ� :  &�迭��[0]


//�迭�� ��뵵?
// -�ټ��� ���������� ȿ�������� ���(�迭�� 1���� ���� �� �̿� ����)
// -�ټ��� �����δ� ǥ�� �� �� ���� �� �迭�� ����!(������ �޸� �Ҵ�!)


//��뿹)
/*
int arr[10]; (arr�迭 ���� : ���̰� 10�� int�� �迭 ����)
int arr1[5] = { 1,2,3,4,5 };  (�ʱⰪ ������)
char arr2[6] = { "clang" };  (���� 6���� ���ڿ� �ʱ�ȭ)
char arr3[] = "C language";  (���������� ���ڿ� ���̿� �°� �ʱ�ȭ)

//float arr4[];  Error: float 4Byte�� �˾Ƶ� �� �� ������� ������ ��(ǥ�� X)
//double arr5[] = {1,2,3.14};  Error: �ε���[0],[1]�� ���� int�� ���������� ũ�Ⱑ �ٸ�
*/
/*
//31_1)�迭 ����1) �迭 ����
#include <stdio.h>
void main() {
	//����(�Ǽ�) ����
	int arr[5];
	double darr[3];
	arr[0] = 1;
	arr[1] = 20;
	arr[2] = 300;
	arr[3] = 4000;
	darr[0] = 1.1, darr[1] = 1.14, darr[2] = 2.27;
	printf("0��° �ε��� ��Ұ�: %d,    %g\n", arr[0], darr[0]);
	printf("1��° �ε��� ��Ұ�: %d,    %g\n", arr[1], darr[1]);
	printf("2��° �ε��� ��Ұ�: %d,    %g\n", arr[2], darr[2]);

	//darr[3] = 4.15;
	//printf("3��° �ε��� ��Ұ�: %d,    %g\n", arr[3], darr[3]);
	//darr�迭�� �𸣴� �޸𸮿� �����ؼ��� ��.�� �ȵȴ�(darr[3]): ����� ����
	//������ ������ ����: ���� ũ���� �޸� �������� �����ϱ� ����!
	//printf("4��° �ε�����ȣ: %d\n", arr[4]);
}
*/

/*
//31_2)�迭 ����2) �ʱ�ȭ
#include <stdio.h>
void main() {
	int arr[3] = { 1,2 }; //�ʱ�ȭ�� ���� ������, 0���� �ʱ�ȭ!
	double darr[2] = { 3.14 };
	printf("arr[1]:|%d|, arr[2]:|%d|\n", arr[1], arr[2]);
	printf("darr[1]:|%g|\n", darr[1]);
}
*/
/*
//31_3)�迭 ����3) �ݺ����� �̿��� ��ó�� �迭 ���� �� ����
#include <stdio.h>
void main() {
	int arr[10];   //{1,2,...,9,10}
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;    //arr[�ε�����ȣ] = �ε�����ȣ + 1;
	}
	for (int i = 1; i < 11; i++) {
		printf("arr[%d] : |%d|\n", i - 1, arr[i - 1]);
	}
}
*/
/*
//31_4)�ݺ��� ������ �Է� �� �迭 ���̸� �̿��� �迭 ����
#include <stdio.h>
void main() {
	int arr[10], arrlen;
	//printf("int arr[10]�� ũ��: %dB\n", sizeof(arr)); //40B
	//printf("arr[4]�� ũ��: %dB\n", sizeof(arr[4]));   //4B
	arrlen = sizeof(arr) / sizeof(int);  //int�� �迭 arr�� ����
	//printf("arrlen: %d\n", arrlen);
	for (int i = 0; i < arrlen; i++) {
		printf("arr[%d]��° ���� �Է�: ",i);
		scanf_s("%d", &arr[i]);   //arr[i]�� �迭 ���� ��Ұ��� ��Ÿ���Ƿ�, �ּҰ��� �ʿ�
	}
	int j = 0;
	while (j < arrlen) {
		printf("arr[%d] : %d\n", j, arr[j]);
		j++;
	}

}
*/


//����: 
//31_5)�迭�� �̿��ؼ�, 1 ~ 10���� ���� �����ϰ� �� �� ¦������ ��� ��, ¦�������� ���� ���
/*
#include <stdio.h>
void main() {
	int arr[10], sum = 0, arrlen;
	arrlen = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arrlen ;i++) {
		arr[i] = i + 1;
		if (arr[i] % 2 == 0) {
			printf("arr[%d](¦��): %d\n", i,arr[i]);
			sum += arr[i];
		}
	}
	printf("¦����: %d\n", sum);
}
*/

//31_6)���̰� 5�� int�� �迭�� �����ؼ�, �� 5���� ������ �Է¹�����, 
//     �ִ�,�ּڰ�,������ ���ϴ� �ڵ� �ۼ��մϴ�.
#include <stdio.h>
void main() {
	int arr1[5];
	int max, min, sum;
	for (int i = 0; i < 5; i++) {
		printf("������ 1���� �Է�: "); scanf_s("%d", &arr1[i]);
	}
	max = min = sum = arr1[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr1[i]) {
			max = arr1[i];
		}
		if (min > arr1[i]) {
			min = arr1[i];
		}
		sum += arr1[i];
	}

	printf("�ִ�: %d, �ּ�: %d, ����: %d\n", max, min, sum);
}