//day10.c


//29.�ݺ���: do ~ while��
// while���� ������ ����
// ���ǽ� �� �� ���� do���� �ȿ� �ִ� ����� �����ϰ� ������ �Ǵ�.


//����
/*
�ʱ��;
do {
	
	���� �ݺ��� �� ���๮;

}while (���ǽ�);
*/

//29_1)����(for,while�� do ~ while ����)
/*
#include <stdio.h>
void main() {
	int i = 0;
	for (i; i; i++) {
		printf("i: %d\n",i);
	}

	while (i) {
		printf("i: %d\n", i);
		i++;
	}

	do {
		printf("i: %d\n", i);
		i++;
	} while (i);
	// ó�� ���� ���� ��, ���ǽ� �Ǻ��� �ٸ���, �������� ����
}
*/


//29_2)Quiz_1)  �Ҿƹ����� ������ 68���̴�.
//              �Ҿƹ����� ������ ���̺��� 5�迡 3���� �� ���� ��,
//				������ ���̴� �� ���ΰ�?

/*
#include <stdio.h>
void main() {
	//1)for��
	int son = 1;
	//for (son; son * 5 + 3 != 68;son++) {
	//	;
	//}
	//printf("����: %d��\n", son);

	//2)while��
	//son = 1;
	//while (son * 5 + 3 != 68) {
	//	son++;
	//}
	//printf("����: %d��\n", son);

	//3)do ~ while��
	son = 0;
	do{
		son++;
	} while (son * 5 + 3 != 68);
	printf("����: %d��\n", son);
}


*/



//30.�б⹮
// �ݺ����� ������� ������ �������ִ� ���
// break, continue, goto

// break;
// �ݺ� ���� ��  ���� ���� ��, ���������� ���
// break�� �� ���� �� ���� �ݺ��� ���� ����
// { } ���� �� if�� ��ü���� ����� ���� X
// break�� �ݺ������� ���Ǵ� �������� ��� �ȴ�!

//30_1)if�� ������ break�� �ȵȴ�.
/*
#include <stdio.h>
void main() {

	printf("break�� ���\n");
	if (0 < 3) {
		break;
	}
	printf("break�� ���\n");
}
*/
/*
//30_2)break��
#include <stdio.h>
void main() {
	int a = 1;
	//1)for
	printf("break��\n");
	for (a; a <= 100000; a++) {
		//break;
		printf("a = %d\n", a);
		break;
	}
	printf("break��\n");

	//2)while
	while (1) {
		printf("while: break��\n");
		break;
		printf("while: break��\n");
	}
	printf("while�� ����\n");

	//3)do ~ while
	do {
		//break;
		printf("\n");
	} while (1);
	printf("���α׷� ����\n");
}
*/

/*
//30_3)���� 3�� �Է� ���� ������ ���� ���
#include <stdio.h>
void main() {
	int a;
	while (1) {
		printf("���� �Է�:"); scanf_s("%d", &a);
		if (a == 3) {
			printf("���� 3 �Է¹޾Ƽ� ���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf("�ٽ��Է�\n");
		}
	}
}
*/


//30_4)Quiz_2)���� �Է� ���� ��, ������ 0 ~ 100 ���̶�� ����
//            ���� ���ϴ� ���ڸ� ã���� ���α׷� ���� �ǰ� �����ϴ�.
//            ����1)����, ������ 101�̻� ���� �־�����, �߸��Է��ߴٶ�� ���� ���
//			  ����2)���ϴ� ���ڸ� ã����, ���α׷� ����
//			  ����3)���ϴ� ���ڰ� �����ϸ�, ��Ʈ �ִ� ������ �����
//			  ����4)��ȸ�� 10�� �ǰ� �ݺ����

/*
#include <stdio.h>
void main() {
	int num;
	int chance = 10;
	while (chance--) {
		printf("���ϴ� ���� �Է�:"); scanf_s("%d", &num);
		if (num < 0) {
			printf("���ϴ� ���� '����'�� �����մϴ�. �ٽ� �Է��մϴ�.\n");
		}
		else if (num > 100) {
			printf("������ ������ϴ�. 0 ~ 100�� �� �ϳ��� �Է��ϼ���.\n");
		}
		else if (num == 98) {
			printf("���ϴ� ����: %d�� ã�ҽ��ϴ�.\n", num);
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (90 <= num && num <= 100) {
			printf("90�̻� 100���� ���� �߿� �ֽ��ϴ�.!\n");
		}
		else {
			printf("���ϴ� ���ڰ� �ƴմϴ�. �ٽ� �Է��ϼ���.\n");
		}
		printf("��ȸ�� ��%d�����ҽ��ϴ�.\n", chance);
	}
}
*/



//30_5)goto��
// ���α׷� ���� ������ ������ ������� ������ �̵�

//����
//1)goto ���� ��ġ ����(�ݺ���ó�� ����)
/*
������ ��:

��ɹ���;

goto ������ ��;  //������ �� �̸��� ���ĺ����θ� ǥ��:  a, aa ��
*/

//2)goto �Ŀ� ��ġ ����
/*
goto ������ ��;

��ɹ���;

������ ��:
*/

/*
//30_6)����
#include <stdio.h>
void main() {
	//1)goto ��
	//int a = 1;
//a:
	//printf("a = %d\n", a++);
	//goto a;

	//2)goto ��
	int a = 1;
	goto aa;
	printf("a = %d\n", a);
aa:
	printf("����\n");
}
*/

//30_7)continue��
// �ݺ����� �����ؾ� �� ��� �� ���� �������� ���� ��ɵ��� ���� ���,
// continue���� ������ �ݺ��� ó������ �̵��ؼ� ���� �Ǻ�

/*
//30_8)����
#include <stdio.h>
void main() {
	int a = 0;
	for (a = 1; a <= 20; a++) {
		if (a % 2 != 0) {
			continue;
		}
		printf("a = %d\n", a);
	}
}
*/

/*
//30_9)Quiz_3) 1 ~ 30������ ���� �� 2�� ���, 3�� ���, 5�� ����� �ƴ� �͸� ���
//         1,7,11,13,17,19,23,29
#include <stdio.h>
void main() {
	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 ) {
			continue;
		}
		printf("%d ", i);
	}
}
*/



//�ݺ����� ���� ����
//Quiz)�� ��� ���
/*

*****
*****
*****
*****
*****

//�� ���ڿ���
//printf("*")�� �̿�
//�ݺ������� �̿��ؼ� ���� ��� ��Ÿ����
*/


#include <stdio.h>
void main() {
	int i = 0, j = 0;
	for (i; i < 5; i++) {
		j = 0;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
	}
}