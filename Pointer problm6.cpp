//calculator creat
#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
int calculate(int a, int b, int (*op)(int , int))
{
    return op(a, b);
}
int main()
{
    int x,y;
    printf("enter x & y:");
    scanf("%d%d",&x,&y);
    int ans;
    ans= calculate (x,y,div);
    printf("%d", ans);
    return  0;
}
