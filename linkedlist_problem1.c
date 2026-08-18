#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct data;
	struct node *next;
}
int main()
{
	struct node *head = NULL;
	struct node *list_1;
	list_1 = (struct *node ) malloc(sizeof(struct node));	
	struct node *list_2;
	list_2 = (struct *node ) malloc(sizeof(struct node));
	struct node *temp;
	int x;
	printf("enter the  value of x;")
	scanf("%d", &x);
	for(int i=0; i<x; i++)
	{
		
