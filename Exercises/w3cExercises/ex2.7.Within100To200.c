#include <stdio.h>

/* Write a C program to check if a given integers is in the range 100..200
 * inclusive.
 */
int main(){
	int n;

	printf("Please enter an integer: ");
	scanf("%d", &n);

	if (n >= 100 && n <= 200)
		return 1;
	return 0;
}
