/*
//16_1)����1)
#include <stdio.h>
void main() {
	int n1 = 12;
	int n2 = 7;
	int res1 = n1 | n2;
	int res2 = n1 & n2;
	int res3 = n1 ^ n2;

	//printf("res1 : %d\n", res1); // 12 -> 1100,  7 -> 111
								 // 1100 or 0111 = 1111 -> 15
	//printf("res2 : %d\n", res2); //4
	//printf("res3 : %d\n", res3); //11

	int su = 15;
	su = ~su;
	printf("su :  %d\n", su);  //15 -> 00001111  ->NOT����(11110000)���� �� ���� 1: ������ȣ(-)
												 //1�� ������ ���ѰŶ� 2�� ������ ��Ʈ+1�� ��
							   //1�� ���������: -16
							   //2�� ������ -15

	int mv1 = 30, res1;
	int mv2 = 30, res2;
	res1 = mv1 << 3;
	printf("res1 : %d\n", res1);  //00011110  -> �������� ��Ʈ 3ĭ�� �̵� : 11110000
	res2 = mv2 >> 3;
	printf("res2 : %d\n", res2);  //00011110  -> ���������� ��Ʈ 3ĭ�� �̵�: 00000011
}
*/


//18.��Ÿ ������(sizeof(�ڷ���),   ,(�޸�������: A,B ���� ����), ���Ǻ� ������)
// sizeof()�� ũ�⸦ ����Ʈ ������ �ؼ� ���������� ��ȯ
// ,�����ڴ� �� �̻��� ���� �� ���� ������ ���� �̾ ��� �� ���
// ���Ǻ� ������: ������ �Ǻ��Ͽ� ������ ���� ��� ���� ������ ����, �����̸� ������ ����
// ����:       ���� ?   ��  :  ����;

/*
//18_1)����1) sizeof(�ڷ���)
#include <stdio.h>
void main() {
	int a = 123;
	char ch = 'a';
	double b = 3.14;
	float f = 2.17F;
	char str[10] = "clang";

	printf("intũ��: %dByte\n", sizeof(int));
	printf("short intũ��: %dByte\n", sizeof(short int));
	printf("charũ��: %dByte\n", sizeof(char));
	printf("doubleũ��: %dByte\n", sizeof(double));
	printf("floatũ��: %dByte\n", sizeof(float));
	printf("long floatũ��: %dByte\n", sizeof(long float));

	printf("\n");
	printf("%dB\n", sizeof(a));
	printf("%dB\n", sizeof(ch));
	printf("%dB\n", sizeof(a + ch));
	printf("%dB, %dB,  %dB\n", sizeof(b), sizeof(f), sizeof(b + f));
	printf("%dB\n", sizeof(a + f));
	printf("%dB\n", sizeof('A'));
}
*/

/*
//18_2),������ �� ���Ǻ� ������
#include <stdio.h>
void main() {
	printf("�޸� ������','�� "), printf("�� ������ �̾� �ִ� ����\n");
	printf("�޸� ������','�� "); printf("�� ������ �̾� �ִ� ����\n");

	//���Ǻ� ������
	int n1 = 1;
	int n2 = 0;
	n1 ? printf("��\n") : printf("����\n");
	n2 ? printf("��\n") : printf("����\n");
}
*/


//19.ǥ�� �Է� �Լ� : scanf()		[Ű����� �Է¹޾Ƽ� ��ȯ�ϴ� �Լ�]
// �ܼ�â�� �Է��� ���� ���� �޸�(�������� �ּҰ�)�� ���� �� �� ���
// �⺻ ��:  scanf("�Է� ���� ����[%]", �Է���ġ(�ּ�));
// int a;
// scanf("%d", &a);

//19_1) ���� scanf()�� ���ȿ� ������ ������ �����ؾ� ��� ����...
/*
#include <stdio.h>
void main() {
	int n;
	printf("������ �Է�: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}

//C4996���� : scanf�� VC++2010���ĺ��� scanf()�� �ܺ��� �ּҵ� ã�ư��� ������ ������
//			  ���� ������ scanf-> scanf_s�� ����

*/

//19_2_1)scanf�̿� ���1) ������ �����ϴ� ���Ǹ� ����ó��
/*
#define _CRT_SECURE_NO_WARNINGS //���� ��� �����Ѵٶ�� ����
#include <stdio.h>
void main() {
	int n;
	printf("������ �Է�: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}
*/

//19_2_2)���־� ��Ʃ����� �Ӽ������� ���� ���� ����
/*
#include <stdio.h>
void main() {
	int n;
	printf("������ �Է�: ");
	scanf("%d", &n);
	printf("n : %d\n", n);
}
*/

