#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int gitline(char line[], int maxline);

/* Ex 1-17: Write a program to print all input lines that are longer than 20 characters */
main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	
	max = 0;
	while ((len = gitline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			if (max > 20)
				printf("%s", line);
		}
	return 0;
}

/* gitline: read a line into s, return length */
int gitline(char s[],int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
