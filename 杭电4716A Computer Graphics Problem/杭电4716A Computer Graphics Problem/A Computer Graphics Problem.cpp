#include"stdio.h"
int main()
{
	int i,j,k,t,m;
	scanf("%d",&t);
	m=1;
	while(t--)
	{
		
		scanf("%d",&k);
		printf("Case #%d:\n",m);
		printf("*------------*\n");
		for(i=2;i<12-k/10;i++)
			{
				 printf("|............|\n");
		}
		for(j=12-k/10+1;j<=12;j++)
			{
				printf("|------------|\n");
		}
		printf("*------------*\n");
		m++;
			   
	}
}