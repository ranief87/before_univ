// 8���� ����

// 16. �ñ׸� ��� ����
/*
#include <stdio.h>
#define COL 5
#define ROW 10
int main(void) {
	int i;
	for (i = 0; i < COL * ROW; i++) {
		if (i < 4) {
			printf("S(%d) =      %d \t", i, i * (i + 1) / 2);
		}
		else if (i < 10) {
			printf("S(%d) =     %d \t", i, i * (i + 1) / 2);
		}
		else if (i < 14) {
			printf("S(%d) =    %d \t", i, i * (i + 1) / 2);
		}
		else if (i< 45){
			printf("S(%d) =   %d \t", i, i * (i + 1) / 2);
		}
		else {
			printf("S(%d) =  %d \t", i, i * (i + 1) / 2);
		}
		if ((i + 1) % COL == 0) {
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
*/

// 17. �帣�� ����
/*
#include <stdio.h>
#include <Windows.h>
#define SPACE 50
#define MAX 25
#define CYCLE 10
int main(void) {
	int a, b, c, e, f, g;
	int d = 10;
	int cnt = 0;
	while (d) {
		if (d == 10) {
			cnt = 1;
		}
		else {
			cnt = 0;
		}
		for (; cnt <= MAX; cnt++) {
			for (a = 1; a <= cnt; a++) {
				printf("=");
			}
			for (b = 1; b <= SPACE - MAX; b++) {
				printf(" ");

			}
			for (c = MAX - cnt; c >= 1; c--) {
				printf("@");

			}
			printf("\n");
		}
		for (cnt = MAX; cnt >= 2; cnt--) {
			for (e = cnt; e >= 2; e--) {
				printf("=");
			}
			for (f = 1; f <= SPACE - MAX; f++) {
				printf(" ");
			}
			for (g = 0; g <= MAX - cnt; g++) {
				printf("@");
			}
			printf("\n");
		}
		d = d - 1;
	}
	system("pause");
	return 0;
}
*/
	
// 18. �ζ� �ùķ��̼�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_MAX 10
#define LOTTO_VALUE 1000
#define LOTTO_PRIZE 10000000
int main() {

	int num1, num2, num3, num4;
	char CHOICE;
	int num5, num6, num7, num8;
	int CHALLENGE, cnt;
	int LUCK = 1;
	srand((unsigned)time(NULL));

	num1 = (rand() % LOTTO_MAX) + 1;
	num2 = (rand() % LOTTO_MAX) + 1;
	num3 = (rand() % LOTTO_MAX) + 1;
	num4 = (rand() % LOTTO_MAX) + 1;

	printf("�ζǸ� 1�� ��÷�� �� ������ �����Ͻðڽ��ϱ�?\n[Y/N or other keys] > "); scanf_s("%c", &CHOICE,1);

	

		if (CHOICE == 'Y') {
			CHALLENGE = 1;
			cnt = 0;
			
			while (LUCK) {
				
				printf("[%d��° �õ�] - ����� �ݾ� %d��\n", CHALLENGE, CHALLENGE * LOTTO_VALUE);

				cnt = 0;

				num5 = (rand() % LOTTO_MAX) + 1;
				num6 = (rand() % LOTTO_MAX) + 1;
				num7 = (rand() % LOTTO_MAX) + 1;
				num8 = (rand() % LOTTO_MAX) + 1;

				printf("�ڵ� ������� ���� ���� �ζ� ��ȣ�� %d��, %d��, %d��, %d���̴�.\n", num5, num6, num7, num8);

				if (num1 == num5) { cnt+=1; }
				if (num2 == num6) { cnt+=1; }
				if (num3 == num7) { cnt+=1; }
				if (num4 == num8) { cnt+=1; }
			
			
				printf("> �� ���� ��ȣ�� %d���̴�.", cnt);
			
				if (cnt == 4) {
					printf("���� 1���� ��÷�Ǿ���!!!\n");
					LUCK = LUCK - 1;
					printf("\n");
					printf("[���]\n");
					if (LOTTO_PRIZE> CHALLENGE* LOTTO_VALUE) {
						printf("%d�� �̵�ô�!", LOTTO_PRIZE - CHALLENGE * LOTTO_VALUE);
					}
					else  {
						printf("%d�� ���� �ô�..�Ф�", LOTTO_VALUE- LOTTO_PRIZE - CHALLENGE);
					}
					
					printf("\n");
					printf("\n");
					break;
				}
				else {
					printf("���� 1� ��÷���� ���ߴ�.\n");
				}
			
				CHALLENGE ++;
				printf("\n");
	}
	}
		else {
			printf("�׷� �� ������ ġŲ�̳� �����");
		}

		return 0;

}










