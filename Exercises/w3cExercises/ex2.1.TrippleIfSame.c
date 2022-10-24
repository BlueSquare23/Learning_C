#include <stdio.h>

/* Write a C program to compute the sum of the two given integer values. If the
 * two values are the same, then return triple their sum.
 */
int main(){
	int n1, n2;
	
	printf("Please enter an integer: ");
	scanf("%d", &n1);
	printf("Please enter another integer: ");
	scanf("%d", &n2);

	if (n1 == n2)
		printf("%d\n", 3 * (n1 + n2));
	else if (n1 != n2)
		printf("%d\n", n1 + n2);
	
	return 0;
}
