#include"iostream"
using namespace std;
const int N=505;
bool map[N][N],flag[N];
int pre[N];
int n,m,num;
int find(int cur)
{
	int i;
	for(i=1;i<=m;i++)
	{
		if(map[cur][i]&&!flag[i])
		{
			flag[i]=true;
			if(pre[i]==-1||find(pre[i]))
			{
				pre[i]=cur;
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int i,girl,boy,sum;
	while(scanf("%d",&num),num)
	{
		scanf("%d%d",&n,&m);
		memset(map,false,sizeof(map));
		memset(pre,-1,sizeof(pre));
		for(i=0;i<num;i++)
		{
			scanf("%d%d",&girl,&boy);
			map[girl][boy]=true;
		}
		sum=0;
		for(i=1;i<=n;i++)
		{
			memset(flag,0,sizeof(flag));
			sum+=find(i);
		}
		printf("%d\n",sum);
	}
	return 0;
}
