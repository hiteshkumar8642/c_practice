#include <stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

int main(void)
{
  Node*temp;
  Node*head=NULL;
  Node* p=NULL;
  
  int n;
  printf("\nenter the number of elements\t");
  scanf("%d",&n);

  while(n--)
  {
     temp=(Node *)malloc(sizeof(struct node));
     printf("\nenter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(head==NULL)
    {
      head=temp;
      p=temp;
    }
    else
    {  
      p->next=temp;
      p=temp;
    }
    
  }
  printf("\nyour data is\n");
  while(head!=NULL)
  {
    if(head->next!=NULL)
      printf("%d->",head->data);
    else
      printf("%d",head->data);

    head=head->next;
  }
  return 0;
}
