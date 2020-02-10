#include <stdio.h>

/* count lines in input */
/*
main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
*/

/* Exercize 1-8; Write a program to count blanks, tabs, and newlines. */
/*main()
{
	int c, nl, tb, bs;

	nl = 0;
	tb = 0;
	bs = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++tb;
		if (c == ' ')
			++bs;
	}
	printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", nl, tb, bs);
}
*/

/* Exercize 1-9; Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
/*
main()
{
	int c;
	int inspace;

	inspace = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			if (inspace == 0){
				inspace = 1;
				putchar(c);
			}
		}
		if (c != ' ')
		{
			inspace = 0;
			putchar(c);
		}
	}
	return 0;
}
*/

/* Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an unambiguous way*/
/* Ex given the string: "1	1		1"
 * The program will produce the string: "1t1tt1"
 */
main()
{
	int c, x;
	
	x = 0;
	while ((c = getchar()) != EOF){
		x = 0;
		if (c == '\t'){
			putchar('\\');
			putchar('t');
			x = 1;
		}
		if (c == '\b'){
			putchar('\\');
                        putchar('b');
			x = 1;
		}
		if (c == '\\'){
			putchar('\\');
			putchar('\\');
			x = 1;
		}
		if (x == 0){
			putchar(c);
		}
	}
}
/*
*/
