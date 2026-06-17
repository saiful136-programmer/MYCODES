//reverse array
#include<stdio.h>
int main()
{
    int array[]={2,1,6,4,7,9,8};
    int n=sizeof(array)/sizeof(array[0]);
    int *left=array, *right=array+n-1;
    int i;
        while(left<right){
            int temp;
            temp=*left ;
            *left=*right;
            *right=temp;
            left++;
            right--;
        }
        for(i=0;i<n;i++){
            printf("%d", array[i]);
    }
    return 0;
}
