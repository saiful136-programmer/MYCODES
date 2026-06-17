//pointer diye sum ber kora
#include<stdio.h>
int main()
{
    int array[]={2,4,5,7,8,9,11};
    int n = sizeof(array)/sizeof(array[0]);
    int L=0,R=n-1;
    int i,x,y;
    int found=0;
    printf("Enter x:");
    scanf("%d",&x);
    while(L<R)
    {
        y = array[L]+array[R];
       if(y==x){
        found=1;
        printf("L=%d & R=%d",L,R);
        L++;
        R--;
        }
        if(y<x)
        {
            L++;
        }
        else{
            R--;
        }
    }
    if(found==0)
    {
        printf("invlid");
    }
    return 0;
}
