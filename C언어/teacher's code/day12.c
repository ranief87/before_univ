//day12.c
/*
//31_6)�迭�� ���ڿ� ���ڿ�
#include <stdio.h>
int main() {
	//���� ����
	//char arr2[3];
	//arr2[0] = 'a';
	//arr2[1] = 'b';
	//arr2[2] = 'c';
	//printf("arr2[0] : %c, arr2[1] : %c, arr2[2] : %c\n", arr2[0], arr2[1], arr2[2]);

	//arr2[3] = 'd';
	//printf("arr2[3]: %c\n",arr2[3]);
	//printf("%s\n", arr2);  //-> ���ڿ� �迭�� ���� �ʿ�

	//���ڿ� ����
	char arr3[] = "C Language";
	char arr4[6] = { "Clang" };
	printf("%s\n", arr3);
	printf("%s\n", arr4);
	printf("�迭 arr3�� ũ��: %dB\n", sizeof(arr3));
	printf("�迭 arr4�� ũ��: %dB\n", sizeof(arr4));
	return 0;
}
*/

//��(NULL) ���ڴ� ���ڿ��� ���� �ǹ��մϴ�.


//32.�迭�� ���ڿ� ǥ��
//char�� �迭�� ���ڿ� ���� �� ��(null)����
/*
//32_1)���ڿ� �迭 ����1)
#include <stdio.h>
void main() {
	//���ڿ� �迭 ����
	char str[] = "C_Lang_Array";
	printf("���ڿ� ���: %s\n", str);  //�迭���� �迭���� �ε��� 0�� ����Ų �ּҰ�
	printf("�迭 str�� ũ��: %dByte\n", sizeof(str));
	printf("�� ���� ������: %c\n", str[12]); //�� ���ڴ� ���� ����������, ���� ������� �� �� X
	printf("�� ���� ������: %d\n", str[12]); //����ó�� ���� �Ⱥ����� '\0'�̶� �� ���� ����

	char nu = '\0';  //�� ����
	char spb = ' ';  //���� ����
	printf("%d    %d\n", nu, spb);
	//���� ������ �ƴմϴ�. ���ڷ� ����� ��� ���� ���� ������ ���� ��,
	//����� ���� ���� ������ �ֽ��ϴ�.!
}
*/

//���ڿ��� ���� �̿��ؼ� ���ڿ��� �����ٶ�� �� �˷� �� �� �ִ�.
/*
//32_2)���ڿ��� �߰��� �� �����ؼ� ���ڿ� �� �����ϱ�
#include <stdio.h>
void main() {
	char str[50] = "I need C Programming";
	printf("���ڿ�: %s\n", str);
	printf("ũ��?:%dB\n", sizeof(str));

	printf("�� Ȯ��: %d\n", str[20]);
	//printf("%d\n", str[30]);  // ������ ���� str[20]�� �������� �ǹ� X

	str[8] = '\0';
	printf("���ڿ�: %s\n", str);
	printf("�ȳ��� ����: %c\n", str[12]);

	str[6] = 0;
	printf("���ڿ�: %s\n", str);

	str[6] = ' ', str[8] = ' ';
	printf("���ڿ�: %s\n", str);
}
*/

/*
//32_3)���� �� ��( ���ڿ��� ����: �Լ�)
// strlen(���ڿ�) : ���� �� ����
#include <stdio.h>
#include <string.h>    //strlen(x)�� ����(���ڿ��� ���õ� �������)

void main() {
	
	//char str[] = "clang";
	//printf("���ڿ��� ����: %d\n", strlen(str));
	//char str1[50];
	//printf("���ڿ� �Է�: "); scanf_s("%s", str1, sizeof(str1));
	//printf("���ڿ��� ����: %d\n", strlen(str1));
	
	//printf("���ڿ� ����: %d\n", strlen("chl"));

}
*/

