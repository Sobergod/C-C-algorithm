#include"stdio.h"
#include"string.h"
int dp[100010][11];
int max(int a,int b,int c)
{
	if(a<b)
		a=b;
	if(a<c)
	return c;
	else
	return a;
}
int main()
{
	int i,j,k,t,x,n,time;
	while(scanf("%d",&t)&&t!=0)
	{
		memset(dp,0,sizeof(dp));
		time=0;
		for(i=0;i<t;i++)
			{
				scanf("%d%d",&x,&n);
				dp[n][x]++;
				if(time<n)
					time=n;
			}
		for(i=time-1;i>=0;i--) 
			for(j=0;j<11;j++)
			{
				if(j==0)
				{ 
					dp[i][j]+=max(0,dp[i+1][j],dp[i+1][j+1]);
				}
				else if(j==10)
				{
					dp[i][j]+=max(0,dp[i+1][j-1],dp[i+1][j]);
				}
				else
				{
				dp[i][j]+=max(dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]);
				}
			}
			printf("%d\n",dp[0][5]);
	}
}



	