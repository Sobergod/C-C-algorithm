#include<stdio.h>
int main()
{
	int i,j,n,k,t;
	printf("请输入一个奇数：");
		while(~scanf("%d",&n))
		{
		for(i=1;i<=n;i++)
		{
			if(i<(n+1)/2)
			{
				for(j=1;j<=(n+1)/2-i;j++)
				printf(" ");
			for(j=1;j<=2*i-1;j++)
				printf("\3");
			}
			else
			{
				for(j=1;j<=i-(n+1)/2;j++)
					printf(" ");
				for(j=1;j<=2*n+1-2*i;j++)
					printf("\3");
			}

			
		 printf("\n");
		}
		}
		return 0;
}
