

// 18. ��Ÿ ������ (sizeof(�ڷ���),  ,(�޸�������: A ,B ���� ����, ���Ǻ� ������)
// sizeof()�� ũ�⸦ ����Ʈ ������ �ؼ� ���������� ��ȯ
// , �����ڴ� �� �̻��� ���� �� ���� ������ �ٷ� �̾ ����� ���
// ���Ǻ� ������: ������ �Ǻ��Ͽ� ������ ���� ��� ���� ������ ����, �����̸� ������ ����
// ����:        ���� ?   ��  :  ����


// 18_1) ����(1) sizeof(�ڷ���)
/*
#include <stdio.h>
void main() {
	int a = 123;
	char ch = 'a';
	double b = 3.14;
	float f = 2.17F;
	char str[10] = "clang";

	printf("int ũ��: %d Byte\n", sizeof(int));
	printf("short int ũ��: %d Byte\n", sizeof(short int));
	printf("char ũ��: %d Byte\n", sizeof(char));
	printf("double ũ��: %d Byte\n", sizeof(double));
	printf("float ũ��: %d Byte\n", sizeof(float));
	printf("long float ũ��: %d Byte\n", sizeof(long float));
	//printf("long long double ũ��: %d Byte\n", sizeof(long long double)); // 64��Ʈ�� ü�������� �� �� ���� ������ 32��Ʈ

	printf("\n");
	printf("%dByte\n", sizeof(a));
	printf("%dByte\n", sizeof(ch));
	printf("%dByte\n", sizeof(a + ch));
	printf("%dByte ,%dByte ,%dByte\n", sizeof(b),sizeof(f),sizeof(b +f));
	printf("%dByte\n", sizeof(a + f));
	printf("%dByte\n", sizeof('A'));


}
*/


// 18_2) , ������ �� ���Ǻ� ������
/*
# include <stdio.h>
void main() {
	printf("�޸� ������ ','�� "), printf("�� ������ �̾��ִ� ����\n");
	printf("�޸� ������ ','�� "); printf("�� ������ �̾��ִ� ����\n");

    // ���Ǻ� ������
	int n1 = 1;
	int n2 = 0;
	n1 ? printf("��\n") : printf("����\n");
	n2 ? printf("��\n") : printf("����\n");

}
*/



// 19. ǥ�� �Է� �Լ� : scanf() Ű����� �Է¹޾Ƽ� ��ȯ�ϴ� �Լ�
// �ܼ�â�� �Է��� ���� ���� �޸� (�������� �ּڰ�) �� ������ �� ���
// �⺻ ���� :scanf("�Է� ���� ����)










//19_2_2)���־� ��Ʃ����� �Ӽ������� ���� ���� ����

/*
#include <stdio.h>
void main() {
	int n;
	printf("������ �Է�: );
	scanf("%d , &n);
	printf("n : %d\n" , n);

}
*/

//day05.c �ҽ����� -> 
// ��, ȿ���� day05.c �ҽ����� ��������

// 19_3) scanf_s�� �̿�

// 1) ����(%d, %lf)
// scanf_s("%����", & ������)

// 2) ����(%c)
// scanf_s("%c",&������,ũ�Ⱚ)


//3) ���ڿ�(%s)
// scanf_s("%s", ������(�̹� �ּҰ��� ������ �־),ũ�Ⱚ)

// 19_3_1) scanf_s(����)

/*
# include <stdio.h>
void main() {
	int n;
	printf("�����Է�: ");
	scanf_s("%d", &n);
	printf("n : %d\n", n);
}
*/

// 19_3_2) scanf_s(�Ǽ�)
/*
#include <stdio.h>
void main() {
	double d;
	float f;
	printf("�� ���� �Ǽ��� �Է�: "); scanf_s("%lf%f", &d, &f);
	printf("d: %lf, f: %f", d, f);

}
*/

// 19_4) scanf_s ���� ���� ����
/*
#include <stdio.h>
void main() {
	int n1, n2;
	//printf("���� 1 �Է�: "); scanf_s("%d", &n1);
	//printf("���� 2 �Է�: "); scanf_s("%d", &n2);
	//printf("n1: %d, n2: %d\n", n1, n2);
	// 1) �Է��� 2����, �� �� ���� �Էµ� �����ϳ�, ��µ��� �Էµ��������� �ϳ��� ���

	//printf("���� �Է�: \n"); scanf_s("%d", &n1);
	//printf("n1: %d\n", n1);
	// ������ ���� x ����ϱ⿡ ���� ����һ�...

	printf("���� �Է�: "); scanf_s("%d\n", &n1);
	printf("n1: %d\n", n1);
	// 2) �Է��Լ��� ���������ڿܿ� �ٸ� �Է°��� ǥ���ؼ��� �ȵ˴ϴ�
	// �ٸ� ���ڰ� �� ��� �ϳ� �� �Է¹޾ƾ� �Ѵٰ� �Ǵ�


}
*/


// 19_5) ���� �� ���ڿ� �Է�

# include <stdio.h>
void main() {
	// ���� ���
	//char ch = 'a';
	//printf("�����Է�: "); scanf_s("%c", &ch,1);  // ũ��� 1 ����
	//printf("ch: %c, %d\n",ch,ch);

	// ���ڿ� ���
	char str[10] = "abc";
	printf("���ڿ� �Է�: "); scanf_s("%s", str, sizeof(str));
	printf("str: %s\n", str);
	// ���ڿ� �Է��� ������ ������ ���� ũ�Ⱑ ���ϴϱ� �ݵ�� ��ŭ���� ũ�⸦ ��������
	// ��Ȯ�ϰ� �ν��� ���Ѿ� �ϸ�
	// ���ڿ� �迭��: str�� �迭�� ù��° ��� (�ε�����ȣ[0])�� �ּҰ��� ����Ǿ�����
	// �ּ� ��ġ, &�� �� �ʿ� x

	//���ڿ� �Է½� ���ǻ���(�ܾ� �Է½� ���⸦ ����ϸ� �ȵȴ�.)
	char word1[50];
	printf("�ܾ� �Է�: "); scanf_s("%s", word1, 50);
	printf("Hello World !!!�� �Է�: %s\n", word1);

}











