// 3���� ����

// 1.
/*
#include <stdio.h>
int main() {
	float a,b;
	printf("�Է�: "); scanf_s("%f %f", &a, &b);
	printf("\n");
	printf("+: %f\n", (a + b));
	printf("-: %f\n", (a - b));
	printf("*: %.6f\n", (a * b));
	printf("/: %f\n", (a / b));
}
*/

// 2.
/*
#include <stdio.h>
int main() {
	int a;
	printf("�Ž��� ���� ��(��): "); scanf_s("%d", &a);
	printf("\n");
	int x, y, z, w;
	x = a / 50000;
	printf("5������: %d��\n", x); 
	a = a - 50000 * x;
	y = a / 10000;
	printf("1������: %d��\n", y);
	a = a - 10000 * y;
	z = a / 5000;
	printf("5õ����: %d��\n", z); 
	a = a - 5000 * z;
	w = a / 1000;
	printf("1õ����: %d��\n", w); 
	a = a - 1000 * w;
	printf("\n");
	printf("���� ��(������): %d��\n", a);	
}
*/

// 3.
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	float p,pi,a,b;
	pi = M_PI;
	printf("������(pi)�� ��: "); scanf_s("%f", &p);
	printf("\n");
	a = (p * 25);
	b = (pi * 25);
	printf("���� �� ����: %.20f\n", a);
	printf("M_PI�� �� ����: %.20f\n", b);
	printf("\n");
	printf(">������: %.20f(%%)\n", (b-a)/b);
}
