//maximum number find
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    int max=array[0];
    for(i=0 ; i<n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
         printf("max value is %d", max);

    return 0;
}
