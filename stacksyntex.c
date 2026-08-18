#include<stdio.h>
int fun1(int a);
int main()
{
    int a=5;
    a=fun1(a);
    printf("%d\n", a);
}
int fun1(int a)
{
    int b=10;
    b=b+a;
    return b;
}