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
