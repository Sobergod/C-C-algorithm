#include <stdio.h>
int main ()
{
    int i,j,k;
    while(scanf("%d",&i)!=EOF)
        {
            int sum=0;
         switch(i%2)
            {
         case 0:
                 {
                     for(k=1;k<i/2;k++)
                    sum+=k;
                 printf("%d\n",sum*2);continue;
                 }
          case 1:
                 {
                     for(k=1;k<=(i-1)/2;k++)
                     sum+=k;
                  printf("%d\n",sum*2-(i-1)/2);continue;
                 }
                
             }
         }
        return 0;
 }