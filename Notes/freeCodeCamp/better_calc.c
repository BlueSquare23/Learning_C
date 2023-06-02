#include<stdio.h>
#include <stdlib.h>

int main(){
	double num1;
	double num2;
	char op;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &op);	// Scanf needs leading single space for char 

	printf("Enter second number: ");
	scanf("%lf", &num2);	// Pointer to num1

	if(op == '+'){
		printf("Result: %f\n", num1 + num2);
	} else if(op == '-'){
		printf("Result: %f\n", num1 - num2);
	} else if(op == '*'){
		printf("Result: %f\n", num1 * num2);
	} else if(op == '/'){
		printf("Result: %f\n", num1 / num2);
	} else {
		printf("Invalid Operator!\n");
	}

	return 0;
}
