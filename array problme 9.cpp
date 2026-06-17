// range sum query
#include<stdio.h>
int main()
{
    int i,n,x,y;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements:", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    int pref[n];
    printf("Enter the x & y");
    scanf("%d",&x);
    scanf("%d",&y);
    pref[0]=array[0];
    for(i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+array[i];
    }
    int sum;
    sum=pref[y]-pref[x-1];
    printf("the sum of %d to %d is %d",x,y,sum);

    return 0;
}
