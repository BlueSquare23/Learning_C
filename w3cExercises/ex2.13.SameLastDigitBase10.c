#include <stdio.h>

/* Write a C program to check if two given non-negative integers have the same
 * last digit.
 */
int main(){
	int n, m;

	printf("Please enter an integer: ");
	scanf("%d", &n);
	printf("Please enter another integer: ");
	scanf("%d", &m);
	
	if ((n % 10) == (m % 10))
		printf("The two integers have the same last digit.\n");
}
