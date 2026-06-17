//find out position of x
#include<stdio.h>
int main()
{
    int array[]={4,5,3,9,2,7};
    int i,x;
    printf("enter the value of x:");
    scanf("%d",&x);
    for(i=0;i<24;i++)
    {
        if(array[i]==x)
        {
            printf("the position of %d is %d", x, i);
        }
    }
    return 0;
}
