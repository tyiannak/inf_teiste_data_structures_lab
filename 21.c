#include <stdio.h>
#include <stdlib.h>
#include "libs/mylist.h"

int main()
{
    list_node *mylist;

    list_init(&mylist);
    
    list_insert_start(&mylist, 1);          list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_end(&mylist, 2);            list_print(mylist); printf("Length = %d\n", list_length(mylist));
    
    list_insert_at(&mylist, -1, 1);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_at(&mylist, -2, 2);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_at(&mylist, -3, 0);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_at(&mylist, -4, 5);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_at(&mylist, -5, 7);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_end(&mylist, 9);            list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_at(&mylist, 0, 15);         list_print(mylist); printf("Length = %d\n", list_length(mylist));

    list_insert_start(&mylist, 2);          list_print(mylist); printf("Length = %d\n", list_length(mylist));
    
    return 0;
}