

// 24_5) Quiz1. ����ġ�� 3�� ������� �ƴ��� �����غ��ô�
/*
#include <stdio.h>
void main() {
	int n;
	printf("���� �Է�: "); scanf_s("%d", &n);
	int nmg = n % 3;
	switch (nmg ) {
	case 0: printf("%d�� 3�� ���\n", n); break;
	default: printf("%d�� 3�� ��� �ƴϴ�\n"); break;
	}
	//if (n % 3 == 0) {
		///printf("3�� ���");
	//}
	//else {
		//printf("�ƴϳ�");
	//}
}

*/






// 24_6) ������ �������� �ڵ�

// A �����ϸ� 90���
// B �����ϸ� 80 ���
// C 70
//D  60
//E 0

/*
#include <stdio.h>
void main() {
	int n;
	printf("n: "); scanf_s("%d", &n);
	switch (n) {
	case 90: printf("A\n"); break;
	case 80: printf("B\n"); break;
	case 70: printf("C\n"); break;
	case 60: printf("D\n"); break;
	case 0: printf("E\n"); break;
	}
}

*/



// ���(�ݺ���: for��)
// ������ ������ �����ϴ� ���� � ó���� ������ Ƚ����ŭ �ݺ� �ؼ� ����
// ���� ó��(�ڵ�), ������ �ڵ带 �����ϰ� ������ �����Ҷ� �ַ� ��� 

// ����
//for (�ʱ��(��);���ǽ�;����������(���� ����)) {
	//�ݺ��� ��ɵ�;
//}

// 25_1) for�ݺ��� ��ƺ���

//#include <stdio.h>
//void main() {
	// 1) ���� �������� �ʱⰪ ���
	//int i = 1;
	//for (i = 0; i < 2; i++) {
		//printf("i : %d\n",i);

	//}
	//printf("i�� %dȸ���� for�� �������ϴ�\n", i);

	//2) �ʱⰪ�� for�� �ȿ� ����
	//for (int i = 4; i < 2; ++i) {
		//printf("%d\n", i);
	//}
	//printf("%d\n", i); // error : for�� �ȿ� �ʱ�� ������ for�������� ������

	//3) ������ ����
	//for (int i = 0; i <= 1;) {

		//printf("infinity?");
	//}

	//4) �ʱⰪ �ٸ��� ǥ��
	//int i = 2;
	//for (i = 1; i >= 0; i--) {
		//printf("%d\n", i);
	//}

//}


// 25_2) Quiz 2. ���� 1���� 10������ ���� ������ ���(for��) 
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 1; n < 11; n++) {
		printf("%d\n", n);
	}
}
*/

// 25_3) Quiz 3. ���� 1���� 10������ �� �� ¦���� ������ ��� (for+ if,for)
/*
#include <stdio.h>
void main() {
	int n;
	for (n = 1; n < 11; n++) {
		if (n % 2 == 0) {
			printf("%d\n", n);
		}
		else {
			printf("");
		}
	}
}
*/

/*
# include <stdio.h>
void main() {
	int n;
	for (n = 2; n < 11; n += 2) {
		printf("%d\n", n);
	}
	for (n = 1; n < 6; ) {
		n = n * 2;
		printf("%d\n", n);
	}
}
*/


// 25_4) 1���� 10������ ��� ������ ��?
/*
# include <Stdio.h>
void main() {
	int a = 1;
	int sum = 0;
	for (a = 1; a < 11; a++) {
		sum += a; // sum= sum +a; // �����հ��ڵ�
		printf("%d= %d +%d", sum, sum - a, a); //�����
	}
	printf("%d", sum);
}
*/



// 25_6) Quiz 5. 1���� 100���� �� 7�� ����� �հ� ������ ���ϴ� �ҽ� �ڵ�

# include <stdio.h>
void main() {
	int a = 1;
	int c = 0, sum = 0;
	for (a = 1; a <= 100; a++) {
		if (a % 7 == 0) {
			sum += a;
			c ++;
			
		}
	}
	printf("��: %d, ����: %d\n", sum, c);
}







// 25_7) Quiz 6. 1���� 10������ ���ڸ� �� ���� ������ ���� �� Ȧ���� ����ϴ� �ҽ� �ڵ� 
// �� ��� ��� 1,3,15,21,45,55

/*
# include <stdio.h>
void main() {
	int i;
	int sum = 0;
	for (i = 1; i < 11; i++) {
		sum += i;
		if (sum % 2 == 0) {
			printf("");
		}
		else {
			printf("%d\n",sum);
		}
	}
}

*/






















