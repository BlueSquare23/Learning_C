#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("Age address: %p\n", &age);	// Print's physical memory address
	printf("GPA address: %p\n", &gpa);	// Print's physical memory address
	printf("Grade address: %p\n", &grade);	// Print's physical memory address

	return 0;
}
