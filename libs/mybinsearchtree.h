#ifndef MYBINARYSEARCHTREE_H_   
#define MYBINARYSEARCHTREE_H

struct bst_node{
    int data;
    struct bst_node *left;
    struct bst_node *right;
};
typedef struct bst_node bst_node;

bst_node* bst_init();                               // inialize the tree structure
int bst_isempty(bst_node *root);                    // check if tree is empty
int bst_depth(bst_node* root);                      // get tree depth
bst_node *bst_min(bst_node *root);                  // get node with minimum value
bst_node *bst_max(bst_node *root);                  // get node with maximum value
bst_node* bst_insert(bst_node *root, int data);     // insert new node
bst_node* bst_delete(bst_node* root, int data);     // delete node with a particular value
void bst_printOrdered(bst_node *root);              // print ordered
void bst_printPreOrdered(bst_node *root);           // print preordered
void bst_printPostOrdered(bst_node *root);          // print postordered
void print_tree ( bst_node *root, int level );      // draw the tree in console

#endif 
