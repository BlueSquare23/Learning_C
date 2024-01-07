#include <stdio.h>

/* Null Pointer Dereference - Dangling pointer

 A null pointer has a reserved value, often but not necessarily the value
 zero, indicating that it refers to no object
 ...
 Since a null-valued pointer does not refer to a meaningful object, an
 attempt to dereference a null pointer usually causes a run-time error.

 From Wikipedia:
   https://en.wikipedia.org/wiki/Pointer_(computer_programming)#Null_pointer
*/

int main() {
    int val = 1;
    int *p = NULL;
    *p = val; // Segmentation fault (core dumped)
}
