#ifndef MYLIST_H_   
#define MYLIST_H

struct list_node{
    int data;
    struct list_node *next;
};

typedef struct list_node list_node;

void list_init(list_node** head);
int list_isempty(list_node *head);
int list_length(list_node *head);
void list_print(list_node *head);
void list_insert_start(list_node **head, int data);
void list_insert_end(list_node **head, int data);
void list_insert_at(list_node **head, int data, int index);
int list_find_first_element(list_node *head, int data);
int list_delete_element(list_node **head, int index);

#endif 
