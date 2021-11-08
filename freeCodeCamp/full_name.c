#include<stdio.h>
#include <stdlib.h>

int main(){
	char full_name[20];	// Can store 20 chars
	printf("Enter your full name: ");
	fgets(full_name, 20, stdin);

	printf("Your full name is %s", full_name);	

	return 0;
}
