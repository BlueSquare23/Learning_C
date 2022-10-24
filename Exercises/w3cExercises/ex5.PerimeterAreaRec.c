#include <stdio.h>
/* Write a C program to compute the perimeter and area of a rectangle with a
 * height of 7 inches. and width of 5 inches.
 */
main(){
	int height = 7;
	int width = 5;
	int area;
	int perimeter;

	area = height * width;
	perimeter = (2 * height) + (2 * width);

	printf("Area of the rectangle is: %d\n", area);
	printf("Perimeter of the rectangle is: %d\n", perimeter);
}
