#include<stdio.h>
#include <stdlib.h>

int main(){
	int index = 1;

	while(index <= 5){
		printf("%d\n", index);
		index++;		// Same as, index = index + 1;
	}

	// Do while loop example
	do {
		printf("%d\n", index);
		index++;		// Same as, index = index + 1;
	} while(index <= 5);

	printf("%d\n", index);

	return 0;
}
