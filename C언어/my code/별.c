
//     *
//     **
//     ***
//     ****
//     *****
/*
# include <stdio.h>
void main() {
	int k=1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < k; j++) {  // Á¶°Ç½Ä: j<=k
			printf("*");
			
		}
		printf("\n");
		k++;
	}
}
*/



//  ***** 
//  ****
//  ***
//  **
//  *

/*
# include <stdio.h> 
void main() {
	for (int a = 5; a > 0; a--) {
		for (int b = 1; b <=a; b++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
# include <stdio.h>
void main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");

		}
		printf("\n");
	}
}
*/




//         *
//        **
//       ***
//      **** 
//     *****

/*
# include <stdio.h>
void main() {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 5; i++) {
		for (k = 4; k > i; k--) {
			printf(" ");
			
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}

*/



//  *****
//   ****
//    ***
//     **
//      *

# include <stdio.h>
void main() {
	int i = 0, k = 0, j = 0;
	for (i = 0; i <= 5; i++) {
		for (k = 0; k < i; k++) {
			printf(" ");
		}

		for (j = 5; j > i; j--) {
			printf("*");
		}

		printf("\n");
	}
}



















































































/*
# include <stdio.h>
void main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*\t");
		}
		printf("\n");
	}
}
*/























