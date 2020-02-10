#include <stdio.h>

/* Write a program to print the lengths of words supplied to it as input. */
main()
{
	int c, i, len;
	int word[15];

	for (i = 0; i < 15; ++i)
		word[i] = 0;
	
	len = i = 0;
	while ((c = getchar()) != EOF){
		if (c != ' ' && c != '\n' && c != '\t'){
			++len;
//			printf("%d\n", len);
		}
		else if (c == ' ' || c == '\n' || c == '\t'){
			word[i] = len;
			len = 0;
			++i;
		}
	}
	i = 0;
	for (i = 0; i < 15; ++i)
		if (word[i] != 0)
			printf("Word %d had %d characters\n", i, word[i]);

}
