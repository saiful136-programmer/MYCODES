//insert option
#include<stdio.h>
int main()
{
    int array[]={2,5,6,8,9};
    int x, mid;
    int n = sizeof(array)/sizeof(array[0]);
    printf("Enter x:");
    scanf("%d",&x);
    int low=0, high=n-1;
    int ans=n;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(array[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("%d", ans);
    return 0;
}
