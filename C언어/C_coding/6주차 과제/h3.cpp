// 7주차 과제

// 13. 학점 산출 계산기

#include <stdio.h>
int main() {
	int a,b,c,d,e,f;
	double num1 = 0.0,num2=0.0;
	double total1 = 0.00, total2 = 0.00;
	double g, h;


	printf("수업시수(강): "); scanf_s("%d", &a);
	printf("\n");
	rewind(stdin);

	printf("[출결] \(10%%\)\n");
	printf("지각(지각 3회= 결석 1회): "); scanf_s("%d", &b);
	rewind(stdin);
    

	printf("결석(수업 시수 1/5 이상 F): "); scanf_s("%d", &c);
	printf("\n");
	printf("\n");
	rewind(stdin);

	printf("[시험] \(30%%/40%%\)\n");
	printf("중간고사 점수(100점 만점): "); scanf_s("%d", &d);
	
	rewind(stdin);

	printf("기말고사 점수(100점 만점): "); scanf_s("%d", &e);
	printf("\n");
	printf("\n");
	rewind(stdin);

	printf("[기타] \(20%%\)\n");
	printf("과제 점수(10점 만점): "); scanf_s("%d", &f);
	printf("\n");
	printf("\n");

	if (a == 17) {
		g=b/3;
		num1 = g + c;
		if (num1 > 17 / 5) {
			printf("출결 미달이므로 나의 학점은 F이다..");
		}
		else {
			total1 = (double)f * 2.0 + (double)e * 0.4 + (double)d * 0.3 + 0.1 * (100.0 - ((double)(num1 / a) * 100.0));
			if (total1 >= 80) {
				printf("나의 총 점수는 %.2lf점이므로 학점은 A이다.", total1);
			}
			else if (total1 < 60) {
				printf("나의 총 점수는 %.2lf점이므로 학점은 C이다.", total1);
			}
			else {
				printf("나의 총 점수는 %.2lf점이므로 학점은 B이다.", total1);
			}
		}
	}

	else if (a == 34) {
		h = b / 3;
		num2 = h + c;
		if (num2 > 34 / 5) {
			printf("출결 미달이므로 나의 학점은 F이다..");
		}
		else {
			total2 = (double)f * 2.0 + (double)e * 0.4 + (double)d * 0.3 + 0.1 * (100 - ((double)(num2 / a) * 100));
			if (total2 >= 80) {
				printf("나의 총 점수는 %.2lf점이므로 학점은 A이다.", total2);
			}
			else if (total2 < 60) {
				printf("나의 총 점수는 %.2lf점이므로 학점은 C이다.", total2);
			}
			else {
				printf("나의 총 점수는 %.2lf점이므로 학점은 B이다.", total2);
			}
		}
		printf("\n");
	}






}

// 14. 사칙 선택 연산
/*
#include <stdio.h>
int main() {
	float a, b;
	char c;
	printf("두 실수를 입력: "); scanf_s("%f", &a); scanf_s("%f", &b);
	rewind(stdin);
	printf("연산기호(+,-,*,/) 입력: "); scanf_s("%c", &c,1);
	printf("\n");
	switch (c) {
	case 43:
		printf("답은 %.f 입니다\n", a + b);
		break;
	case 45:
		printf("답은 %.f 입니다\n", a - b);
		break;
	case 42:
		printf("답은 %.f 입니다\n", a * b);
		break;
	case 47:
		printf("답은 %.2f 입니다\n", a / b);
		break;
	default:
		printf("잘못된 연산 기호입니다\n");
	}
	printf("\n");
	return 0;
}
*/



// 15. 종달새는 노래를 하는가
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("    ___(__)___\n");
	printf("   |        |\n");
	printf("  |    ___   |\n");
	printf("  |   ('v') |\n");
	printf("  |  ((___)) |\n");
	printf("  |--/-\"---\"---|\n");

	printf("\n");
	srand((unsigned)time(NULL));
	int num1, num2;
	int num3 = 0;
	num1 = rand() % 24;
	num2 = rand() % 2;
	if (num1 > 12) {
		printf("현재 시각은 오후 %d시입니다.\n", num1 - 12);
		num3 = num1-12;
	}
	else {
		printf("현재 시각은 오전 %d시입니다.\n", num1);
	}
	
	if (num2 == 0) { 
		printf("현재 날씨는 화창하지 않습니다.\n");
	}
	else {
		printf("현재 날씨는 화창합니다.\n");
	}

	printf("\n");

	if (num2 == 1) {
		if (num1 >= 6 && num1 <= 9) {
			printf(">종달새가 노래를 한다 지리지리 지리리~\n");
		}
		else if (num3 >= 2 && num3 <= 4) {
			printf(">종달새가 노래를 한다 지리지리 지리리~ \n");
		}
		else {
			printf(">종달새가 노래를 하지 않는다\n");
		}
	}
	else {
		printf(">종달새가 노래를 하지 않는다\n");
	}
	printf("\n");
	return 0;




}
*/

