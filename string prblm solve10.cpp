//remove space
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="i love my country";
    int i;
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]!= ' ')
        printf("%c",name[i]);
    }
    return 0;
}

