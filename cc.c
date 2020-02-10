#include <stdio.h>

/* count digits, white space, others */
main()
{
	int c, i, nwhite, nother;
	int ndigit[10];		//declares an empty array of ints

	/* This for loop fills the array with zeros */	
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	/* Main loop */
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9') //Tests if char is a digit
			++ndigit[c-'0'];  //If so then increment that value in the array
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
