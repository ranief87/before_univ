// 4���� ����

// 1.
/*
#include <stdio.h>
int main() {
	float a, b;
	long float pi = 3.141592;
	printf("r(cm):  "); scanf_s("%f", &a);
	printf("h(cm):  "); scanf_s("%f", &b);
	printf("\n");
	printf("�ظ� ���� ����: %f (cm^2)\n", (pi * a* a));
	printf("�ظ� ���� �ѷ�: %f (cm)\n", 2*pi*a);
	printf("������� ����: %f (cm^3)\n", ((pi*a* a))*b);
	printf("������� �ѳ���: %lf (cm^2)\n", ((pi * a* a*2)+2*pi*a*b));
}
*/


// 2.

#include <math.h>
#include <stdio.h>
int main() {
	int n, temp;
	int a = 0;
	printf("4�ڸ� ���� �Է�: "); scanf_s("%d",&n);
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		a += temp;
	}
	printf("1 2 3 4�� ��: %d\n", a);

	int c=1;
	printf("3�ڸ� ���� �Է�: "); scanf_s("%d", &n);
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		c *= temp;
	}
	printf("3 2 1�� ��: %d\n",c);

	c = c - 6;
	int k=0;
	printf("2�ڸ� ���� �Է�: "); scanf_s("%d", &n);
	if (n > 0) {
		c += n%10;
		k+= n/10;
	}
	printf("4�� 2��: %d\n", int(pow(double(k), double(c))));
	printf("\n");
}




// 3.
/*
#include <math.h>
#include <stdio.h>
int main() {
	int w, v, h;
	printf("��ü�� ����(kg): "); scanf_s("%d", &w);
	printf("��ü�� �ӵ�(m/s): "); scanf_s("%d", &v);
	printf("��ü�� ����(m): "); scanf_s("%d", &h);
	printf("\n");
	printf("��ü�� %lf(J)�� � E�� ����.\n",0.5*w*int(pow(v,2)));
	printf("��ü�� %lf(J)�� ��ġ E�� ����.\n",w*h*9.8);
	printf("\n");
}
*/










