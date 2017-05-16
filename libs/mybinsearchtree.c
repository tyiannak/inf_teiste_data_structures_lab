#include "mybinsearchtree.h" 
#include <stdio.h>
#include <stdlib.h>

bst_node* bst_init()
{
	return NULL;
}

int bst_isempty(bst_node *root)
{
    return (root==NULL);
}

int bst_depth(bst_node* root) 
{
   if (root==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = bst_depth(root->left);
       int rDepth = bst_depth(root->right);      
       if (lDepth > rDepth) 
            return (lDepth+1);
       else 
            return (rDepth+1);
   }
} 

bst_node *bst_min(bst_node *root)
{
       if(root==NULL)                    
            return NULL;        
        if(root->left) 
            return bst_min(root->left);
        else 
            return root;    
}

bst_node *bst_max(bst_node *root)
{
       if(root==NULL)                    
            return NULL;        
        if(root->right) 
            return bst_max(root->right);
        else 
            return root;    
}

bst_node* bst_insert(bst_node *root, int data)
{
       if(root==NULL)
        {
                bst_node *temp;
                temp = (bst_node *)malloc(sizeof(bst_node));
                temp -> data = data;
                temp -> left = temp -> right = NULL;
                return temp;
        }

        if(data >(root->data))
            root->right = bst_insert(root->right,data);        
        else        
            root->left = bst_insert(root->left,data);        
	return root;
}

bst_node* bst_delete(bst_node* root, int data)
{    
    if (root == NULL) return root;
 
    // If the data to be deleted is smaller than the root's data, then it lies in left subtree
    if (data < root->data)
        root->left = bst_delete(root->left, data);    
    else if (data > root->data) // else if it is larger, it lies in right subtree
        root->right = bst_delete(root->right, data);    
    else // if data is same as root's data, then This is the node to be deleted
    {
        if (root->left == NULL)
        {
            bst_node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            bst_node *temp = root->left;
            free(root);
            return temp;
        }
        // node with two children: Get the inorder successor (smallest in the right subtree)
        bst_node* temp = bst_min(root->right);         
        root->data = temp->data; // Copy the inorder successor's content to this node        
        root->right = bst_delete(root->right, temp->data); // Delete the inorder successor
    }
    return root;
}

void bst_printOrdered(bst_node *root)
{
    if(root==NULL)
                return;	
    bst_printOrdered(root->left);
    printf("%d\n",root->data);
    bst_printOrdered(root->right);
}

void bst_printPreOrdered(bst_node *root)
{
    if(root==NULL)        
            return;        
    printf("%d\n",root->data);
    bst_printPreOrdered(root->left);
    bst_printPreOrdered(root->right);
}

void bst_printPostOrdered(bst_node *root)
{
    if(root==NULL)
        return;        
    bst_printPostOrdered(root->left);
    bst_printPostOrdered(root->right);
    printf("%d\n",root->data);
}

void padding ( char ch, int n )
{
  int i;
  for ( i = 0; i < n; i++ )
    putchar ( ch );
}

void print_tree ( bst_node *root, int level )
{
  int i;
  if ( root == NULL ) {
    padding ( '\t', level );
    puts ( "x" );
  }
  else {
    print_tree ( root->right, level + 1 );
    padding ( '\t', level );
    printf ( "%d\n", root->data );
    print_tree ( root->left, level + 1 );
  }
}
