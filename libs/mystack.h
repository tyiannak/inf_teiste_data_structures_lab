#ifndef MYSTACK_H   
#define MYSTACK_H
#define maxStackSize 10

int stack_push(int *p, int *top, int val);
int stack_pop(int *p, int *top, int *stack_poppedValue);
int stack_top(int *p, int top, int *value);
void stack_print(int *p, int top);

#endif // MYSTACK
