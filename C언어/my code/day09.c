

// for�� ���

//25_8) 5���� ������ �Է� �޾Ƽ� �Է¹��� ������\
// �ִ�, �ּڰ��� ���ϴ� �ڵ�(�� ������ 0~100 �ȿ� �ִٰ� ����)
/*
#include <stdio.h>
void main() {
	int num;
	int maximum = 0, minimum = 100;
	for (int i = 0; i < 5; i++) {
		printf("%d° ���� �Է�: ", i + 1); scanf_s("%d", &num);
		if (num >= 0 && num <= 100) {
	
			if (num > maximum) {
				maximum = num;
			}
			if (num < minimum) {
				minimum = num;
			}
		}
		else {
			break;
		}
	}
	printf("max: %d\n", maximum);
	printf("min: %d\n", minimum);
}
*/




// 26. for���� ���� ���� �� �������� ��
//#include <stdio.h>
//void main() {
	// 1) �ʱⰪ ���� (����̸� ������ �°� ���� ����)
	//int i = 1;
	//for (; i <= 2; i++) {
		//printf("%d: ", i);
	//}
	// 2) ���ǽ� ���� (�������� ��. ���ǽ� ������ ���̶�� �ν�)
	//for (int i = 1; ; i++) {
		//printf("%d\n", i);
	//}
	// 3) ���ǽİ� �������� �� ���� ����� �ݺ���
	//char a;
	//int b;
	//printf("a,b\n=============");
	//for (a = "A", b = 65; a <= '7'; a++, b++) {
		//printf("%c %d\n", a, b);
	//}


//}



// 27. ��ø for��(����)
// ����
/*
for (�ʱ��1; ���ǽ�1; ������1) {
	�ݺ��� ��ɹ� 1;
	for (�ʱ��2; ���ǽ�2; ������2) {
		�ݺ��� ��ɹ�2;
	}
}
*/

// 27_1) �ݺ��� �ȿ� �ݺ����� �� �� ������
/*
#include <stdio.h>
void main() {
	//27_1_1) for1�� i�� 2�� �� �� for2�� j�� 3�� �� ��
	int i, j;
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			printf("i=%d,  j= %d\n", i, j);
		}
	}
}
*/

// 27_1_2) �ܺι� - ���ι� ����
/*
#include <stdio.h>
void main() {
	int a = 0, b = 0;
	for (a = 1; a <= 2; a++) {
		printf("�ܺ�1: for���� %d��° ����\n", a);
		for (b = 1; b < a; b++) {
			printf("����: for���� %d��° ��\n", b);
		}
		printf("�ܺ�2: for���� %d �� start\n", a);
	}
}
*/

// 27_1_3) ���� for���� ������
// 1. for���� �ʱ�� ����(���� x)
//# include <stdio.h>
//void main() {
	//for (int a = 1; a < 3; a++) {
		//for (int j = 1; j < 3; j++) {
			//printf("a=%d, j=%d\n", a, j);
		//}
	//}

	// 2. �ٱ� �ʱ���� �̿�
	//int i = 1, j = 1;
	//for (i; i <= 2; i++) {
		//for (j; j <= 3; j++) {
			//printf("i=%d, j=%d\n", i, j);
		//}
	//}

//}


// 27_2) Quiz 1
// ������ ��� (���η� �� �� ��)
// 2*1=2  2*2=4 2*3=6


//#include <stdio.h>
//void main() {
	//int a = 2,b=1;
	// ����
	//for (a=2; a < 10; a++) {
		//for (b = 1; b < 10; b++) {
			
			//printf("%d x %d = %d\t", a, b, a * b);

		//}
		//printf("\n");

	//}
	// ����
	/*
	for (int k = 2; k < 10; k++) {
		printf("%d��\t\t", k);
		printf("\n");
		for (a = 1; a < 10; a++) {
			for (b = 1; b < 10; b++) {


				
				printf("%d x %d=%d\n", a, b, a * b);
			}
			printf("\n");
		}
	}



}
*/




// 28. while��
//for���� �����ϰ� �ݺ�
// ������ ������ ������ ���� �ݺ�

// ����
/*
�ڷ��� ������ = �ʱⰪ;
while (���ǽ�) {
	�ݺ��� ��ɹ�(���ǽ��� ������ ������ ����);
	// ������(����)
}

*/



// 28_1) ���� �ݺ�
/*
#include <stdio.h>
void main() {
	int i = 0;
	while (i++) {
		printf("i= %d\n", i);
	}
}
*/


//28_2) i �� 10���� �۰ų� ���� ������ �ݺ�
//#include <stdio.h>
//void main() {
	//for (int i = 0; i <= 10; i++) {
		//printf("i : %d\n", i);
	//}
//}


//#include <stdio.h>
//void main() {
	//int i = 0;
	//while (i <= 10) {
		//printf("i : %d\n", i++);
	//}
//}


// 28_3) �ʱⰪ i=10, i�� 0�� �� ������ �ݺ�(���)
/*
#include <stdio.h>
void main() {
	int i = 10;
	for (i; i != 0; i--) {
		printf("i : %d\n", i);
		
	}
}


*/




//28_4) Quiz 3. 1~100������ ��
/*
#include <stdio.h>
void main() {
	int sum=0;
	for (int i = 1; i <= 100;i++) {
		sum += i;
		//printf("%d\n", sum);
	}
	printf("%d", sum);
}
*/




//28_5) Quiz 4. 1~100������ �� �߿��� 3�� 5�� ������� ������ ���ϴ� �ҽ� �ڵ�

# include <stdio.h>
void main() {
	int count = 0;
	for (int n = 1; n <= 100; n++) {
		if (n % 3 == 0 && n % 5 == 0) {
			count += 1;
		}
	}
	printf("%d", count);
}








