#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
int isBSTUtil(struct node* node, int min, int max);
 
/* Returns true if the given tree is a binary search tree
 (efficient version). */
int isBST(struct node* node)
{
static struct node *prev = NULL;
 if(node == NULL)
  return 1;
 isBST(node->left);
 if(prev != NULL && prev->data >= node->data)
  return 0;
  prev= node;
 return isBST(node->right); 
}
 

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test above functions*/
int main()
{
  struct node *root = newNode(4);
  root->left        = newNode(2);
  root->right       = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(3);
 
  if(isBST(root))
    printf("Is BST");
  else
    printf("Not a BST");
     
  getchar();
  return 0;
}  
