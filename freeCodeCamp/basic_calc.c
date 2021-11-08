#include<stdio.h>
#include <stdlib.h>

int main(){
	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);	// Pointer to num1

	printf("Enter second number: ");
	scanf("%lf", &num2);	// Pointer to num1

	printf("Result: %f\n", num1 + num2);

	return 0;
}
