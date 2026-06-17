//songkha thakle yes noile no
#include<stdio.h>
int main()
{
    int array[15]={1,2,3,4,5,6};
    int i,x,j;
    for(i=0;i<10;i++)
    {
        printf("enter the value of x:");
        scanf("%d",&x);
        int found=0;
        for(j=0;j<10;j++){
        if(array[j]==x)
        {
            found=1;
            break;}
    }
    if(found==1){
        printf("yes\n");
    }
        else{printf("no\n");}}
    return 0;
}
