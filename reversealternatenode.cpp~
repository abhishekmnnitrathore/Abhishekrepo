#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *node_)
{
 struct node *temp;
 temp = node_;
 while(node_->next != NULL)
  {
     node_= node_->next;
  }
 node_->next= temp;
 temp->next = NULL;
  
}

void rearrange(struct node *node_)
{
   int count=1;
   struct node *temp;
   while(node_->next != NULL)
  {
     if(count%2==0)
      {
       temp->next= node_->next;
        traverse(node_);
      }
     else
      {
        temp= node_;
      }
     count++;
     node_= node_->next;
  }
}
 
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = new node();
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
 
void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
 

int main()
{
    struct node *start = NULL;
 
    /* The constructed linked list is:
     1->2->3->4->5->6->7 */
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
 
    cout<<"Linked list before calling  rearrange()"<<endl;
    printList(start);
 
    rearrange(start);
 
    cout<<"Linked list after calling  rearrange()"<<endl;
    printList(start);
 
    return 0;
}
