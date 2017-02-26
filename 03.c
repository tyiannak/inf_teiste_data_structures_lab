// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex3: Intro to C
// Arrays (without pointers): compute the average of two random arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float nums10[10];
    float nums10000[10000];
    float sum10 = 0;
    float sum10000 = 0;
    srand((int)time(NULL));

    // set random arrays:
    for (int i=0; i<10; i++)
        nums10[i] = (float)rand()/RAND_MAX;
    for (int i=0; i<10000; i++)
        nums10000[i] = (float)rand()/RAND_MAX;

    // compute average values:
    for (int i=0; i<10; i++)
        sum10 += nums10[i];
    sum10 /= 10;
    for (int i=0; i<10000; i++)
        sum10000 += nums10000[i];
    sum10000 /= 10000;

    printf (" Sum is equal to %.3f\n", sum10);
    printf (" Sum is equal to %.3f\n", sum10000);
    
    return 0;
}