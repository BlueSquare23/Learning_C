#include <stdio.h>

/* Write a C program that accepts two item’s weight (floating points' values) 
 * and number of purchase (floating points' values) and calculate the average 
 * value of the items.
 */
int main(){
	float item1, numpur1, item2, numpur2;
	printf("Please enter your first items weight: ");
	scanf("%f", &item1);
	printf("Please enter the number of item1 purchased: ");
	scanf("%f", &numpur1);
	printf("Please enter your second items weight: ");
	scanf("%f", &item2);
	printf("Please enter then numer of item2 purchased: ");
	scanf("%f", &numpur2);
	printf("The average weight of your items is: %f\n", ((item1 * numpur1)+(item2 * numpur2))/(numpur1 + numpur2));
}
