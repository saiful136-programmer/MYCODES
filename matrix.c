#include<stdio.h>
#define max 100
int main()
{
    int arows , acollumns, brows, bcollumns;
    int a[max][max], b[max][max], result[max][max];
    int i, j, k;
    int sum=0;
    printf("enter the rows & collumns of a mtrix:");
    scanf("%d%d", &arows, &acollumns);
    printf("enter the a matrix");
    for(i=0; i<arows; i++)
    {
        for(j=0;j<acollumns;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the rows & collumns of b matrix :");
    scanf("%d%d", &brows, &bcollumns);
    printf("enter the b matrix");
    for(i=0; i<brows; i++)
    {
        for(j=0;j<bcollumns;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(acollumns!=brows)
    {
        printf("we cann't multiply this a & b matrix");
    }
    else{
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcollumns;j++)
        {
            for(k=0;k<brows;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    }
    printf("the result is:");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcollumns;j++)
        {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
