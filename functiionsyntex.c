#include <stdio.h>
int fun();

int main()
{
    int c = fun();
    printf("%d\n", c);
    return 0;
}
int fun()
{
    int a = 10;
    return a;
}