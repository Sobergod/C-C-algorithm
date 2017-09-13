#include"iostream"
#include"cstring"
#include"cstdio"
using namespace std;
int const MAXN=100000+20;
struct Edge
{
	int go,next;
}edge[MAXN*2];
int tot;
int head[MAXN];
void addedge(int a,int b)
{
	edge[tot].go=b;
	edge[tot].next=head[a];
	head[a]=tot++;

}
int depth[MAXN];
int vis[MAXN];
void dfs(int root,int dep,int fa)
{
	depth[root]=dep;
	for(int i=head[root];i!=-1;i=edge[i].next)
	{
		int go=edge[i].go;
		if(go==fa) continue;
		dfs(go,dep+1,root);
	}
}
int lca(int root,int find,int fa)
{
	if(root==find) return root;
	for(int i=head[root];i!=-1;i=edge[i].next)
	{
		int go=edge[i].go;
		if(go==fa)continue;
		int temp=lca(go,find,root);
		if(temp!=-1)
			if(depth[root]<depth[temp])
				return root;
			else
				return temp;
	}
	return -1;

	}

int main()
{
	int T,root;
	scanf("%d",&T);
	while(T--)
{
	int n;
	scanf("%d",&n);
	memset(head,-1,sizeof(head));
	tot=0;
	for(int i=1;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(i==1)root=a;
		addedge(a,b);
		addedge(b,a);
	}
	dfs(root,1,-1);
		int u,v;
	scanf("%d%d",&u,&v);
	printf("%d\n",lca(u,v,-1));
}
return 0;
}