// 4주차 과제

// 1.
/*
#include <stdio.h>
int main() {
	float a, b;
	long float pi = 3.141592;
	printf("r(cm):  "); scanf_s("%f", &a);
	printf("h(cm):  "); scanf_s("%f", &b);
	printf("\n");
	printf("밑면 원의 넓이: %f (cm^2)\n", (pi * a* a));
	printf("밑면 원의 둘레: %f (cm)\n", 2*pi*a);
	printf("원기둥의 부피: %f (cm^3)\n", ((pi*a* a))*b);
	printf("원기둥의 겉넓이: %lf (cm^2)\n", ((pi * a* a*2)+2*pi*a*b));
}
*/


// 2.

#include <math.h>
#include <stdio.h>
int main() {
	int n, temp;
	int a = 0;
	printf("4자리 정수 입력: "); scanf_s("%d",&n);
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		a += temp;
	}
	printf("1 2 3 4의 합: %d\n", a);

	int c=1;
	printf("3자리 정수 입력: "); scanf_s("%d", &n);
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		c *= temp;
	}
	printf("3 2 1의 곱: %d\n",c);

	c = c - 6;
	int k=0;
	printf("2자리 정수 입력: "); scanf_s("%d", &n);
	if (n > 0) {
		c += n%10;
		k+= n/10;
	}
	printf("4의 2승: %d\n", int(pow(double(k), double(c))));
	printf("\n");
}




// 3.
/*
#include <math.h>
#include <stdio.h>
int main() {
	int w, v, h;
	printf("물체의 무게(kg): "); scanf_s("%d", &w);
	printf("물체의 속도(m/s): "); scanf_s("%d", &v);
	printf("물체의 높이(m): "); scanf_s("%d", &h);
	printf("\n");
	printf("물체는 %lf(J)의 운동 E를 보유.\n",0.5*w*int(pow(v,2)));
	printf("물체는 %lf(J)의 위치 E를 보유.\n",w*h*9.8);
	printf("\n");
}
*/










