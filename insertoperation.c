#include<stdio.h>
void insert(int a[], int *n, int key, int value)
{
    int i, j;
    for(i=0;i<*n;i++)
    {
        if(i==key)
        {
            for(j=*n-1;j>=i;j--)
            {
                a[j+1]=a[j];
            }
            a[i]=value;
            (*n)++;
            return;
        }
    }
}
void
display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    return;
}
int main()
{
    int a[10]={1,2,3,4,6,7};
    int n=6;
    insert(a, &n, 4, 5);
    display(a, n);
    return 0;
}
