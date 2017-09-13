#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
#define N_node 550
#define N_edge 3000
#define INF 100000000
typedef struct
{
	int from,to,next,cost;
}STAR;
typedef struct
{
	int x,t;
}DEP;
STAR E[N_edge];
DEP xin,tou;
int deep[N_node];
int list[N_node],listt[N_node],tot;
void add(int a,int b,int c)
{
	E[++tot].from=a;
	E[tot].to = b;
	E[tot].cost=c;
	E[tot].next=list[a];
	list[a]=tot;

	E[++tot].from=b;
	E[tot].to=a;
	E[tot].cost=0;
	E[tot].next=list[b];
	list[b]=tot;

}
int minn(int x,int y)
{
	return x<y?x:y;
}
bool bfs_deep(int s,int t,int n)
{
	xin.x=s;
	xin.t=0;
	queue<DEP>q;
	q.push(xin);
	memset(deep,255,sizeof(deep));
	deep[s]=0;
	while(!q.empty())
	{
		tou=q.front();
		q.pop();
		for(int k=list[tou.x];k;k=E[k].next)
		{
			xin.x=E[k].to;
			xin.t=tou.t+1;
			if(deep[xin.x]!=-1||!E[k].cost)
				continue;
			deep[xin.x]=xin.t;
			q.push(xin);
		}
	}
	for(int i=0;i<=n;i++)
		listt[i]=list[i];
	return deep[t]!=-1;
}
int DFS(int s,int t,int flow)
{
	if(s==t)return flow;
	int nowflow=0;
	for(int k=listt[s];k;k=E[k].next)
	{
		listt[s]=k;
		int c=E[k].cost;
		int to=E[k].to;
		if(!c||deep[to]!=deep[s]+1)
			continue;
		int tmp=DFS(to,t,minn(c,flow-nowflow));
		nowflow+=tmp;
		E[k].cost-=tmp;
		E[k^1].cost+=tmp;
		if(nowflow==flow)
			break;
	}
	if(!nowflow)deep[s]=0;
	return nowflow;
}
int DINIC(int s,int t,int n)
{
	int ans=0;
	while(bfs_deep(s,t,n))
	{
		ans+=DFS(s,t,INF);
	}
	return ans;
}
int main()
{
	int n,m,i,j;
	int a,b,c;
	while(~scanf("%d%d",&n,&m))
	{
		memset(list,0,sizeof(list));
		tot=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			add(a,b,c);
		}
		printf("%d\n",DINIC(1,m,m));
	}
		return 0;
}