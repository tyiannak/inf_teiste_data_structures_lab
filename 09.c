// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex9: Intro to C
//  - Pointers & Functions & Arrays: Bubble sort example

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(float*, float*);
void bubbleSort( float *, int );
void printArray(float*, int);

int main()
{
    float *randArray;                               // pointer to array begining   
    int N;
    printf("Number of random elements: ");
    scanf("%d", &N);
    srand((int)time(NULL));
    randArray = (float*)malloc(N * sizeof(float));   // allocate memory for the array
    float mean = 0.0;
    for (int i=0; i< N; i++)    
        randArray[i] = (float)rand() / RAND_MAX;   // set i-th array element
    printf("Before sorting:\n");
    printArray(randArray, N);
    bubbleSort(randArray, N);
    printf("After sorting:\n");
    printArray(randArray, N);
    return 0;
}

void bubbleSort( float *array, int size )
{
   for (int pass = 0; pass < size - 1; pass++)
      for (int j = 0; j < size - 1; j++)
         if ( array[ j ] > array[ j + 1 ] )
            swap( &array[ j ], &array[ j + 1 ] );
}

void swap(float *x, float *y) 
{
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(float *array, int N)
{
    for (int i=0; i<N; i++)
        printf("%d: %.3f\n", i, array[i]);
}
