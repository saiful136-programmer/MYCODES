//count word
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="mahibalhasan";
    int i, count = 0;
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]== 'a')
        count=count+1;
    }
    printf("%d",count);
    return 0;
}
