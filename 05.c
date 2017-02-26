// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex5: Intro to C
//  - Pointers (general intro)

#include <stdio.h>

int main()
{
    int x = 2;
    int *ptr;
    ptr = &x;                                   // now ptr points to the address of x
    printf("address of x = %p\n", &x); 
    printf("pointer = %p\n", ptr); 

    printf("x = %d\n", x); 
    printf("pointer's value = %d\n", *ptr); 

    x++;

    printf("x = %d\n", x); 
    printf("pointer's value = %d\n", *ptr); 

    return 0;
}

