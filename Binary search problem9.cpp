//first occurance
#include<stdio.h>
int main()
{
    int array[]={2,3,3,4,4,4,5,6,6,6,6,7,8};
    int x,ans,mid;
    int n= sizeof(array)/sizeof(array[0]);
    printf("Enter x:");
    scanf("%d",&x);
    int low=0,high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(array[mid]==x)
        {
            ans=mid;
            high=mid-1;
        }
        else if(array[mid]<x)
        {
            low=mid +1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("%d",ans);
}