/*
//32_4)strlen�Լ� ���� ���ڿ� ���� ���ϱ�
#include <stdio.h>
void main() {
	char str[50];  //����� ���� ���� �ֱ� ����.
	int len = 0;
	printf("�ܾ� �Է�: "); scanf_s("%s", str, sizeof(str));

	while (str[len] != '\0') {  //���� �� ������ ���� ����
		len++;
	}
	printf("���ڿ�: %s,  ���ڿ� ����: %d\n", str, len);
}
*/



//32_5)Quiz_1)�ܾ �Է��ؼ� ���� ��, ����� ���ܾ �Ųٷ� �����ؼ� ����ϴ� �ڵ� �����
//����)  chlrkd  -> dkrlhc
/*
//�Լ�����
#include <stdio.h>
void main() {
	char arr[50];
	char temp = ' ';

	printf("�ܾ� �Է�: "); scanf_s("%s", arr, sizeof(arr));
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	//printf("���ڿ� ����: %d\n", len);
	printf("�ʱⰪ ���ڿ�: %s\n", arr);
	for (int i = 0; i < len/2; i++) {
		temp = arr[i];
		arr[i] = arr[(len - i) - 1];
		arr[(len - i) - 1] = temp;
	}
	printf("������ ���ڿ�: %s\n", arr);
}
*/

/*
//�Լ��̿�(���ο� ���ڿ� �迭 �����ؼ� �Ųٷ� ����)
#include <stdio.h>
#include <string.h>
void main() {
	char arr[30];
	printf("�ܾ� �Է�: "); scanf_s("%s", arr, sizeof(arr));
	char tmp[30];

	//chlrkd  ->  dkrlhc
	printf("�ʱⰪ ���ڿ�: %s\n", arr);

	for (int i = 0; i < strlen(arr); i++) {
		tmp[i] = arr[strlen(arr) - i - 1];
	}
	tmp[strlen(arr)] = '\0';

	printf("������ ���ڿ�: %s\n", tmp);
}
*/



//33.random �� ��Ÿ �Լ��� �ҷ�����
// ������ ���� ����� �Լ�: rand();
// �� �Լ��� <stdlib.h>�� ����� �Լ�

/*
//33_1)����1)
#include <stdlib.h>
#include <stdio.h>
void main() {
	//1)���� �ҷ�����
	//printf("���� : %d\n", rand());
	//printf("���� : %d\n", rand());

	//2)������ ����
	int ran;
	ran = rand();
	printf("���� : %d\n", ran);
	//rand()�� �������� ��Ģ�� �ְ� ���� �̱�(������ X)
}
*/

/*
//33_2)����2) srand(�ʱⰪ)
// rand() �Լ��� �ʱⰪ�� �����ϴ� �Լ�(���������� <stdlib.h>�� ����)
#include <stdlib.h>
#include <stdio.h>
void main() {
	int i, num = 0;
	srand(6);  //�ʱⰪ �����ؼ� ���ǰ� ����(��, ������)
	for (i = 0; i < 3; i++) {
		num = rand();
		printf("rand: %d\n", num);
	}
}
*/


//33_3)����3)  time(NULL) �Լ�
// 1970�� 1�� 1�� 0�� 0�� 0�� ���� ���� ���� �帥 �� ���� �����ִ� �Լ�
// <time.h>�� ����(�ð��� ���õ� �Լ����� ����� �������)
// ����: time(NULL);    ����: srand(time(NULL)); �� �Բ� ���(����)
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main() {
	int i, num = 0;
	//printf("%lld\n", time(NULL));
	srand(time(NULL));  
	for (i = 0; i < 20; i++) {
		num = rand();
		printf("rand: %d\n", num);
		printf("rand % 10 : %d\n", rand() % 10);  //0 ~ 9������ ���� ����

		//Quiz_2) 1 ~ 10 ������ ���� �̱�
		//Quiz_3)  1 ~ 100 ������ ���� �̱�
		//Quiz_4)  -1 ~ 1 ������ ���� �̱�
	}
}
*/


