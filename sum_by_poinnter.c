#include<stdio.h>
int main()
{
    int a[]={3,4,5,6,7,8,3,2,0};
    int sum =0 , *p;
    for(p=&a[0]; p<=&a[8];p++)
    {
        sum += *p;
    }
    printf("%d",*p);
    return 0;
}