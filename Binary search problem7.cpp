//x er theke choto ba soman koyta songkha ache seta ber korte hobe
#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,4,4,5,6,7};
    int i,x,count=0;
    int n = sizeof(array) / sizeof(array[0]);
    printf("Enter x:");
    scanf("%d",&x);
    for(i= 0;i<n;i++)
    {
        if(array[i]<=x)
        {
            count++;
        }
    }
    printf("%d is here %d times", x, count);
    return 0;
}
