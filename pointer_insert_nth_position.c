#include<stdio.h>
#include<stdlib.h>
struct node {

    int data;
    struct node* next;
};
struct node* head = NULL;   // global
void insert(int x, int n)
{
  struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1 ->data =  x;
    temp1 ->next = NULL;
    if(n==1)
    {
        temp1 ->next = head;
        head = temp1;
    }
  struct  node* temp2 = head;
    for(int i =0; i< n-2; i++)
    {
        temp2 = temp2 ->next ;
    }
    temp1 ->next = temp2 ->next;
    temp2 ->next = temp1;
}
 void print()
{
    struct node* temp = head;
    while(temp!=NULL)
    {
        printf("%d", temp ->data);
        temp = temp ->next;
    }
    printf("\n");
}
int main()
{
   struct node* head = NULL;
    int i, n,x, poss;
    printf("how many number :");
    scanf("%d",&n);
    printf("enter position:");
    scanf("%d", &poss);
    for(i=0;i<n;i++)
    {
        printf("enter x:");
        scanf("%d", &x);
        insert(x,poss);
        print();
    }
    return 0;
}