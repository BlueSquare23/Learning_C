#include<stdio.h>
#include <stdlib.h>

int main(){
	// Defined using two sets of brackets [][]
	// Number of arrays
	//       | Number of elements per array
	//       v  v 
	int nums[3][2] = { 
			{1, 2},
			{3, 4},
			{5, 6}
		};

	printf("%d\n", nums[0][0]);	// First array, first element (1)
	printf("%d\n", nums[1][1]);	// Second array, second element (4)
	printf("%d\n", nums[2][1]);	// Last array, last element (6)
	printf("\n");

	// Nested forloop
	int i, j;
	// Increment over top level array (has 3 elements)
	for(i = 0; i < 3; i++){
		// Increment over inner arrays (each has 2 elements)
		for(j = 0; j < 2; j++){
			printf("%d\n", nums[i][j]);	// If i and j are both zero, nums[i][j] has the value 1, ect.
		}
		printf("\n");
	}

	return 0;
}
