/* Exercize 1-8; Write a program to count blanks, tabs, and newlines. */
main()
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

