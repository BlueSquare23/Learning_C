#include <stdio.h>

int main(){
	float x, y, z, i, r, l;

	x = i = r = l = 0;
	y = 1;
	do {
		printf("Fib Num: %.2f\n", x);
		printf("Index: %.2f\n", i);
		printf("Ration of Fib Num to Index: %.2f\n", r);
		printf("Difference btwn last Ratio: %.2f\n", r - l);
		printf("First Digit of Difference: %d\n", (int) (r - l));
		printf("\n");

		l = r;
		r = x / i;
		z = x + y;
		x = y;
		y = z;
		++i;
	} while (x < 100);
}
