//prefix sum in array
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    int pref[n];
    printf("enter %d elements:", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    pref[0]=array[0];
    for(i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+array[i];
    }
    for(i=0;i<n;i++)
    {
    printf("%d",pref[i]);
    }
    return 0;
}
