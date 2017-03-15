#include <stdio.h>
#include <stdlib.h>

#define maxStackSize 10

int stack_push(int *p, int *top, int val);
int stack_pop(int *p, int *top, int *stack_poppedValue);
int stack_top(int *p, int top, int *value);
void stack_print(int *p, int top);

int main(){
    int s[maxStackSize];
    int top = 0;
    int val;

    for (int i=0; i<15; i++)
    {
        if (stack_push(s, &top, i)==1)        
            printf("Pushed element %d - Current Stack:", i);                    
        else
            printf("Could not push element %d (queue is full) - Current Stack: ", i);
        stack_print(s, top); 
    }

    if (stack_top(s, top, &val)==1)
        printf("Top is %d\n", val);
    else
        printf("Stack is empty!\n");

    
    for (int i=0; i<10; i++)        
    {        
        if (stack_pop(s, &top, &val)==1)
            printf("Popped element %d  - Current Stack: ", val);
        else
            printf("Could not pop - Current Stack: ");
        stack_print(s, top);
    }

    if (stack_top(s, top, &val)==1)
        printf("Top is %d\n", val);
    else
        printf("Stack is empty!\n");

    return 0;
}

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
