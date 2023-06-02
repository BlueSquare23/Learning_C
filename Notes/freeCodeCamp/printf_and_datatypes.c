#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 26; 		// Age is type int
	double gpa = 3.7; 	// GPA is type double 
	char grade = 'A';	// Grade is type char and is storing a single character
	char name[] = "Johnny";	// Name is an array of characters containing "John"

	printf("Student Info\n");
	printf("Name: %s\n", name);	// %s for type char array[]
	printf("Grade: %c\n", grade); 	// %c for type single char
	printf("Age: %d\n", age);	// %d for type singed int
	printf("GPA: %f\n", gpa);	// %f for floating points nums aka type double

	return 0;
}
