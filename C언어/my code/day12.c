

// 33_6) ��Ť��� ���ڿ� ���ڿ�
/*
#include <stdio.h>
int  main() {
	// ���� ����
	//char arr2[3];
	//arr2[0] = 'a';
	//arr2[1] = 'b';
	//arr2[2] = 'c';
	//printf("arr2[0]: %c, arr2[1] : %c, arr2[2] : %c\n", arr2[0], arr2[1], arr2[2]);

	//arr2[3] = 'd';
	//printf("arr2[3]: %d\n", arr2[3]);
	//return 0;


	// ���ڿ� ����
	char arr3[] = "c language";
	char arr4[6] = { "clang" };
	printf("%c\n", arr3);
	printf("%c\n", arr4);
	printf("�迭 arr3�� ũ�� : %d\n",sizeof(arr3))
	printf("�迭 arr4�� ũ�� : %d\n", sizeof(arr4));
	return 0;

}
*/
// �� (NULL) �� �־�߸� ���ڿ��� ����


// 32. �迭�� ���ڿ� ǥ��
// char�� �迭�� ���ڿ� ���� �� ��(null) ����

// 32_1) ���ڿ� �迭 ����(1)
/*
# include <stdio.h>
void main() {
	// ���ڿ� �迭 ����
	char str[] = "C_ Lang_Array";
	printf("���ڿ� ���: %c\n", str);
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("null ���� ������: %c\n", str[12]);
	printf("null ���� ������: %d\n", str[12]);

	char nu = "\0"; // �� ����
	char spb = " "; // ���� ����
	printf("%d      %d\n", nu, spb);
	// ���� ������ �ƴմϴ� ���ڷ� ����� ��� �츮 ���� ������ ���� ��
	// ����� ���� ���� ������ �ֽ��ϴ�

}

// ���ڿ��� ���� �̿��ؼ� 







// 32_3) ���� �� ��(���ڿ��� ����:


















#include <stdio.h>
void main() {
	char str[]
}
*/












// 32_5) �ܾ �Է¹޾Ƽ� ���� �� ����� ���ܾ �Ųٷ� �����ؼ� ����ϴ� �ڵ� �����
// ���� 

# include <stdio.h>
void main() {
	char str[50];
	char temp= " ";
	printf("�ܾ� �Է�: "); scanf_s("%c", str, sizeof(str));

	int len = 0;
	while (str[len] != '\0') {
		len++;

	}
	for (int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[(len - 1)-1];
		str[(len - 1)-1] = temp;
	}
	printf(" ������ : %s\n", temp);
	

}












// 33. random 
// ������ ���� ����� �Լ�: rand()

#include <stdlib.h>
# include <stdio.h>
void main() {
	// ���� �ҷ�����
	printf("%d\n", rand());
	printf("%d\n", rand());

	// ������ ����
	int rad;

}













