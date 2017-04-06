#include <stdio.h>
#include <stdlib.h>
#include "libs/mylist.h"

int main()
{
    list_node *mylist;
    list_init(&mylist);
    list_insert_at(&mylist, 1, 0);
    list_insert_start(&mylist, 2);        
    list_insert_end(&mylist, 3);
    list_insert_start(&mylist, 8);
    list_print(mylist);

    int find3 = list_find_first_element(mylist, 3);
    int find25 = list_find_first_element(mylist, 25);
    if (find3==-1)
        printf("Element 3 not found in list\n");
    else
        printf("Element 3 found in position %d\n", find3);
    if (find25==-1)
        printf("Element 25 not found in list\n");
    else
        printf("Element 25 found in position %d\n", find25);
    return 0;
}

