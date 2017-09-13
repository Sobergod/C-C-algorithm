#include"stdio.h"
#include"string.h"
#define max(a,b) a>b?a:b
int dp[10005];
int main()
{
	int N,V,T,c[10005],v[10005],i,j,k;
	scanf("%d",&T);
	while(T--)
{
	memset(dp,0,sizeof(dp));
		scanf("%d%d%d",&N,&V,&k);
		for(i=1;i<=N;i++)
		{
			scanf("%d",&c[i]);
		}
		 for(j=1;j<=N;j++)
		 {
			 scanf("%d",&v[j]);
		 }
		 for(i=1;i<=N;i++)
			 for(j=V;j>=v[i];j--)
			 {
				 dp[j]=max(dp[j],dp[j-v[i]]+c[i]);
			 }
			 printf("%d\n",dp[k]);
	}       
}
