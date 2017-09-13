#include"stdio.h"
#include"string.h"
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int n,t,dp[10002],a[3]={150,200,350},j,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(dp,0,sizeof(dp));
		for(i=0;i<3;i++)
		for(j=a[i];j<=n;j++)
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		printf("%d\n",n-dp[n]);
	}
}