// 3주차 과제

// 1.
/*
#include <stdio.h>
int main() {
	float a,b;
	printf("입력: "); scanf_s("%f %f", &a, &b);
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
	printf("거슬러 받을 돈(원): "); scanf_s("%d", &a);
	printf("\n");
	int x, y, z, w;
	x = a / 50000;
	printf("5만원권: %d장\n", x); 
	a = a - 50000 * x;
	y = a / 10000;
	printf("1만원권: %d장\n", y);
	a = a - 10000 * y;
	z = a / 5000;
	printf("5천원권: %d장\n", z); 
	a = a - 5000 * z;
	w = a / 1000;
	printf("1천원권: %d장\n", w); 
	a = a - 1000 * w;
	printf("\n");
	printf("남은 돈(동전들): %d원\n", a);	
}
*/

// 3.
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	float p,pi,a,b;
	pi = M_PI;
	printf("원주율(pi)의 값: "); scanf_s("%f", &p);
	printf("\n");
	a = (p * 25);
	b = (pi * 25);
	printf("나의 원 넓이: %.20f\n", a);
	printf("M_PI의 원 넓이: %.20f\n", b);
	printf("\n");
	printf(">오차율: %.20f(%%)\n", (b-a)/b);
}
