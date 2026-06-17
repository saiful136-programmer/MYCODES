//GCD nirnoy( euclindean  algorithm)
#include<stdio.h>
int main()
{
   //int gcd(int a, int b);
    int a, b;
    printf("Enter a & b :");
    scanf("%d%d",&a,&b);
    while (b!=0)
    {
        int temp =b;
        b=a%b;
        a=temp;
    }
    printf("%d", a);
    return 0;
}
