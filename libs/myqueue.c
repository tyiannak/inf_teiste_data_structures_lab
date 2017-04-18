#include "myqueue.h" 
#include <stdio.h>
#include <stdlib.h>

int queue_push(int *p, int val, int *backIndex)
{
    // this function pushes a new element at the beginning of the queue
    // arguments:
    // p            pointer at the beginning of the queue
    // val          integer value to be pushed
    // backIndex    pointer to the back index of the queue

    if (*backIndex == maxQueueSize)
        // if back index is equal to the maximum queue's size then return -1
        return -1;    
    // ... else
    p[*backIndex] = val;    // set the value of the last position of the queue equal to val
    (*backIndex)++;         // increase the back index by 1
    return 1;
}

int queue_pop(int *p, int *frontIndex, int *backIndex, int *poppedValue)
{
    // this function pops the last element of the queue and returns its value
    // arguments:
    // p            pointer at the beginning of the queue
    // frontIndex   pointer to the front index of the queue    
    // backIndex    pointer to the back index of the queue    
    // poppedValue  pointer to the popped value

    if (*frontIndex >= *backIndex) 
    {
        // empty queue:
        *frontIndex = *backIndex = 0;        
        return -1;
    }    
    (*frontIndex)++;    // increase front index by one
    *poppedValue = p[*frontIndex-1];    
    return 1;
}

void queue_print(int *p, int frontIndex, int backIndex)
{    
    if (frontIndex>=backIndex) 
    {
       printf("Empty Queue \n");
       return;
    }
    for (int i = frontIndex; i<backIndex; i++)
        printf("%d ", p[i]);
    printf("\n");
}
