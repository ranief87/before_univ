
// 31. 1���� �迭

// ����: ���� �ڷ������� ���ӵ� �޸� ������ �Ҵ��Ͽ� ���

// ����
// �ڷ��� �迭��(����(����))  // �迭 ����
// int arr[3] = [1,2,3] // �迭 �ȿ� �� �ʱ�ȭ
//        �迭��[�ε�����ȣ]  -> �ε�����ȣ�� �ִ� �� (������ 0��°)
// int arr [5] : -------- (�ε��� (0~4)) : ũ��� int�� (4Byte), ���̴� 5��
//                         �迭�� ũ��: �ڷ��� * ���� (int= 4Byte , ����: 5�� , 4*5=20)
//   "�迭���� �迭�� ù��° ���(�ε����� 0)�� �����ּ�: & �迭��[0]"


// �迭�� ��뵵?
// �ټ��� ���������� ȿ�������� ��� ���� (�迭�� 1���� ���� �� �̿� ����)
// �ټ��� ���� �������δ� ǥ���� �� ���� �� �迭�� ����( ������ �޸� �Ҵ� )




// ��� ����
/*
int arr[10]: arr �迭 ���� : ���̰� 10 �� int �� ����
int arr[5] = [1,2,3,4,5] (�ʱⰪ ������)
char arr[0] = "clang" (���� 6���� ���ڿ� �ʱ�ȭ)
char arr3[] = ["language"] (���������� ���ڿ� ���̿� �°� �ʱ�ȭ)
*/
// float arr4[] = Error: float 4Byte�� �˾Ƶ� �� �� ������� ������ �� (ǥ�� x)
// double arr5[] = [1,2,3.14] : Error : �ε��� [0] [1] �� ���� int ������ ũ�Ⱑ �ٸ�

// 31_1) �迭 ����(1) �迭 ����
/*
# include <stdio.h>
void main() {
	// ����(�Ǽ�) ����
	int arr[5];
	double darr[3];
	arr[0] = 1;
	arr[1] = 20;
	arr[2] = 300;
	arr[3] = 4000;
	darr[0] = 3.0, darr[1] = 3.14, darr[2] = 2.27;
	printf("0��° �ε��� ��Ұ�: %d,     %g\n", arr[0],darr[0]);
	printf("1��° �ε��� ��Ұ�: %d,     %g\n", arr[1], darr[1]);
	printf("2��° �ε��� ��Ұ�: %d,     %g\n", arr[2], darr[2]);
	

	//darr[3] = 4.15;
	//printf("3��° �ε��� ��Ұ�: %d,     %g\n", arr[3], darr[3]);
	// darr �迭�� �𸣴� �޸𸮿� �����ؼ��� ��. �� �ȵȴ� (darr[3]) ����� ����
	// ������ ������ ����? : ���� ũ���� �޸� �������� �����ϱ� ����
	printf("4��° �ε��� ��Ұ�: %d", arr[4]);

}
*/



// 31_2) �迭 ����(2) �ʱ�ȭ
/*
# include <stdio.h>
void main() {
	int arr[3] = { 1, 2};   // �ʱ�ȭ�� ���� ������ 0���� �ʱ�ȭ
	double darr[2] = {3.14};
	printf("|%d|, |%d|", arr[1], arr[2]);
	printf()
}
*/

//31_3) �ݺ����� �̿��� ������ �迭 ���� �� ����
/*
#include <stdio.h>
void main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[1] = i + 1;   // arr[�ε�����ȣ] = �ε�����ȣ + 1

	}
	for (int j = 1; j < 11; j++) {
		printf("arr[%d] : |%d|\n", j - 1, arr[j - 1]);
	}
}

*/





// 31_4) �ݺ��� ������ �Է� �� �迭 ���̸� �̿��� �迭 ����
/*
# include <stdio.h>
void main() {
	int arr[10], arrlen;
	printf("int arr[10]�� ũ��: %d\n", sizeof(arr)); // 40b
	printf("arr[4]�� ũ��: %d\n", sizeof(arr[4]));  // 4b
	arrlen = sizeof(arr) / sizeof(int);
	//printf("arrlen: %d\n", arrlen);
	for (int i = 0; i < arrlen; i++) {
		printf("arr[%d]��° ���� �Է�: ", i);
		scanf_s("%d", &arr[i]);  
	}
	int j = 0;
	while (j < arrlen) {
		printf("arr[%d] : %d\n", arr[j]);
		j++;
	}
}
*/




// ����
/*
# include <stdio.h>
void main() {
	int arr[10], sum = 0, arrlen;
	arrlen = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arrlen; i++) {
		arr[i] = i + 1;
		if (arr[i] % 2 == 0) {
			printf("arr [%d] : %d\n", i, arr[i]);
			sum += arr[i];
		}
	}
	printf("sum: %d\n", sum);
}
*/


# include <stdio.h>
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
	printf("final max : %d\nfinal min : %d\nfinal sum : %d\n", max, min, sum);

}


