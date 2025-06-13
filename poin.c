//sample array idex
#include <stdio.h>
void main() {
    int n=10;
    int*ptr;
    ptr=&n;
    printf("value of n is%d",n);
    printf("\n Address of n is %x",ptr);
    printf("\n Address of pointer is %x",n);
    printf("\n value stored in the pointer is %x",n);
}
