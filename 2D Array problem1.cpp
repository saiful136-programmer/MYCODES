//sum all elements
#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter n &m:");
    scanf("%d%d",&n, &m);
    int a[n][m];
    int sum;
     for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    scanf("%d", &a[i][j]);
                }
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    sum=sum+a[i][j];
                }
        }
        printf("%d", sum);
        return 0;
}
