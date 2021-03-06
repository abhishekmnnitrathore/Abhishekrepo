#include <stdio.h>
#include <stdlib.h>
int diametre;
int answer;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 

struct node* newNode(int data);
 
int diameter(struct node * tree)
{
if(tree== NULL)
return 0 ;
else{
int lheight= diameter(tree->left);
int rheight= diameter(tree->right);
diametre= lheight+rheight+1;
if(answer<=diametre)
{
  answer=diametre;
}
if(lheight>rheight)
return (lheight+1);
else
 return (rheight+1);
}

}
 
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
 
  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \      \
    4     5      9
   /     /
  10     6
       /
      7
     /
    8
*/
  struct node *root = newNode(1);
  root->left        = newNode(2);
//  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->left->right->left = newNode(10);
  root->left->left->left = newNode(6);
  root->left->right->left->left = newNode(7);
  root->left->right->left->left->left = newNode(8);
//  root->right->right = newNode(9);
  diameter(root);
  printf("Diameter of the given binary tree is %d\n",  answer);
 
  getchar();
  return 0;
}	
