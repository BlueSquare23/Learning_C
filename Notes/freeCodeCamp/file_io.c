#include<stdio.h>
#include <stdlib.h>

int main(){
	// Writing to a file
	FILE* fpointer1 = fopen("employees.txt", "w");

	// Like printf but for files
	fprintf(fpointer1, "Jim, Sales\nPan, Reception\nOscar, Accounting");
	
	fclose(fpointer1);	// Closes file

	// Reading from a file
	char line[255];

	FILE* fpointer2 = fopen("employees.txt", "r");

	// Gets first line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	// Gets second line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	// Gets third line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	fclose(fpointer2);	// Closes file

	return 0;
}
