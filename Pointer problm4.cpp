//find max number
#include<stdio.h>
int findmax(int *a, int *b)
{
    if(*a<*b)

        return *b;

        else
            return *a;
}
 int main()
 {
     int x =6 , y=8;
    int ans= findmax(&x,&y);
     printf("%d",ans );
     return 0;
 }
