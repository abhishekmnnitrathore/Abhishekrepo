#include<iostream>
using namespace std;
struct Node{
int data;
struct Node *left, *right;
};
struct Node *newNode(int key)
{
struct Node *node= new Node();
node->data= key;
node->left=node->right= NULL;
return node;
}
int search(int number ,int *in,int size)
{
for(int i=0;i<size;i++)
{
if(in[i]==number)
return i;
}
}
void build(int *in, int *pre ,int preindex ,int inindex ,int size)
{
if(preindex== size)
return;
inindex= search(pre[preindex],in,size);
}
int main()
{
    int in[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pre[]={7, 1, 0, 3, 2, 5, 4, 6, 9, 8, 10};
    int size = sizeof(in)/sizeof(in[0]);
    build(in,pre,0,0,size);
return 0;
}
