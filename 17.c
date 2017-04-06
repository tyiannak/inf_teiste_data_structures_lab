#include <stdio.h>
#include <stdlib.h>
#include "libs/myqueue.h"

int main()
{
    int q[maxQueueSize];
    int iFront = 0;
    int iBack = 0;
    int a;
    
    for (int i=0; i<15; i++)
    {
        if (queue_push(q, i, &iBack)==1)        
            printf("Pushed element %d - Current Queue:", i);                    
        else
            printf("Could not push element %d (queue is full) - Current Queue: ", i);
        queue_print(q, iFront, iBack); 
    }
    
    for (int i=0; i<5; i++)        
    {        
        if (queue_pop(q, &iFront, &iBack, &a)==1)
            printf("Popped element %d  - Current Queue: ", a);                        
        else
            printf("Could not pop - Current Queue: ");
        queue_print(q, iFront, iBack);
    }
    return 0;
}

