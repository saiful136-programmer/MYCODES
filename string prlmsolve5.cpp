//find out digits
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char name[]="mri34d4u2l";
    int i;
    for( i=0; name[i] != '\0'; i++)
    {
        if( name[i] >= '0' && name[i] <= '9')
        {
            printf("%c",name[i]);
        }
    }
    return 0;
}
