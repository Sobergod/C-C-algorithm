#include"stdio.h"
int main()
{
	int i,j,k,t,m;
	while(scanf("%d%d",&i,&j)!=EOF)
	{ t=1;
		for(k=1;k<=j+2;k++)
			{if(k==1||k==j+2)
				{printf("+");
					for(t=0;t<i;t++)
						printf("-");
				printf("+");
				printf("\n");}
			else
			{
				printf("|");
				for(t=0;t<i;t++)
				printf(" ");
				printf("|");
				printf("\n");
			}
		}
	printf("\n");
	}
		
}


			