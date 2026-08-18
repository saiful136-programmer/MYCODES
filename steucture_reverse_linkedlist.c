#include<stdio.h>
#include<stdlib.h>
struct node* 
{
    int data;
    struct node* next;
};
struct node* head;
void reverse()
{
    struct node *current , *previous, *next;
    previous=NULL;
    current = head;
    while(temp!=NULL)
    {
        next = current ->next;a
        current ->next = previous;
        current = next;
        previous = current;

    }
    head=previous;
    return head;
}
struct node* insert (struct node* head, int data)
{
    
}