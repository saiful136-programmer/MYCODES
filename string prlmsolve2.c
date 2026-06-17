//find out vowel
#include<stdio.h>
#include<string.h>
int main()
{
   char name[]="minhajul islam";
   int j;
    char a=0,e=0,i=0,o=0,u=0;
    char A=0,E=0,I=0,O=0,U=0;
   for(j=0;name[j] != '\0';j++)
       if(name[j]=='a'||name[j]=='A'){printf("%c",name[j]);}
     else if(name[j]=='e'||name[j]=='E'){printf("%c",name[j]);}
     else if(name[j]=='i'||name[j]=='J'){printf("%c",name[j]);}
     else if(name[j]=='o'||name[j]=='O'){printf("%c",name[j]);}
     else if(name[j]=='u'||name[j]=='U'){printf("%c",name[j]);}


   return 0;
}
