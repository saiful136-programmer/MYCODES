//LCM (Euclindean algorithm
#include<stdio.h>
int main()
      {
          int  a, LCM, b;
          printf("enter a & b :");
          scanf("%d%d",&a,&b);
          int x=a, y=b;
          while(b!=0)
          {
             int temp = b;
             b=a%b;
             a=temp;
          }
          LCM = (x/a)*y;
          printf("LCM is %d", LCM);
          return 0;
      }
