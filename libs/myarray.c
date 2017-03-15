#include "myarray.h" 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* array_ones(int N)
{
    float *a = (float*)malloc(sizeof(float)*N);
    for (int i=0; i<N; i++)
        a[i] = 1;
    return a;
}

float* array_zeros(int N)
{
    float *a = (float*)malloc(sizeof(float)*N);
    for (int i=0; i<N; i++)
        a[i] = 0;
    return a;
}

float* array_rand(int N)
{
    float *a = (float*)malloc(sizeof(float)*N);
    srand(time(NULL));    
    for (int i=0; i<N; i++)
        a[i] = (float) rand() / RAND_MAX;

    return a;
}

float* array_opp(float *array1, int N)
{
    float *b = (float*)malloc(sizeof(float)*N);    
    for (int i=0; i<N; i++)
        b[i] = -array1[i];
    return b;
}

float* array_add(float *array1, float *array2, int N)
{
    float *array3 = (float*)malloc(sizeof(float)*N);    
    for (int i=0; i<N; i++)
        array3[i] = array1[i] + array2[i];
    return array3;    
}

float* array_mult(float *array1, float *array2, int N)
{
    float *array3 = (float*)malloc(sizeof(float)*N);    
    for (int i=0; i<N; i++)
        array3[i] = array1[i] * array2[i];
    return array3;    
}

float* array_div(float *array1, float *array2, int N)
{
    float *array3 = (float*)malloc(sizeof(float)*N);    
    for (int i=0; i<N; i++)
        array3[i] = array1[i] / array2[i];
    return array3;    
}

void array_print(float *array, int N)
{   
    printf("[");
    for (int i=0; i<N; i++)
        printf(" %.3f ", array[i]);
    printf("]");
}
