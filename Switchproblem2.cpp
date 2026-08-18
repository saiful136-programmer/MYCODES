// vowel cheak
#include<stdio.h>
#include<string.h>
int main()
{
    char choice;
    printf("enter tour choice:");
    scanf("%c", &choice);
    switch(choice)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                    printf("vowel");
                    break;
        default :
                    printf("consonent");
                    break;
    }
    return 0;
}
