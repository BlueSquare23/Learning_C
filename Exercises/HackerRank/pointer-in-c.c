#include <stdio.h>

void update(int *a,int *b) {
    
    // Save pointer values as local vars.
    int valA = *a;
    int valB = *b;

    // First one is easy just add the two values.
    *a = valA + valB;

    // Second one requires cheap hacky sign flip for absolute value.
    int c = valA - valB;
    if (c < 0) {
        *b = -c;
    } else {
        *b = c;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
