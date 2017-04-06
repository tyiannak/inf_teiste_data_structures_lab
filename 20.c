#include <stdio.h>
#include <stdlib.h>
#include "libs/mylist.h"

int main()
{
    list_node *mylist;

    list_init(&mylist);
    printf("Length = %d\n", list_length(mylist));
    
    list_insert_start(&mylist, 25);        
    list_print(mylist);
    printf("Length = %d\n", list_length(mylist));

    list_insert_start(&mylist, 15);    
    list_print(mylist);    
    printf("Length = %d\n", list_length(mylist));

    list_insert_end(&mylist, -5);    
    list_print(mylist);
    printf("Length = %d\n", list_length(mylist));

    list_insert_end(&mylist, -15);    
    list_print(mylist);
    printf("Length = %d\n", list_length(mylist));

    list_insert_start(&mylist, 8);
    list_print(mylist);
    printf("Length = %d\n", list_length(mylist));

    return 0;
}

