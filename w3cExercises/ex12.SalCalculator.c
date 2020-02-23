#include <stdio.h>

/* Write a C program that accepts an employee's ID, total worked hours of a
 * month, and the amount he received per hour. Print the employee's ID and
 * salary (with two decimal places) of a particular month.
 */
int main(){
	char id[10];
	float hours, pay;
	
	printf("Enter ID Number: ");
	scanf("%s", &id);
	
	printf("Enter Monthly Hours: ");
	scanf("%f", &hours);

	printf("Enter Hourly Pay: ");
	scanf("%f", &pay);

	printf("Employee: %s was paid $%.2f this month.\n", id, (pay * hours));
}
