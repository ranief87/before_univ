// 두 번째 스터디
#include <stdio.h>

int main() {
    int num1;
    int n1, n2, n3, n4, n5;

    scanf("%d", &num1);

    n5 = num1 / 10000;
    num1 = num1 - n5 * 10000;
    n4 = num1 / 1000;
    num1 = num1 - n4 * 1000;
    n3 = num1 / 100;
    num1 = num1 - n3 * 100;
    n2 = num1 / 10;
    n1 = num1 % 10;

    printf("%d %d %d %d %d", n1, n2, n3, n4, n5);

    return 0;
}