#include <stdio.h>

/* Write a C program to check a given integer and return true if it is within
 * 10 of 100 or 200. 
 */
int main(){
	int n, i;

	printf("Enter an integer: ");
	scanf("%d", &n);

	for (i = 0; i <= 10; ++i){
		printf("n+ %d\n", (n + i));
		printf("n- %d\n", (n - i));

		if ((n + i) == 100 || (n + i) == 200)
			return 1;
		else if ((n - i) == 100 || (n - i) == 200)
			return 1;
	}
	return 0;	
}
