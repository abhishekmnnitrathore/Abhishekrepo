#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct node
{
    int data;
    struct node *next;
};
 
/* Function to reverse all even positioned node and append at the end
   odd is the head node of given linked list */
void rearrange(struct node *start)
{
  struct node *p, *q, *temp, *end;
  p=start;
  q=start;
  while(q->next != NULL)
    q=q->next;
  end= q;
  while(p!= end)
  {
   temp= p->next;
   p->next= p->next->next;
   p= p->next;
   q->next= temp;
   q= q->next;
   q->next= NULL;
  }
}
 
/* Function to add a node at the beginning of Linked List */
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
 
/* Druver program to test above function */
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
 
    printf("\n Linked list before calling  rearrange() ");
    printList(start);
 
    rearrange(start);
 
    printf("\n Linked list after calling  rearrange() ");
    printList(start);
 
    return 0;
}
