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
    list_print(mylist);

    for (int i=0; i< 5; i++)
    {
        if (list_delete_element(&mylist, 0)>-1)
            printf("Element %d deleted!\n", 0);
        else
            printf("Could not delelete element %d!\n", 0);
        list_print(mylist);
        printf("\n");
    }

    for (int i=0; i< 5; i++)
    {
        int iTodelete = list_length(mylist)-1;
        if (list_delete_element(&mylist, iTodelete)>-1)
            printf("Element %d deleted!\n", iTodelete);
        else
            printf("Could not delelete element %d!\n", iTodelete);
        list_print(mylist);
        printf("\n");
    }

    if (list_delete_element(&mylist, 0)>-1)
        printf("Element %d deleted!\n", 0);
    else
        printf("Could not delelete element %d!\n", 0);
    list_print(mylist);

    return 0;
}

