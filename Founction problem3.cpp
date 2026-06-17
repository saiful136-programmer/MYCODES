//prime number find
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<2){printf("not prime");}
    if(n==2){printf("prime");}
    int prime=1;
    if(n>2)
    {
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0) {
                prime=0;
                printf("not prime number");
        break;}
    }
    if(prime==1)
       { printf("prime number");}

    }
    return 0;
}
