// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex1: Intro to C
// Variables etc
#include <stdio.h>

int main()
{
    int a;
    int b = 2;
    int c;
    float f = 10.1245;
    printf( "Example1: Variables\n" );    
    printf( "f = %.3f\n", f);    
    a = 2;
    printf( "a = %d\n", a);    
    a += 1;
    printf( "a = %d\n", a);    
    printf( "b = %d\n", b);    
    printf( "a + b = %d\n", a+b);    
    printf( "Please give c: ");    
    scanf( "%d", &c );
    printf( "a + b + c = %d + %d + %d = %d\n", a, b, c, a+b+c);
    printf( "a * b * c = %d * %d * %d = %d\n", a, b, c, a*b*c);
    printf( "a / b  = %d / %d = %d (integer division)\n", a, b, a/b);
    printf( "a / b  = %d / %d = %.3f (float casting + division)\n", a, b, a/(float)b);
    return 0;
}

