#include <stdio.h>
#include <stdlib.h>
#include "libs/mybinsearchtree.h"

int main()
{
    bst_node *tree;
    tree = bst_init();
    tree = bst_insert(tree, 1);
    tree = bst_insert(tree, 3);    
    tree = bst_insert(tree, 23);    
    tree = bst_insert(tree, -1);
    tree = bst_insert(tree, 4);
    tree = bst_insert(tree, -2);
    tree = bst_insert(tree, 5);    
    tree = bst_insert(tree, 0);
    tree = bst_insert(tree, 1);
    print_tree(tree, 5);
    bst_node *min = bst_min(tree);
    bst_node *max = bst_max(tree);
    printf("min = %d\n", min->data);
    printf("max = %d\n", max->data);
    printf("depth = %d\n", bst_depth(tree));
    return 0;
}


