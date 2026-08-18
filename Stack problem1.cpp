#include<stdio.h>
int stack [200];
int top =-1;
void push(int x)
{
    top ++;
    stack[top]=x;
}
void  pop()
{
    top --;

}
int peek()
{
    return stack[top];
}
int main()
{
     int x,i,n;
     printf("Enter n:");
     scanf("%d", &n);
     printf("enter x:");
     for(i=0;i<n;i++)
     {
         int x;
         scanf("%d", &x);
         push(x);
     }
     for(i=0;i<n;i++)
     {
     printf("%d\n", peek());
     pop();
     }

}
