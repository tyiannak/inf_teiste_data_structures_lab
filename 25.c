#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node node;

void printTree ( node *root, int level );

int main()
{
    node *n1 = (node *)malloc(sizeof(node));
    node *n2 = (node *)malloc(sizeof(node));
    node *n3 = (node *)malloc(sizeof(node));
    node *n4 = (node *)malloc(sizeof(node));
    node *n5 = (node *)malloc(sizeof(node));

    n1->data = 2;
    n2->data = 5;
    n3->data = 9;
    n4->data = 0;
    n5->data = 3;

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = NULL;    
    n3->right = NULL;    
    n4->left = NULL;    
    n4->right = NULL;    
    n5->left = NULL;    
    n5->right = NULL;    
    printTree(n1, 3);
    return 0;
}

void padding ( char ch, int n )
{
  int i;
  for ( i = 0; i < n; i++ )
    putchar ( ch );
}

void printTree ( node *root, int level )
{
  int i;
  if ( root == NULL ) {
    padding ( '\t', level );
    puts ( "x" );
  }
  else {
    printTree ( root->right, level + 1 );
    padding ( '\t', level );
    printf ( "%d\n", root->data );
    printTree ( root->left, level + 1 );
  }
}

