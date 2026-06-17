//sum all row element
#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    printf("enter n&m:");
    scanf("%d%d",&n, &m);
    int a[n][m];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of  row:%d\n", sum);

        sum=0;
    }
        return 0;
}

