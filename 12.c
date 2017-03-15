// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex12: Intro to C
//  - Header files

#include <stdio.h>
#include "libs/myarray.h"

int main()
{
    float *a, *b, *c, *d;
    int N = 10;

    a = array_ones(N);
    b = array_zeros(N);
    c = array_rand(N);

    printf("a = ");
    array_print(a, N);

    printf("\nb = ");
    array_print(b, N);

    printf("\nc = ");
    array_print(c, N);

    printf("\n-c = ");
    array_print(array_opp(c, N), N);

    d = array_add(a, c, N);

    printf("\nd = ");
    array_print(d, N);


    printf("\nc+d = ");
    array_print(array_add(c, d, N), N);

    printf("\nc*d = ");
    array_print(array_mult(c, d, N), N);

    printf("\nc/d = ");
    array_print(array_div(c, d, N), N);

    printf("\n");
    return 0;
}
