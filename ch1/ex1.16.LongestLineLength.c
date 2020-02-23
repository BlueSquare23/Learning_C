#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int gitline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
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
			copy(longest, line);
		}
	if (max > 0) /* there was a line */
		printf("%sLenght: %d\n", longest, max); // No need for newline char b/c `longest` already ends in "\n"
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
