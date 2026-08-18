#include<stdio.h>
int main()
{
    int N;
    int seen[19]={0};
    int repeat=0;
    printf("Enter a number: ");
    scanf("%d",&N);
    while(N>0)
    {
        int rem=(N%10);
        if(seen[rem]==1)
        {
            repeat=1;
            break;
        }
        seen[rem]=1;
        N=N/10; 
    }
    if(repeat==1)
    {
        printf("the number has repeated digits");
    }
    else
    {
        printf("the number has no repeated digits");
        
    }
}