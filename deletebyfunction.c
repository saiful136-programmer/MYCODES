#include<stdio.h>
void deletevalue(int a[], int *n, int key)
{
    int i, j;
    for(i=0;i<*n;i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<*n-1;j++)
            {
                a[j]=a[j+1];

            }
            (*n)--;
            return;
        }
    }
}
void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int a[]={2,3,4,5,7,8};
    int n=6;
    deletevalue(a, &n, 5);
    display(a, n);
    return 0;

}
