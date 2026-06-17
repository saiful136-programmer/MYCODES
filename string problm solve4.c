
//find out consonent
#include<stdio.h>
#include<string.h>
int main()
{
   char name[]="minhajul islam";
   int j;
    char a=0,e=0,i=0,o=0,u=0,A=0,E=0,I=0,O=0,U=0;
      for(j=0;name[j] != '\0';j++){
          if(name[j]=='a'||name[j]=='A'||name[j]=='e'||name[j]=='E'||name[j]=='i'||name[j]=='I'||name[j]=='o'||name[j]=='O'||name[j]=='u'||name[j]=='U')
          {
             continue;

          }

          printf("%c",name[j]);
   }
   return 0;
}

