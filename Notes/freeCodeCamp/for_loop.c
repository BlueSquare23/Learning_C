#include<stdio.h>
#include <stdlib.h>

int main(){
	// Prototypical while loop
	int i = 1;
	while(i <= 5){
		printf("%d ", i);
		i++;
	}

	printf("\n");

	// Equivalent for loop
	int j;
	for(j = 1; j <= 5; j++){
		printf("%d ", j);
	}

	// Lucky numbers
	int luckyNumbers[] = {4, 6, 14, 23, 9, 16};

	printf("\nYour lucky numbers are:\n");

	int x;
	for(x = 0; x < 6; x++){
		printf("%d ", luckyNumbers[x]);
	}
	
	return 0;
}
