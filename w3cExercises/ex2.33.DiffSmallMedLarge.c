#include <stdio.h>

/* Write a C program to check three given integers (small, medium and large)
 * and return true if the difference between small and medium and the
 * difference between medium and large is same.
 */
int main(){
	int s, m, l;

	printf("Enter three comma separated integers: ");
	scanf("%d,%d,%d", &s,&m,&l);
	//printf("%d,%d,%d\n", s,m,l);
	if ((m - s) == (l - m))
		return 1;
	else
		return 0;
}
