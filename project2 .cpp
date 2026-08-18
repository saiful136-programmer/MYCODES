//tic.tac.toe
#include<stdio.h>
int main()
{
    int n,m,i,j,p,q;
    printf("enter n&m:");
    scanf("%d%d",&n,&m);
    char grid[n][m];
    // Step 1: initialize grid with '_'
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            grid[i][j] = '_';
        }
    }
    int current_value=0;
    printf("Games start now:");
    int game_not_over=1;
    while(game_not_over==1)
         {
           if(current_value==0)
           {
               printf("Plyer1's turn\n");
               printf("enter p&q:");
               scanf("%d%d",&p,&q);
               if(p>=n || q>=m)
               {
               if(grid[p][q]=='_')
               {
                    grid[p][q]='x';
                    current_value=1-current_value;
               }
               }
               else
                {
                    printf("enter again p&q:");
                    scanf("%d%d",&p,&q);
                }
           }
           else
           {
               printf("player2's turn:\n");
               printf("enter p&q:");
               scanf("%d%d",&p,&q);
               if(p>=n || q>=m)
                {
                if(grid[p][q]=='_')
                {
                    grid[p][q]='o';
                    current_value=1-current_value;
                }
                }
                else
                {
                    printf("enter again p&q:");
                    scanf("%d%d",&p,&q);
                }
        }
    }
return 0;
}
