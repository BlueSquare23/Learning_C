#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Set vars */
    char ch;
    char s[100];
    char sen[100];

    /* Get input */
    scanf("%c", &ch);
    scanf("%s", s);
    // Chomp lingering newline.
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    /* Print vars */ 
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