//day05.c �ҽ����� -> �Ӽ� -> C/C++ �ȿ� SDL(�������α׷�)�� �ƴϿ� ����;
//��, ȿ���� day05.c �ҽ����� ��������


//19_3)scanf_s�� �̿�

//1)����(%d,%lf)
//scanf_s("%����", &������);

//2)����(%c)
//scanf_s("%c", &������, ũ�Ⱚ);

//3)���ڿ�(%s)
//scanf_s("%s", ������, ũ�Ⱚ);

/*
//19_3_1)scanf_s(����)
#include <stdio.h>
void main() {
	int n;
	printf("���� �Է�: ");
	scanf_s("%d", &n);
	printf("n : %d\n", n);
}
*/

//19_3_2)scanf_s(�Ǽ�)
/*
#include <stdio.h>
void main() {
	double d;
	float f;
	printf("�� ���� �Ǽ��� �Է�: "); scanf_s("%lf%f", &d, &f);
	printf("d : %lf,  f: %f\n", d, f);
}
*/

/*
//19_4)scanf_s���� ���� ����
#include <stdio.h>
void main() {
	int n1, n2;
	//printf("����1 �Է�: "); scanf_s("%d", &n1);
	//printf("����2 �Է�: "); scanf_s("%d", &n2);
	//printf("n1: %d,  n2: %d\n", n1, n2);
	//1)�Է��� 2����, �� �� ���� �Էµ� �����ϳ�, ��µ��� �Էµ��������� �ϳ��� ���..

	//printf("���� �Է�: \n"); scanf_s("%d", &n1);
	//printf("n1: %d\n", n1);
	//2)������ ���� X (��, ����ϱⰡ �� �����...)

	printf("���� �Է�: "); scanf_s("%d\n", &n1);
	printf("n1: %d\n", n1);
	//3)�Է��Լ��� ���������ڿܿ� �ٸ� �Է°��� ǥ���ؼ��� �ȵ˴ϴ�.
	//�ٸ� ���ڰ� �� ���: �ϳ� �� �Է¹޾ƾ��Ѵٰ� �Ǵ�..
}
*/

/*
//19_5)���� �� ���ڿ� �Է�
#include <stdio.h>
void main() {
	//���� ���
	//char ch = ' ';
	//printf("�����Է�: "); scanf_s("%c", &ch, sizeof(ch));  //ũ��� 1 ����
	//printf("ch : %c, %d\n", ch, ch);

	//���ڿ� ���
	//char str[10] = "abc";
	//printf("���ڿ� �Է�: "); scanf_s("%s", str, sizeof(str));
	//printf("str : %s\n", str);
	//���ڿ� �Է��� ������ ���������� ũ�Ⱑ �������� �ݵ��, ��ŭ ũ�⸦ ��������
	//"��Ȯ�ϰ� �ν�"�� ���Ѿ� �ϸ�,
	//���ڿ��迭��: str�� �迭�� ù��° ���(�ε�����ȣ[0])�� �ּҰ��� ���������.
	// �ּ� ��ġ: &�� �� �ʿ� X

	//���ڿ� �Է½� ���ǻ���(�ܾ� �Է½� ���⸦ ����ϸ� �ȵȴ�.)
	char word1[50];

	printf("�ܾ� �Է�: "); scanf_s("%s", word1, 50);
	printf("Hello world !!!�� �Է�: %s\n", word1);
}
*/



//19_6)Quiz_1)�� ���� ������, �� ���� �Ǽ����� �Է¹޾Ƽ� ������ ������ ����� �ڵ�
//��) %d + %lf = %lf�� �Է¹����ɷ� ���


//19_7)Quiz_2)������ ���� �����Դϴ�. 
//            ������ �̸�, C, Linux, Windows, Network�� ������ �Է¹ް�, 
//            �հ� �� ����� ���ؼ� ���
















#include <stdio.h>
int main()
{
	char Student[20];
	int C = 0, Linux = 0, Windows = 0, Network = 0, sum;
	double avg;

	printf("������ : "); scanf_s("%s", Student, 20);
	printf("C���� : "); scanf_s("%d", &C);
	printf("������ ���� : "); scanf_s("%d", &Linux);
	printf("������ ���� : "); scanf_s("%d", &Windows);
	printf("��Ʈ��ũ ���� : "); scanf_s("%d", &Network);

	sum = C + Linux + Windows + Network;
	avg = (double)sum / 4;
	printf("\n");
	printf("=============================================================\n");
	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "������", "C", "Linux", "Win", "Net", "�հ�", "���");

	printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2lf\n", Student, C, Linux, Windows, Network, sum, avg);
	return 0;
}

