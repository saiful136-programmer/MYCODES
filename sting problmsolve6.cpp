//upercase  to lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]= "sAiFuL";
    int i;
    for(i=0; name[i]!='\0';i++)
    {
        if (name[i]  >= 'A' && name[i]<= 'Z')
        {
            name[i]=name[i]+32;
            printf("%c",name[i]);
        }
        else{printf("%c",name[i]);}
    }
    return 0;
}
