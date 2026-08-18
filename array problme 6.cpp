//array inverse
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements:", n);
    for(i=0;i<n;i++)
    {
    scanf("%d", &array[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d", array[j]);
    }
    return 0;
}
