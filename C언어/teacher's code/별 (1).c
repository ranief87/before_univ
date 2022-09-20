//별.c

//1)

/*
*
**
***
****
*****
*/

/*
#include <stdio.h>
void main() {
	//int k = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {  //조건식: j <= k;
			printf("*");
		}
		printf("\n");
		//k++;
	}
}
*/


//2)
/*

*****
****
***
**
*

*/
/*
#include <stdio.h>
void main() {
	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
#include <stdio.h>
void main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
*/


//3)
/*
    *
   **
  ***
 ****
*****

*/

/*
#include <stdio.h>
void main() {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 5; i++) {
		for (k = 4; k > i; k--) {
			printf(" ");
		}
		for (j = 0; j <= i; j ++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

//4)
/*

*****
 ****
  ***
   **
	*

*/
#include <stdio.h>
void main() {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 5; i++) {
		for (k = 0; k < i; k++) {
			printf(" ");
		}
		for (j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}