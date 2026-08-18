//find x
#include<stdio.h>
int main()
{
    int x,i,n;
    int found=0;
    int array[15]={2,3,4,5,6,7,8};
    printf("Enter the value of x:");
    scanf("%d", &x);
    for(i=0;i<15 ;i++)
    {
        if(array[i]==x)
            {   found=1;
                printf("yes");
            break;}
    }
    if(found==0)
    {printf("no");}


    return 0;
}
