// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex6: Intro to C
//  - Pointers & Functions

#include <stdio.h>

void increase(int*, int);
void decrease(int*, int);

int main()
{
    int x = 2;
    printf("x=%d\n", x);
    increase(&x, 10);
    printf("(increased by 10) x=%d\n", x);    
    decrease(&x, 5);
    printf("(decreased by 5) x=%d\n", x);    
    return 0;
}

void increase(int *x, int N) 
{
    *x += N;
}
void decrease(int *x, int N) 
{
    *x -= N;
}
