// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex8: Intro to C
//  - Pointers as Arrays

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    float *randArray;                               // pointer to array begining   
    int N;
    printf("Number of random elements: ");          // read number of random elements
    scanf("%d", &N);
    srand((int)time(NULL));                         
    randArray = (float*)malloc(N * sizeof(float));    // allocate memory for the array
    float mean = 0.0;
    for (int i=0; i< N; i++)    
    {
        randArray[i] = (float)rand() / RAND_MAX;    // set i-th array element
        mean += randArray[i];                       // update mean calculation
    }
    mean /= N;
    float std = 0.0;
    for (int i=0; i< N; i++)                        // calculate standard deviation
        std += pow((randArray[i] - mean), 2);
    std /= N;
    std = sqrt(std);
    printf("Mean = %.4f\nStd = %.4f\n", mean, std);

    return 0;
}
