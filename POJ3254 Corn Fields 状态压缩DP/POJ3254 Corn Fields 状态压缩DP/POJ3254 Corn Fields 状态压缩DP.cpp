#include<stdio.h>
#include<string.h>
#define mod 100000000
int main()
{
	int dp[15][400],map[1<<13],s[1<<13],i,j,k,a,mark,m,n,sum;
	while(~scanf("%d%d",&m,&n))
	{
		memset(map,0,sizeof(map));
		memset(dp,0,sizeof(dp));
		memset(s,0,sizeof(s));
		sum=0;
		mark=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a);
				map[i]+=(a<<j);//报地图限制化成十进制
			}
		}
		for(i=0;i<1<<n;i++)
		{
			if((i&(i>>1))==0)
			{
				s[mark]=i;
				mark++;//找出所有情况
			}
		}
		for(i=0;i<mark;i++)
		{
			if((s[i]&map[0])==s[i])dp[0][i]++;//判断第一行符不符合地图限制条件，符合条件加1
		}
		for(i=1;i<m;i++)
		{
			for(j=0;j<mark;j++)
			{
				if((s[j]&map[i])!=s[j])continue;//第二行符不符合地图限制
				for(k=0;k<mark;k++)
				{
					if((s[k]&map[i-1])!=s[k])continue;
					if(!(s[j]&s[k]))//每一列比较符不符合条件
					dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;
				}
			}
		}
		for(i=0;i<mark;i++)
		{
			sum=(sum+dp[m-1][i])%mod;
		}
		
		printf("%d\n",sum);
	}
	return 0;
} 
