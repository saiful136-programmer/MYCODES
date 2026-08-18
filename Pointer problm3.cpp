//sum ussing array
#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
   // int *a=array[0];
    int n=sizeof(array)/sizeof(array[0]);
    int sum = 0, i;
    int *arr=&array[0];
    for(i=0;i<n;i++)
    {
        sum=sum + *(arr+i);
    }
    printf("the sum is %d", sum);
    return 0;
}
