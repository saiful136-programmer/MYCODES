//palindrome cheak
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="mahkdkham";
    int i,x;
    x=strlen(name);

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=name[x-1-i])
                {
                   printf("no");

                  return 0;
                }
    }

        printf("yes");


    return 0;
}

