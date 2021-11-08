#include <stdio.h>

/* Write a C program to check a given array of integers of length 1 or more and
 * return true if the first element and the last element are equal in the given
 * array.
 */
int main(){
	int len;	//length of array
	int array[] = {1,2,3,4,5,1};
	
	len = sizeof(array) / sizeof(array[0]);

	printf("Elements of array: ");
	for (int i = 0; i < (len); ++i)
		printf("%d ", array[i]);
	printf("\n");
	
	printf("Array length: %d\n", len);
	printf("Last Element: %d\n", array[len - 1]);

	if (array[0] == array[len - 1])
		printf("The first and last element are the same.\n");
}
