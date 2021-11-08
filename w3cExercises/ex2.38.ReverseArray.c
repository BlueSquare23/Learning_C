#include <stdio.h>

// Write a C program to reverse a given array of integers of length 5.
int main(){
	int array[] = {1,2,3,4,5};
	int array2[4];

	printf("In Order:\n");

	for (int i = 0, x = 4; i < 5; ++i){
		printf("%d\n", array[i]);
		array2[x] = array[i];
		--x;
	}

	printf("Reversed:\n");
	
	for (int i = 0; i < 5; ++i)
		printf("%d\n", array2[i]);
}
