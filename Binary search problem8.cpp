//exact search
#include<stdio.h>
int main()
{
    int array[]={1,2,3,5,6,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int low=0, high=n-1,mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(array[mid]==x)
        {
            printf("found at index %d", mid);
            return 0;
        }
        else if(array[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("not found");
    return 0;

}
