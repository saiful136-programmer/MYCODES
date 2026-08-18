#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node * next;
};
struct node *head = NULL;
void print()
{
  struct node *temp;
  temp = head;
  while(temp != NULL)
  {
    printf("%d", temp ->data);
    temp = temp ->next ;
  }
};
int main()
{
  struct node *newnode;
  struct node *temp;
  int x;
  printf("enter the vlue of x:");
  scanf("%d", &x);
  for(int i=0;i<x;i++)
  {
    newnode = (struct node*) malloc(sizeof(struct node));
    scanf("%d", &newnode -> data);
    newnode -> next = NULL;
    if(head==NULL)
    {
      head=newnode;
    }
    else{
    temp = head;
    while(temp->next !=NULL )
    {
      temp = temp -> next;
    }
    temp -> next = newnode;
    }
  }
  print();
  return 0;
}
  
