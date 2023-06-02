#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Declare vars */	
    int a = 0;
    int b = 0;
    float c = 0.0;
    float d = 0.0;

    /* Take input */
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    /* Sum & print input */
    printf("%d %d\n", (a + b), (a - b));
    printf("%.1f %.1f\n", (c + d), (c - d));
    
    return 0;
}
