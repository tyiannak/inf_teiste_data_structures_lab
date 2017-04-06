#include <stdio.h>
#include <stdlib.h>
#include "libs/mylist.h"

int main()
{
    list_node *mylist;
    list_init(&mylist);
    // insert elements on start:
    for (int i=0; i< 5; i++)
        list_insert_start(&mylist, i);
    // insert elements on end:
    for (int i=0; i< 5; i++)
        list_insert_end(&mylist, i);    
    // print list:

    int find3 = list_find_first_element(mylist, 3);
    if (find3==-1)    
        printf("Element 3 not found in list\n");            
    else
    {
        printf("Element 3 found in position %d\n", find3);
        list_delete_element(&mylist, find3);
    }

    find3 = list_find_first_element(mylist, 3);
    if (find3==-1)    
        printf("Element 3 not found in list\n");            
    else
    {
        printf("Element 3 found in position %d\n", find3);
        list_delete_element(&mylist, find3);
    }

    list_print(mylist);

    return 0;
}

