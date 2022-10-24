#include <stdio.h>

/* Write a C program to check a given integer is positive even, negative even,
 * positive odd or negative odd. Print even if the number is 0.
 */
int main(){
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("The number is, ");
	if (n == 0)
		printf("0\n");
	else if (n > 0)
		printf("positive");
	else if (n < 0)
		printf("negative");

	if (n != 0 && n % 2 == 0)
		printf(" and even.\n");
	else if (n != 0 && n % 2 != 0)
		printf(" and odd.\n");
}
