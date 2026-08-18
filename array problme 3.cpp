//minimum number find
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
    int min=array[0];
    for(i=0 ; i<n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
    }
         printf("max value is %d", min);

    return 0;
}

