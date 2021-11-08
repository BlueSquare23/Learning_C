#include<stdio.h>
#include <stdlib.h>

int main(){
	sayHi("John", 26);
	sayHi("Timmy", 25);
	sayHi("Kim", 24);
	return 0;
}

void sayHi(char name[], int age){
	printf("Hello %s %d\n", name, age);
}
