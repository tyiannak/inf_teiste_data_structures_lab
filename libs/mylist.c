#include "mylist.h" 
#include <stdio.h>
#include <stdlib.h>

void list_init(list_node** head){                        // list initalization
    *head = NULL;
}

int list_isempty(list_node *head){                       // check if list is empty and return True/False
    return (head==NULL);
}

int list_length(list_node *head){                       // returns the list's length
    list_node *node;    
    if (list_isempty(head))
        return 0;
    int count = 1;                                     // loop to next nodes until next node is NULL
    for (node = head; node->next != NULL; node = node->next)
        count++;
    return count;
}

void list_print(list_node *head){                      // print all elements of the list
    if(head!=NULL)
    {
        list_node *node;    
        int count = 0;
        printf("list = [");
        for (node = head; node != NULL; node = node->next, count++)        
            printf(" %d ", node->data);                    
        printf("]\n");
    }
    else
        printf("List is currently empty.\n");    
}

void list_insert_start(list_node **head, int data)      // insert node at the beginning of the list
{
    list_node *node;                                    // create a new node whose "next" points to the current head...
    node=(list_node*)malloc(sizeof(list_node));
    node->data = data;
    node->next = *head;
    *head=node;                                         // ... and update head
}

void list_insert_end(list_node **head, int data)        // insert node at the end of the list (append)
{
    if (list_isempty(*head))
    {
        list_insert_start(head, data);
        return;
    }
    list_node *node;    
    list_node *newNode = (list_node*)malloc(sizeof(list_node));;
    for (node = *head; node->next != NULL; node = node->next);  // go to the last node
    newNode->data = data;
    newNode->next = NULL;
    node->next = newNode;
}

void list_insert_at(list_node **head, int data, int index)
{
    if (index==0)                       // if index==0 --> insert at start 
    {
        list_insert_start(head, data);
        return;
    }
    if (index==list_length(*head))     // if index>len --> insert at end
    {
        list_insert_end(head, data);
        return;
    }                                 // if index negative --> non valid
    if ((index<0) || (index>list_length(*head)))
        return;

    list_node *node;                  // create new node and set data
    list_node *newNode = (list_node*)malloc(sizeof(list_node));;
    newNode->data = data;             
    int count = 0;
    for (node = *head; node->next != NULL, count<index-1; node = node->next, count++);  // go to the previous index 
    list_node *temp = node->next;    
    node->next = newNode;
    newNode->next = temp;
}

int list_find_first_element(list_node *head, int data)  // find the first element with a particular value
{
    if(head!=NULL)
    {
        list_node *node;    
        int count = 0;        
        for (node = head; node != NULL; node = node->next)
        {            
            if (node->data == data)
                return count;                
            count++;
        }
        return -1;
    }
    return -1;        
}

int list_delete_element(list_node **head, int index)
{        
    if ((!list_isempty(*head)) && (list_length(*head)>index))
    {        
        list_node *node;    
        int count = 0;                
        if (index==0)
        {
            list_node *temp = *head;            
            *head = (*head)->next;
            free(temp);
            return 1;
        }
        for (node = *head; node != NULL, count<index-1; node = node->next)
            count++;
        if (index==list_length(*head))
            node->next = NULL;
        else
        {
            list_node *temp = node->next;
            node->next = node->next->next;
            free(temp);
        }
        return 1;
    }
    else
        return -1;
}
