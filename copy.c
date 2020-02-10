#include <stdio.h>

/* copy input to output; 1st version */
/*
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
*/

/* copy input to output; 2nd version */

main()
{
        int c;

        while ((c = getchar()) != EOF) {
                putchar(c);
        }
}


/* Exercize 1-6 Verify that the expression getchar() != EOF is 0 or 1. */
/*
main()
{
	printf("Press Enter\n");
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
	return 0;
}
*/
/* Exercize 1-7 Write a program to print the value of EOF. */
/*
main()
{
	printf("The value of EOF is %d\n", EOF);
	return 0;
}
*/
