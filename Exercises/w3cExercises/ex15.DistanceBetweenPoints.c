#include <stdio.h>
#include <math.h>

/*Write a C program to calculate the distance between the two points.*/
int main(){
	float x1, y1, x2, y2, len;	//Points

	printf("Enter the cordinates of your first point (Ex. x1, y1): ");
	scanf("%f, %f", &x1, &y1);
//	printf("%.2f, %.2f\n", x1, y1);
	printf("Enter the cordinates of your second point (Ex. x1, y1): ");
	scanf("%f, %f", &x2, &y2);

	len = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between points is: %.2f\n", sqrt(len));
	
}
