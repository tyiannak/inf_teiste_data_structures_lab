// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex7: Intro to C
//  - Pointers & Functions (swapping example)

#include <stdio.h>

void swap(int*, int*);

int main()
{
    int x = 2;
    int y = 5;
    printf("x=%d, y=%d\n", x, y);    
    swap(&x, &y);
    printf("after swapping: x=%d, y=%d\n", x, y);
    return 0;
}

void swap(int *x, int *y) 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
