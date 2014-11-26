/* program to construct tree using inorder and levelorder traversals */
#include <iostream>
using namespace std;
struct Node *head_new;
/* A binary tree node */
struct Node
{
int key;
struct Node* left, *right;
};


Node* newNode(int key)
{
Node *node = new Node;
node->key = key;
node->left = node->right = NULL;
return (node);
}

Node* buildTree(int size , int index ,int *input, int count)
{
if(count==size)
return NULL;
Node *root = newNode(index);
if(index>=size-1)
return root;
static struct Node *head = root;
head_new=head;
//cout<<"root= "<<root<<" key= "<<root->key<<"head= "<<head<<endl;
root->left = buildTree(size,index+1,input,count+1);
//cout<<"left= "<<root->left<<" key= "<<root->key<<endl;
root->right = buildTree(size, index+input[index],input,count+1);
//cout<<"right= "<<root->right<<" key= "<<root->key<<endl;
return root;
}

int search(struct Node *root)
{
if(root== NULL)
return 0;
if(root->left == NULL && root->right==NULL)
return 1;
return search(root->left)+search(root->right);
}

void inorder(struct Node *root)
{
if(root == NULL)
return;
inorder(root->left);
cout<<" "<<root->key;
inorder(root->right);

}

/* Driver program to test above functions */
int main()
{

int input[] = {1,3,2,5,7};
int size = sizeof(input)/sizeof(input[0]);
Node *root = buildTree(size, 0, input,0);
//cout<<"head_new= "<<head_new<<endl;
inorder(head_new);
cout<<"   answer= "<<search(head_new)<<endl;
return 0;
}
