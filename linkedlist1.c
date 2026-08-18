#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
 int main()
 {
    struct node *newnode;
    struct node *temp;
    newnode = malloc(sizeof(struct node));
    struct node *newnode2;
    newnode2 = malloc(sizeof(struct node));
    head = newnode;
    newnode -> data = 34;
    newnode -> next = newnode2;
    
    newnode2 ->data = 56;
    newnode2 ->next = NULL;
    head = temp;
    while(temp != NULL)
    {
        printf("%d", temp->data);
        temp->next = temp;
    }
    return 0;
 }