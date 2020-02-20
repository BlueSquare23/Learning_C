#include <stdio.h>

/* Write a C program to convert specified days into years, weeks and days.
 * Sample number of days = 1329.
 */

main(){
	int days, years, weeks;
	days = 1329;

	years = days / 365;
	weeks = (days % 365) / 7;
	days = days - ((years*365) + (weeks*7));

	printf("%d %d %d\n", years, weeks, days);
}
