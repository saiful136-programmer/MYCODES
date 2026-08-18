    //number find in arry
    #include<stdio.h>
    int main()
    {
        int i,n,j,found=0;
        printf("enter the value of n:");
        scanf("%d",&n);
        int array[n];
        printf("enter %d elements:", n);
        for(i=0;i<n;i++)
        {
        scanf("%d", &array[i]);
        }
        int x;
        printf("enter the value of x:");
        scanf("%d",&x);
        for(j=0;j<n;j++)
        {
            if(array[j]==x)
                found=1;
        }
        if(found==1){
        printf("yes");}
        else {printf("no");}
        return 0;
    }
