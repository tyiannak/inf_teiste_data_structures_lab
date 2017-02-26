// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex4: Intro to C
//  - Functions
//  - User input (scanf)
#include <stdio.h>

int add(int, int);
int mult(int, int);

int main()
{
    int x;
    int y;
    printf("x=");                                   // get x from keyboard
    scanf("%d", &x);
    printf("y=");                                   // get y from keyboard
    scanf("%d", &y);
    printf("x=%d, y=%d\n", x, y);
    printf("add(%d,%d)=%d\n", x, y, add(x,y));      // print add(x,y)
    printf("mult(%d,%d)=%d\n", x, y, mult(x,y));    // print mult(x,y)
    return 0;
}

int add(int x, int y) 
{
    return x + y;
}

int mult(int x, int y) 
{
    return x * y;
}
