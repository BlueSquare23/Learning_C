#include <stdio.h>

/* Write a C program that accepts two integers from the user 
 * and calculate the sum of the two integers.
 */

int main(){
	int int1, int2;
	
	printf("Please enter an integer: ");
	scanf("%d", &int1);
	printf("Please enter another integer: ");
	scanf("%d", &int2);
	printf("The sum of your two integers is: %d\n", (int1 + int2));
}
