#include<stdio.h>
int main()
{
    int row, column;
    printf("enter the value of row & column:");
    scanf("%d%d", &row, &column);
    int *p;
int array[56][56]={4,4,5,6};
for( p = &array[0][0]; p <= &array[row-1][column -1];p++)
{
    printf("%d", *p);
    break;
}
return 0;
}