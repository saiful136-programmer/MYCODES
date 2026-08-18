//find most freequnet element
#include<stdio.h>
int main()
{
    int i,n,max=0,ans;
    printf("enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("enter the %d elements", n);
    for(i=0;i<n;i++){
    scanf("%d", &array[i]);}
   // int array[n];
    int freq[1000]={0};
//printf("Enter the value of x:")
    for(i=0;i<n;i++)
    {
        freq[array[i]]++;
    }
    for(i=0;i<n;i++)
        {
            if(freq[array[i]]>max){
                max=freq[array[i]];
                ans=array[i];
                printf("%d is on %d times", ans, max);}
        }
        return 0;
    }

