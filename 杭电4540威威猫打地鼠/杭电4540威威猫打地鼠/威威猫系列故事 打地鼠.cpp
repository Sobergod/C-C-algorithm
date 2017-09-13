#include"stdio.h"
#include"math.h"
#define MAX 99999999
int i,j,m,n,k,dp[50][50],a[50][50],ans;

int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	
	while(~scanf("%d%d",&n,&m))
	{
		                             
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
				dp[i][j]=MAX;
			}
		
					
			for(i=0;i<m;i++) 
				dp[0][i]=0;
			for(i=1;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						for(k=0;k<m;k++)
						{
							dp[i][j]=min(dp[i][j],(dp[i-1][k]+abs(a[i][j]-a[i-1][k])));
						}
					}
			}
					ans=MAX;
						for(j=0;j<m;j++)
						{
							ans=min(dp[n-1][j],ans);
						}
					printf("%d\n",ans);
	}
}