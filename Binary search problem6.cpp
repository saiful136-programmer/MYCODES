#include<stdio.h>
int main()
{
    int array[]={1,2,3,5,7,9};
    int n = sizeof(array);
    int i,x,r,s,j;
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(array[i]>x)
        {
            r=i;
            break;
        }
    }
    for(j=0;j<n;j++)
    {
        if(array[j]>=x)
        {
            s=j;
            break;
        }
    }
   printf("lower value : %d\n", s);
   printf("upper value : %d", r);
    return 0;
}
