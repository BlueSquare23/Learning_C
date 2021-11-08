#include<stdio.h>
#include <stdlib.h>

int main(){
	int luckyNumbers[] = {3, 16, 77, 56, 23};
	     // Index values  0   1   2   3   4

	double favNumbers[77];	

	printf("%d\n", luckyNumbers[0]); 

	luckyNumbers[0] = 100;	// Can reassign just like normal var

	printf("%d\n", luckyNumbers[0]);

	favNumbers[7] = 23;

	printf("%f\n", favNumbers[15]);

	return 0;
}
