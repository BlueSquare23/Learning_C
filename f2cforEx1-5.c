#include <stdio.h>

/* print Fahrenheit-Celsius table */
/* Modify the program to print the table in reverse order
    from 300 to 0. */
main()
{
	int fahr;
	
	printf("%3s %4.1s\n", "F", "C");	
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

