#include <stdio.h>

// Write a C program that accepts three integers and find the maximum of three.
int main(){
	int int1, int2, int3;

	printf("Enter three integers (comma seperated): \n");
	scanf("%d,%d,%d", &int1, &int2, &int3);
//	printf("%d,%d,%d", int1, int2, int3);
	
	if (int1 > int2 && int1 > int3)
		printf("The largest int is: %d\n", int1);
	else if (int2 > int1 && int2 > int3)
		printf("The largest int is: %d\n", int2);
	else if (int3 > int1 && int3 > int2)
		printf("The largest int is: %d\n", int3);
	else
		printf("At least two of the ints entered are equal\n");
}
