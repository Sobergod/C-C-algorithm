#include"stdio.h"
int main()
{
	int n,t,i,j,k,m,sum;
	j=1;
	while(scanf("%d",&n)&&n!=-1)
	{
		sum=0;
		for(i=0;i<n;i++)
			{
				scanf("%d",&m);
				sum+=m;
			}
		printf("Sum of #%d is %d\n",j,sum);
		j++;
	}
}