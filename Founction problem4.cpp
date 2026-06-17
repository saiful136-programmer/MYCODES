//prime number find process 2
#include<stdio.h>
#include<math.h>
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
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) {
                prime = 0;
                printf("not prime number");
        break;}
    }
    }
    if(prime==1)
    {
        printf("prime number");
    }
    return 0;
}

