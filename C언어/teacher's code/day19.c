//day19.c

//47. ����ü
//����ü(Structure)�� �ϳ� �̻��� ����(�����ͺ��� �� �迭 �� ����)�� ��� "���� ���ο� �ڷ���"��
//����ڰ� ���� �����ϴ� �� �ڷ����Դϴ�.


//����
/*
struct �����Ǳ���ü�� {
	int ����ġ;
	double ��;
	char ����;
};
*/
//�����Ǳ���ü���� int,double,char �� 1���� ���� �ڷ��� �̸��� ����
//�� �����Ǳ���ü���� "����� ���� �ڷ���"�̶�� �մϴ�.(����ü�ڷ���)

/*
//47_1)����ü�ڷ��� ��� ���
#include <stdio.h>
//1)����ü ����
struct person {		//person ����ü�ڷ��� ����
	char name[20];	//person �ȿ� �̸��̶�� ������
	int age;		//person �ȿ� ���̶�� ������
	char phone[14]; //person �ȿ� ��ȭ��ȣ��� ������
};	//����ü�ڷ��� �ȿ� ����ִ� �ڷ����� "����ڷ���"

//2)����ü �̿�(����)
void main() {
	struct person p1;   //����ü�ڷ� ����
	struct person p2 = { "�ְ�", 28, "010-4900-1532" }; //����ü�ڷ� �ʱ�ȭ

	//3)����ü �ȿ� �ִ� ����ڷ��� ����
	printf("p2�� �̸�: %s\n", p2.name); //����ü������.��������� : .�� �̿��ؼ� ������ ����
	printf("p2�� ����: %d\n", p2.age);
	printf("p2�� ����: %s\n", p2.phone);
}
*/

/*
//47_2)����ü ��� ������ �����ؼ� �� �Է½� ������
#include <stdio.h>
#include <string.h>      //strcpy_s()�Լ� ȣ���� ���� ��ó����

struct info {
	int num;
	char name[20];
};

void main() {
	struct info p1;
	printf("��ȣ1 �Է�: "); scanf_s("%d", &p1.num);
	printf("�̸�1 �Է�: "); scanf_s("%s", p1.name, sizeof(p1.name));

	printf("=========ȸ��==========\n");
	printf("��ȣ : %d\n", p1.num);
	printf("�̸� : %s\n", p1.name);
	printf("======================\n");

	//������
	struct info p2;
	p2.num = 2;
	//p2.name = "�ְ�";
	//" ~ "�� ���� ���� ũ�⿡ ���� ���ϴ� Ư¡����, ����ü ������ ���� �Ҽ� X
	//�ʱⰪ �� �Է� ���� �ʱ�ȭ �ϴ� ���:  "���ڿ��� �����ϴ� �Լ��� �̿�"
	//strcpy_s(char *, sizeof(), const char* )
	
	strcpy_s(p2.name, sizeof(p2.name),"�ְ�");

	printf("=========ȸ��==========\n");
	printf("��ȣ : %d\n", p2.num);
	printf("�̸� : %s\n", p2.name);
	printf("======================\n");
}
*/

/*
//47_3)����ü ���ǿ� ���ÿ� ����ü������ ���� �� �ʱ�ȭ����
#include <stdio.h>
//1)����ü ���� �� ������ ����
struct number {
	int n1;
	int n2;
} num1, num2;

//2)�ʱ�ȭ�� �̸� ���� ����
struct point {
	int xpos;
	int ypos;
} pos1 = { 1,2 };

void main() {
	num1.n1 = 1, num1.n2 = 2;
	num2.n1 = 10, num2.n2 = 20;
	printf("num1.n1: %d\n", num1.n1);
	printf("num2.n2: %d\n", num2.n2);

	printf("pos1��ǥ: (%d, %d)\n", pos1.xpos, pos1.ypos);
}

*/


//48.����ü�� �迭 �׸��� ������
/*
//48_1)����ü�� �迭 ����
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

void main() {
	struct pt arr[3];
	int i = 0;

	for (i = 0; i < 3; i++) {
		printf("���� ��ǥ(x,y) �Է�:"); scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++) {
		printf("%d��: (%d, %d)\n", i + 1, arr[i].xpos, arr[i].ypos);
	}
}
*/


//48_2)����ü ������ ������
/*
struct pt pos = { 11,22 };
struct pt* pptr = &pos;     //����ü������ pt�� ������ ���� ����

*pptr.xpos : 11   //pptr�� ����Ű�� pos�������� ��� xpos�� ����

���� ����  pptr->xpos : 11�� ���� ������ ����� ��Ÿ��
��, ����ü����  ->�����ڷ�  *�� .�� �ѹ��� ǥ���� ����
*/
/*
//48_3)����ü�� ������ ����
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

void main() {
	struct pt pos = { 1,2 };
	struct pt* pptr = &pos;
	printf("�ʱ���ǥ: (%d,%d)\n", pos.xpos, pos.ypos);

	(*pptr).xpos += 4;   //pptr�� pos�� ����Ű�Ƿ� pos �ȿ� ����� ����ų �� X
	printf("x��ǥ 4 ����: (%d,%d)\n", pos.xpos, (*pptr).ypos);

	pptr->ypos += 5;
	printf("y��ǥ 5 ����: (%d,%d)\n", pptr->xpos, pptr->ypos);
}
*/



//48_4)����ü�� ����� ����ü ���� ����
#include <stdio.h>
struct pt {
	int xpos;
	int ypos;
};

struct circle {
	double radius;
	struct pt* center;
};


void main() {
	struct pt cen = { 2,7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };

	printf("ring�� ������: %g\n", ring.radius);
	printf("ring�� �߽� : (%d, %d)\n", ring.center->xpos, ring.center->ypos);
}




















