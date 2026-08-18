#include<stdio.h>
#include<stdlib.h>
struct node 
{
  int data;
  struct node * next;
};
struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;
void print1()
{
struct node *temp;
temp = head1;
while(temp != NULL)
{
  printf("%d", temp->data);
  temp = temp->next;
}
};
void print2()
{
struct node *temp;
temp = head2;
while(temp != NULL)
{
  printf("%d", temp->data);
  temp = temp->next;
}
};
void print3()
{
struct node *temp;
temp = head3;
while(temp != NULL)
{
  printf("%d", temp->data);
  temp = temp->next;
}
};
/*void margelist1()
{
  int temp1;
  struct node *list1;
  if(list1->data >= list1->next->data)
  {
    temp1=list1->data;
    list1->data = list1->next->data;
    list1->next->data = temp1;
    list1 = list1->next;
  }
};*/

void margelist1(int x)
{
  int temp1;
 // struct node *list1;
  list1 = (struct node *) malloc(sizeof(struct node));
  for(int i=0; i<x;i++)
  {
    for(int j=0; j<x; j++)
    {
      if(list1[i]>=list1[j])
      {
        int temp1=list1[i];
        list1[i]=list1[j];
        list1[j]=temp1;
      }
    }
  }
}
void margelist2(int y)
{
  int temp2;
  //struct node *list2;
  list2 = (struct node *) malloc(sizeof(struct node));
  for(int i=0; i<y;i++)
  {
    for(int j=0; j<y; j++)
    {
      if(list2[i]>=list2[j])
      {
        int temp2=list2[i];
        list2[i]=list2[j];
        list2[j]=temp2;
      }
    }
  }
}
/*void margelist2()
{
  int temp2;
  struct node *list2;
  if(list2->data >= list2->next->data)
  {
    temp2=list2->data;
    list2->data = list2->next->data;
    list2->next->data = temp2;
    list2 = list2->next;
  }
};
*/
void connect()
{
  struct node *list1;
  struct node *list2;
  struct node *list3;
  while(list1->next != NULL)
  {
    list3->data = list1->data;
    list3 = list3->next;
    list1 = list1->next;
  }
  while(list3->next == NULL)
  {
    list3->data = list2->data;
    list2 =list2->next;
    list3 = list3->next;
  }
};
int main()
{
  struct node *list1;
  struct node *list2;
  struct node *list3;
  struct node *temp;
  struct node *tempp;
  int x , y, n;
  printf("enter the value of n:");
  scanf("%d",&n);
  printf("enter the vlue of x ");
  scanf("%d", &x);
  for(int i=0;i<x;i++)
  {
    list1 = (struct node *) malloc(n * sizeof(struct node));
    scanf("%d", &list1->data);
    list1->next = NULL;
    if(head1 == NULL )
    {
      head1 = list1;
    }
    else {
    temp = head1;
    while ( temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = list1;
    }
  }
  print1();
  printf("\n");
  printf("enter the vlue of y ");
  scanf("%d", &y);
  for(int j=0;j<y;j++)
  {
    list2 = (struct node *) malloc(n * sizeof(struct node));
    scanf("%d", &list2->data);
    list2->next = NULL;
    if(head2 ==NULL)
    {
      head2 = list2;
    }
    else{
    tempp = head2;
    while(tempp->next!=NULL)
    {
      tempp = tempp->next;
    }
    tempp->next = list2;
    }
  }
  print2();
  margelist1;
  margelist2;
  connect();
  print3();
  return 0;
}
  
  
