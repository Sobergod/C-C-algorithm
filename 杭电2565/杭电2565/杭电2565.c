#include"stdio.h"
int main()
{
	int i,j,t,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&t);
		for(i=1;i<=t;i++)
		{   if(i<t/2+1)
			{
			for(j=0;j<i-1;j++)
				printf(" ");
			printf("X");
			for(j=0;j<t-2*i;j++)
				printf(" ");
			printf("X");
			printf("\n");
			}
		else if(i==t/2+1)
		{
			for(j=0;j<i-1;j++)
				printf(" ");
			printf("X");
			printf("\n");
		}
			else
			{
				for(j=0;j<t-i;j++)
					printf(" ");
				printf("X");
				for(j=0;j<2*i-2-t;j++)
					printf(" ");
				printf("X");
				printf("\n");
			}
		}printf("\n");
	}
}		