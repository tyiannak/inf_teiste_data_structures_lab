#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;

int main()
{
    node *a, *b, *c;
    a = (node*)malloc(sizeof(node));
    b = (node*)malloc(sizeof(node));
    c = (node*)malloc(sizeof(node));
    
    a->data = 1; a->next = b;
    b->data = 2; b->next = c;
    c->data = 3; c->next = NULL;

    printf("(a-->b-->c) nodes data: ");
    node *d;
    for (d = a; d!=NULL; d=d->next)
        printf("%d ", d->data);

    a->next = c;
    printf("\n(a-->c) nodes data: ");
    for (d = a; d!=NULL; d=d->next)
        printf("%d ", d->data);
    printf("\n");
    return 0;
}

