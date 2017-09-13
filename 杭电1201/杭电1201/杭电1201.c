#include "stdio.h"
int main()
{int n,i,y,m,d,sum,x; 
	scanf("%d",&n);
	while(n--)
	{   sum=0;
		scanf("%d-%d-%d",&y,&m,&d);
		if(m==2&&d==29)
		{
			printf("-1\n");
		    continue;
		}
            if((y%4==0&&y%100!=0||y%400==0)&&m<3)
             sum++;
             x=y+18;
            if((x%4==0&&x%100!=0||x%400==0)&&m>=3)
            sum++;
             for(i=y+1;i<y+18;i++)
              if(i%4==0&&i%100!=0||i%400==0)
                   sum++;
                   printf("%d\n",365*18+sum);
		}
    return 0;
}