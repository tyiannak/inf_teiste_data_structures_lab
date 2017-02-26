// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex2: Intro to C
// Arrays (without pointers)
#include <stdio.h>

int main()
{
    int nums[10];
    int sum = 0;
    // initialize array:
    for (int i=0; i<10; i++)
        nums[i] = (i+1) * 2;
    // compute sum:
    for (int i=0; i<10; i++)
        sum += nums[i];

    printf (" Sum is equal to %d\n", sum);
    
    return 0;
}
