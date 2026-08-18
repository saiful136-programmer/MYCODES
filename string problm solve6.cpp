// reverse
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]= "abidindrdsjffjdskcsffflkfath";
   int i,z;
    z = strlen(name);
    printf("%d\n",strlen(name));
   for(i=z;name[i]!='0';i--)
    {
        printf("%c", name[i]);
    }
    return 0;
}
