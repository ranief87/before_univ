

// 36_7) ������ ������ �̷���� '������ �迭'
// ������ ������ �̷������ �ּ� �� ������ ������ �迭
// 1. int arr1[10] : ���̰� 10�� int�� ������ ������ �̷���� �迭
// 2. double arr2[5] : ���̰� 5�� double�� ������ ������ �̷���� �迭




// 36_8) ������ �迭 ����
/*
#include <stdio.h>
void main() {
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = { &n1,&n2,&n3 };

	printf("%d\n%d\n%d\n", *arr[0], *arr[1], *arr[2]);
	printf("%p\n%p\n%p\n", arr[0], arr[1], arr[2]); // �������� �ּҰ��� ��� ������ �޸� ���� x
	printf("%d\n", sizeof(arr));  // �޸��� �ּ�ũ��: 4byte 
}
*/





// 36_9) ������ �迭 ���ڿ�
/*
# include <stdio.h>
void main() {
	char* strarr[3] = { "One","Two","����" };

	printf("%s    %s    %s\n", strarr[0],strarr[1],strarr[2]);
	printf("%p    %p    %p\n", strarr[0], strarr[1], strarr[2]);

	// printf("%s\n",strarr);
	printf("%s\n", *strarr);
	// printf("%s\n", &strarr[0]);  // �̰��� ������ �迭�� �ε��� �ּҰ��� ��Ÿ������ ���ڿ����� ���� x
	printf("%p     %p\n", strarr, &strarr[0]);
	printf("%d\n", sizeof(strarr)); // 12b  // �ּҰ��� ũ��
}
*/




// 36_9) Quiz 1.
// ���� 6�� int�� �迭 arr ����= {1,2,3,4,5,6}
// �迭�� ���ڰ� �Ųٷ� �ǰ� �մϴ�
// ��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �̿��ؼ� Ȱ��


/*
# include <stdio.h>
void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr[0], * ptr2 = arr[1], * temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d  %d\n", ptr1, ptr2);


}
 
# include <stdio.h>
void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* arr_m[6] = { &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5] };
	// printf("%p   %p",arr_m[0],arr_m[1]);
	int i = 0, temp = 0, len = 0;
	len = sizeof(arr_m) / sizeof(int*);
	printf("%d\n", len);

	
	// 1) ������ �迭 �̿�
	for (i = 0, i < len / 2, i++) {
		temp = *arr_m[i];
		*arr_m[i] = *arr_m[len - 1 - i];
		*arr_m[len - 1 - i] = temp;

	}
	

	// 2) ������ ���� 2�� �̿�
	int* fptr = &arr[0], * bptr = &arr[0];

	for (i = 0; i < len / 2, i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;

	}




	for (i = 0, i < 6; i++) {
		printf("%d", arr[1]);
		if (i == 0) {
			printf("\n");
		}
	}
}

*/




// 37. �Լ� (function): ����ڰ� ���� ���� �Ǵ� �̹� ���ǵ� �Լ��� ȣ���ؼ� ���
// Ư���� ����� �����ϴ� �ϳ��� ������ ���
// ��� ����� �Լ��� �����ϸ� ���� ���� �� �Լ��� ȣ���ؼ� ���
// �� ���� �Լ��� �����ϸ�, �� ���� ��ɸ� �ǰ� ����� ��Ÿ���� �� ����


// �����ϰ� �Լ� ����
// �Լ�����
/*
��ȯ�ڷ��� �Լ���() {
	���1;
	���2;
	...;

	return ��ȯ�ڷ����� ������ ��ɿ��� ���� �����(��);
}

*/


// 2) ȣ��

//void main() {
	//�Լ���()
//}


// 37_1) �Լ��� ����Լ�: printf()�� ��ȯ
/*
#include <stdio.h>
void main() {
	int n1, n2;
	n1 = printf("123\n");
	n2 = printf("string length\n");
}
*/



// 37_2) �Լ� �̿��ϱ�
/*
#include <stdio.h>
void func() {
	printf("�Լ�(func) ȣ���ؼ� ��ȯ\n");
}

void main() {
	func();

}
*/


//37_3) �Լ��� �⺻������ main �Լ� ������ �����մϴ�.
/*
#include <stdio.h>

void main() {
	func();

}

void func() {
	printf("�Լ�(func) ȣ���ؼ� ��ȯ\n");
}
*/




// 37_4) �Լ��� ����: �����μ��� ��ȯ ���� ����
// 1. �����μ� (o)  ��ȯ��(o)
// 2. �����μ� (o)  ��ȯ��(x)
// 3. �����μ� (x)  ��ȯ��(o)
// 4. �����μ� (x)  ��ȯ��(x)

// �Լ��� ����
/*
#include <stdio.h>
// �Լ� ����
//��ȯ�ڷ��� ������ �Լ���(�ڷ���1 �Ű�����1, �ڷ���2 �Ű�����2...) {

	������ �Լ��� ��ɵ�;

	return ��ɿ� ���� �����(��);  // ���´� ��ȯ�ڷ����� ����!
}

// �Լ� ����
void main() {
	������ �Լ���(�����μ�1, �����μ�2...);
}
*/
// �Ű�������? �Լ� ȣ��� �����μ��� ���� ���� �޴� ����
// �����μ�(�μ�)��? �Լ� ȣ���Ҷ� �Ű������� ���� �Ǵ� ��
// �μ��� �Ű������� �������� ���� ���� �ְ� �ޱ� ������ ������ �ݵ�� ����!





// 37_5) ���� ���� ���� �Լ� ����(�μ�, ��ȯ) �� �� ����
/*
# include <stdio.h>
int add(int n1, int n2) {      // add(����1, ����2) �Լ� ȣ��� �Ű������� �μ����� ����
	return n1 + n2;             // �Ű������� ����� �� �� ���� ���ؼ� ����� ��ȯ
}

void main() {
	int res,a,b;
	printf("add res:   %d\n", add(3, 7));
	res = add(3, 7);

	printf("add res:   %d\n", res);

	a = 5, b = 12;
	res = add(a, b);
	printf("%d", res);

}

*/



// 37_5_2) �����μ� �� ��ȯ�� ����

# include <stdio.h>
int add(int n1, int n2) {    // �μ�(o) ��ȯ(o)
	int hap = 0;             // �Լ��� ���� ���� �����ϸ� �� �Լ� ���������� �����ϴ� ����
	hap = n1 + n2;
	return hap;              // ��� ��ȯ
}

void show_add(int num) {   // �μ�(o)  ��ȯ(x)
	int hap = 0, n = 1;
	hap = num + 0;
	printf("���� ��� ���� x add�� ��������� ���  %d\n", num);
}


int shad_num(void) {      // �μ�(x)  ��ȯ(o)
	int num;
	scanf_s("%d", &num1);
	return num;          // �Ű������� void�� ���� ����(�μ��� ���� �ʴ´�)
}

void void_use() {      // �μ�(x)   ��ȯ(x)
	printf("void_use()�Լ��� ���� �ȵǰ�, �ƹ��͵� ��ȯ x \n");
	printf("�� ���� ������ �Է��ϸ� ���� ����� ���");
	return;    // return �� ��ȯ ���� ���ٶ�� �ǹ��Դϴ�. ���� ����
}

void main() {
	int res, num1, num2;
	void_use();

}




