#include <stdio.h>
//Ch 1.7 Functions

//The Power-of Function
//Power Function's Prototype Declaration
int power(int m, int n); //Param names optional in prototype (but good practice)

//Main loop to test the function
main()
{
	int i;
	for (i = 0; i < 10; ++i)
		printf("i = %d\t 2^i = %d\t -3^i = %d\n", i, power(2,i), power(-3,i));
	return 0;
}
//Power() Function's Definition
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

