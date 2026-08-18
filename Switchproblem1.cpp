//calculator
#include<stdio.h>
int a, b;
void add(int a, int b)
{
    printf("%d\n", a+b);
}
void sub ( int a, int b)
{
    printf("%d\n", a-b);
}
void mul ( int a, int b)
{
    printf("%d\n", a*b);
}
void divide ( int a, int b)
{
    printf("%d\n", a/b);
}
int main ()
{
    char n;
    printf("enter a &b ");
    scanf("%d%d", &a, &b);
    printf("enter sing, n:");
    scanf(" %c", &n);
    switch(n){
    case '+' : add(a, b);
            break;
    case '-' : sub(a, b);
            break;
    case '*' : mul(a, b);
            break;
    case '/' : divide(a, b);
            break;
    default : printf("wrong");
    break;
    }
    return 0;
}
