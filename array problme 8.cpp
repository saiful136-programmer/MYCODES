//cheak frequency
#include<stdio.h>
int main()
{
    int i,n,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements:", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the value of x :");
    scanf("%d",&x);
    int freq[x];
    for(i=0;i<n;i++)
    {
        if(x==array[i])
            freq[x]++;
    }
    printf("the frequency of %d is %d ", x,freq[x]);
    return 0;
}

