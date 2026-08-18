//balanced parentthess
#include<stdio.h>
#include<string.h>
int stack[100];
int top=-1;
void push(int x)
{
    top++;
    stack[top]=x;
}
void pop()
{
    if(top != -1)
        top--;
}
 int peek()
 {
        return stack [top];
 }
 int main()
 {
     int m ;
  //  int name[200];
    printf("enter m:");
    scanf("%d", &m);
    char name[m];
    for(int i=0;i<m; i++)
    {
        printf("enter your choice:");
        scanf("%c", &name[i]);
        push(name[i]);
    }
    int n = strlen(name);
    /*for(int i=0; i<n/2; i++)
    {
        push(name[i]);
    }
  //  if(int j=0; j<n; j++)
    //{
      */  for(int k=n; k<n/2; k++)
        {
            if (peek() == name[k])
            {
                pop();
            }
            else
            {
                printf("imbalanced");
                return 0;
            }
        }
        printf("balanced");


    return 0;
 }
