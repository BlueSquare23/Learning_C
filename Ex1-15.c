#include <stdio.h>

/* Exercise 1-15; Rewrite the temperature conversion program of section 1.2 to use a function for conversion. */
/* Program from Section 1.2,
main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
*/

//Updated version
int celsius(int fahr);
main()
{
	int fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
//	printf("%d", celsius(fahr));
	while (fahr <= upper){
		printf("%3d %6d\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}
}

int celsius(int temp){
	int c;
	c = 5 * (temp-32) / 9;
	return c;
}
