#ifndef MYQUEUE_H_   
#define MYQUEUE_H
#define maxQueueSize 1000000     // maximum length of the queue
int queue_push(int *p, int val, int *backIndex);
int queue_pop(int *p, int *frontIndex, int *backIndex, int *poppedValue);
void queue_print(int *p, int frontIndex, int backIndex);
#endif // MYQUEUE
