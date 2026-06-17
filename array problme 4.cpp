// count number
#include<stdio.h>
int main()
{
    int i,n,r, count;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter your required value:");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(array[i]==r)
        {
            count++;
        }
    }
    printf("%d is %d times here",r,count);
}
