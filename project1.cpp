//tic_tac_toe
#include<stdio.h>
int main()
{
    char player;
    char a1='_', a2='_', a3='_';
    char b1='_', b2= '_', b3='_';
    char c1='_', c2='_', c3='_';
    int turn=1,p;
    while(turn<=9)
    {
        printf("%c %c %c\n", a1,a2,a3);
        printf("%c %c %c\n", b1,b2,b3);
        printf("%c %c %c\n", c1,c2,c3);
        if(turn%2==1)
        {
            player='x';
        }
        else
        {
            player='o';
        }
        printf("enter your choice p:\n");
        scanf("%d",&p);
            if(p==1)
            {
                if(a1=='_')
                a1=player;
            }
            else if (p==2)
            {
                if(a2=='_')
                a2=player;
            }
            else if (p==3)
            {
                if(a3=='_')
                a3=player;
            }
            else if (p==4)
            {
                if(b1=='_')
                b1=player;
            }
            else if (p==5)
            {
                if(b2=='_')
                b2=player;
            }
            else if (p==6)
            {
                if(b3=='_')
                b3=player;
            }
            else if (p==7)
            {
                if(c1=='_')
                c1=player;
            }
            else if (p==8)
            {
                if(c2=='_')
                c2=player;
            }
            else if (p==9)
            {
                if(c3=='_')
                c3=player;
            }
            else
            {
                printf("Invalid. Try again.\n");
                continue;
            }
                if((a1==player&&a2==player&&a3==player)||(b1==player&&b2==player&&b3==player)||(c1==player&&c2==player&&c3==player))
                {
                    printf("you win");
                    break;
                }
                else if((a1==player&&b1==player&&c1==player)||(a2==player&&b2==player&&c2==player)||(a3==player&&b3==player&&c3==player))
                {
                    printf("you win");
                    break;
                }
                else if ((a1==player&&b2==player&&c3==player)||(a3==player&&b2==player&&c1==player))
                {
                    printf("you win");
                    break;
                }
                turn ++ ;
            }
            if(turn > 9)
            {
                printf("\nMatch Draw!\n");
            }

            return 0;
        }
