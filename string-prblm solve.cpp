
/*#include<string.h>
#include<stdio.h>

int main()
{ int i;
    char name[] ="Saiful";

    for( i=6; name[i]=0 ; i--)
   // {
        printf("%c", name[i]);
  //  }

    return 0;
}*/
#include <stdio.h>

int main()
{
    char word[100];
    int i = 0;
    int a=0, e=0, i_v=0, o=0, u=0;

    printf("Enter a word: ");
    scanf("%s", word);

    while(word[i] != '\0')
    {
        if(word[i] == 'a' || word[i] == 'A') a++;
        else if(word[i] == 'e' || word[i] == 'E') e++;
        else if(word[i] == 'i' || word[i] == 'I') i_v++;
        else if(word[i] == 'o' || word[i] == 'O') o++;
        else if(word[i] == 'u' || word[i] == 'U') u++;

        i++;
    }

    printf("A/a = %d\n", a);
    printf("E/e = %d\n", e);
    printf("I/i = %d\n", i_v);
    printf("O/o = %d\n", o);
    printf("U/u = %d\n", u);

    return 0;
}
