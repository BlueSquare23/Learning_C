#include<stdio.h>
#include <stdlib.h>

// Else example

int maxOfTwo(int num1, int num2){
	int result;

	if(num1 > num2){ 	// The '>' char is a Relational Operator
		result = num1;
	} else {
		result = num2;
	}
	return result;
}

// Else if example

int maxOfThree(int num1, int num2, int num3){
	int result;

	if(num1 >= num2 && num1 >= num3){	// The '&&' is a Logical And Operator
		result = num1;
	} else if(num2 >= num1 && num2 >= num3){
		result = num2;
	} else{
		result = num3;
	}
	return result;
}

int main(){

	printf("Answer: %d\n", maxOfTwo(10, 7));
	printf("Answer: %d\n", maxOfThree(23, 10, 7));

	// Logical Operators demonstrated using 0 and 1
	// Zero is false and One is true

	// The || only returns false if both sides evaluate to false
	if( 0 || 0 ){			// Try replacing 0 and 1 to test
		printf("True\n");
	} else {
		printf("False\n");
	}

	// The && only returns true if both sides evaluate to true
	if( 1 && 1 ){			// Try replacing 0 and 1 to test
		printf("True\n");
	} else {
		printf("False\n");
	}

	return 0;
}
