

// 29. �ݺ��� do ~ while ��
// while ���� ������ ����
// ���ǽ� �� �� ���� do ���� �ȿ� �ִ� ����� �����ϰ� ������ �Ǵ�


// ����
/*
�ʱ��;
do {
	���� �ݺ��� �� ���๮;
	
}while (���ǽ�);
*/


// 29_1) ����(for, while)�� do ~ while ����

// 29_1_1) for
/*
# include <stdio.h>
void main() {
	int i =2;
	for (i; i; i++) {
		printf("i: %d\n", i);
	}

	while (i) {
		printf("i: %d\n", i);
		i++;
	}

	do {
		printf("i: %d\n", i);
		// i++;
	} while (i);
	// ó�� ���� ���� �� ���ǽ� �Ǻ��� �ٸ��� �������� ����
}
*/


// 29_2) �Ҿƹ����� ������ 68���̴�
//		 �Ҿƹ����� ������ ������ 5�躸�� 3���� ���� ��
//		 ������ ���̴� �� ���ΰ�

//# include <stdio.h>
//void main() {
	//int s=1;
	// for
	//for (s; s * 5 +3!= 68; s++) {}
		//printf("%d", s);
	

	//while
	//s = 1;
	//while (s * 5 + 3 != 68) {
		//s++;
	//}
	//printf("%d\n", s);


	// do ~ while
	//s = 0;
	//do {
	//	s++;
	//} while(s * 5 + 3 != 68);
	//printf("%d\n", s);


//}





// 30. �б⹮
// �ݺ����� ����� ������ �������ִ� ���



//30_1) break�� �� ���� �� ���� �ݺ��� ���� ����
// �ݺ� ���� �� ���� ���� �� ���������� ���
// {} ���� �� if�� ��ü������ ��� x
// break�� �ݺ������� ���Ǵ� �������� ��� �ȴ�

// 30_1_2) if �� ������ break �ȵȴ�
//# include <stdio.h>
//void main() {
	//printf("before break\n");
	//if (0 < 3) {
	//break;
	//}
	//printf("after break\n");




	//  do~ while
	//do {
	//	break;
		//printf("\n");
	//} while (1);
	//printf("");

//}


// 30_3) ���� 3�� �Է� ���� ������ ���� ���
/*
# include <stdio.h>
void main() {
	int a;
	while (1) {
		printf("���� �Է�: "); scanf_s("%d", &a);
		if (a == 3) {
			break;
		}
	}
}
*/


//30_4) Quiz  ���� �Է� ���� �� ������ 0~100 ���̶�� ����
// ���� ���ϴ� ���ڸ� ã���� ���α׷� ���� �ǰ� �ڵ�
// ���� 1. ���� ������ 101�̻��� �� �� �Է��ϸ� �߸� �Է��ߴٴ� ���� ���
// ���� 2. ���ϴ� ���ڸ� ã���� ���α׷� ����
// ���� 3. ���ϴ� ���ڰ� �����ϸ� ��Ʈ �ִ� ������ �����
// ���� 4. ��ȸ�� 10 �� �� �ִ� �ݺ�
/*
# include <stdio.h>
void main() {
	int n, cnt;
	for (cnt = 0; cnt <= 10; cnt++) {
		printf("n: "); scanf_s("%d", &n);
		if (n < 0 && n>100) {
			printf("�߸� �Է�");
		}
		else {
			if (n == 7) {
				printf("����!");
				break;
			}
			if (n < 7) {
				printf("�Ʊ��� �� ���� ");
			}
			if (n > 7 && n < 15) {
				printf("�Ʊ��� �� �Ʒ���");
			}

		}
	}
}


# include <stdio.h>
void main() {
	int n, cnt;
	while (cnt) {
		if (cnt == 10) {
			break;
		}
		else {

		}
	}
}

*/




//30_5) goto ��
// ���α׷� ���� ������ ������ ����� ������ �̵�

// ����
// goto ���� ��ġ ���� (�ݺ���ó�� ����)
/*
������ ��;

��ɹ���;

goto ������ ��; // ���ĺ����θ� ǥ��  : a, aa

*/





// goto �Ŀ� ��ġ ���� 
/*
goto ������ ��;

��ɹ���;

������ ��;
*/


/*
// 30_6) ����
# include <stdio.h>
void main() {
	// (1) goto ��
	//int n = 1;
//aa:
	//printf("n = %d\n", n++);
	//if (n <= 3) {
		// goto aa;
	//}

	// goto  ��
	int a = 1;
	goto aa;
	printf("a = %d\n", a);
aa:
}

*/



// 30_7) continue ��
// �ݺ����� �����ؾ� �� ��� �� ���� �������� ���� ��ɵ��� ���� ���;
// continue ���� ������ �ݺ��� ó������ �̵��ؼ� ���� �Ǻ�


// 30_8) ����
/*
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 1; a <= 20; a++) {
		if (a % 2 != 0) {
			continue;
		}
		printf("a= %d\n", a);

	}
}
*/



// 30_9) Quiz .
// 1~10 ������ ���� �� 2�� ��� 3�� ��� 5�� ��� �� �ƴ� �͸� ���
/*
# include <stdio.h>
void main() {
	int a;
	for (a = 1; a <= 10; a++) {
		if (a % 2 == 0) {
			continue;
		}
		if (a % 3 == 0 ) {
			continue;
		}
		if (a % 5 == 0) {
			continue;
		}
		printf("a = %d\n", a);
	}
}

*/





// Quiz �ݺ��� ���� 

/*
*****
*****
*****
*****
*****
*/

// �� ���ڿ��� printf("*")�� �̿�
// �ݺ������� �̿� 

/*
# include <stdio.h>
void main() {
	for (int c = 1; c <= 5; c++) {
		for (int a = 1; a <= 5; a++) {
			printf("*");
			
		}
		printf("\n");
	}

}
*/

# include <stdio.h>
void main() {
	int a=1, b=1;
	while (b<=5) {
		if (a <= 5) {
			printf("*");
			a++;	
		}
		
	}
	printf("\n");
	b++;
}






