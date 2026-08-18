#include<stdio.h>
void minmax(int num[], int len, int *max, int *min)
{
     *max = *min = num[0];
    for(int i=0;i<len; i++)
    {
        if(num[i]>*max)
        {
            *max=num[i];
        }
        if(num[i]<*min)
        {
            *min=num[i];
        }
    }
}
int main()
{
    int num[]={32,56,78,90,87,5,7};
    int len = sizeof(num)/ sizeof(num[0]);
    int min, max;
    minmax(num, len, &max, &min);
    printf("the maximum number is : %d\n", max);
    printf("the minimum number is : %d", min);
    return 0;
}