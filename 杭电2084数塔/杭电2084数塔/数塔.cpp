#include"stdio.h"
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
int main()
{
	int dp[100][100],n,t,i,j,k,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
			scanf("%d",&dp[i][j]);
		for(i=n-2;i>=0;i--)
			for(j=0;j<=i;j++)
			{
				x=dp[i+1][j];
				y=dp[i+1][j+1];
				dp[i][j]+=max(x,y);
			}
			printf("%d\n",dp[0][0]);
	}
}