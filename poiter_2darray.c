#include<stdio.h>
int main()
{
int array[56]={4,4,5,6,};
for(i=&array[0][0]; i<=&array[row-1][column -1];i++)
{
    printf("%d", *array);
}
return 0;
}