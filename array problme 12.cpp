//sorting of array
#include<stdio.h>
int main()
{
    int i,n,tamp,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter the %d elements", n);
    for(i=0;i<n;i++){
    scanf("%d", &array[i]);}
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++){
        if(array[j]<array[j+1])
        {

            tamp=array[j];
            array[j]=array[j+1];
            array[j+1]=tamp;}
            }
        }
        for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
        return 0;
    }



