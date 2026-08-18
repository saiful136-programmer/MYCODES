//grade system
#include<stdio.h>
int main()
{
    int num ;
    printf("enter mark:");
    scanf("%d", &num );
    int mark = num/10;
    switch(mark)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
    case 5:
    case 4:
        printf("B");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("fail");
        break;
    }
    return 0;
}
