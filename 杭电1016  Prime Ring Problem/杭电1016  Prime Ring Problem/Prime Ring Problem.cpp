#include"stdio.h"
#include"string.h"
int prime[40]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
int n,visit[21],a[21];
void dfs(int num)
{
	int i;
	if(num==n&&p rime[a[num-1]+a[0]])
	{
		for(i=0;i<num-1;i++)
			printf("%d ",a[i]);
		printf("%d\n",a[num-1]);
	}
	else
	{
	for(i=2;i<=n;i++)
	{
		if(visit[i]==0)
		{
			if(prime[i+a[num-1]])
			{
				visit[i]=-1;
				a[num++]=i;
				dfs(num);
				visit[i]=0;
				num--;
			}
		}
	}
	}
}
int main()
{
	int num=0;
	while(scanf("%d",&n)!=EOF)
	{
		num++;
		printf("Case %d:\n",num);
		memset(visit,0,sizeof(visit));
		a[0]=1;
		dfs(1);
		printf("\n");
	}
	return 0;
}
