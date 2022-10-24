#include<stdio.h>
#include <stdlib.h>

int main(){
	char grade;
	char name[20];		// Can store 20 chars
	int age;
	double gpa;

	printf("Enter your single digit grade: ");
	scanf("%c", &grade);	// Use %c for character with scanf.

	printf("Enter your name: ");
	scanf("%s", name);	// Use %s for character array with scanf.

	printf("Please enter your age: ");
	scanf("%d", &age);	// Use &age when putting data into age var.

	printf("Please enter your gpa: ");
	scanf("%lf", &gpa);	// Use %lf for double with scanf.


	printf("Your grade is %c.", grade);	
	printf("Your name is %s.", name);	
	printf("You are %d years old.", age);
	printf("Your gpa is %f.", gpa);		// Use %f for double with printf

	return 0;
}
