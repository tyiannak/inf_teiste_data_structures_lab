#include "mystack.h" 
#include <stdio.h>
#include <stdlib.h>

int stack_push(int *p, int *top, int val)
{
    if (*top == maxStackSize)        
           return -1;        
    p[*top]=val;
    (*top)++;    
    return 1;   
}

int stack_pop(int *p, int *top, int *stack_poppedValue)
{
    if (*top == 0)
           return -1;
    (*top)--;  
    *stack_poppedValue = p[*top];
    return 1;
}

int stack_top(int *p, int top, int *value)
{
    if (top == 0)
           return -1;
    *value = p[top-1];
    return 1;

}

void stack_print(int *p, int top)
{     
     if (top==0)
     {
        printf("Empty Stack\n");
        return ;
    }
     for (int i=0; i<top; i++)
         printf("%d ",p[i]);
     printf("\n");
}
