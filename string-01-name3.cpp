#include<stdio.h>

int main()
{
    char name[]="saiful islam";

    fgets(name, sizeof(name), stdin);

    printf("%s", name);

    return 0;

}
