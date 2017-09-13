#include"stdio.h"
int g[10000][10000],l[100],m[100];
int n;
int min(int x,int y)
{
	return x<y?x:y;
}
void floyed()
{
	int i,j,k;
	for(k=1;k<=11;k++)
		for(i=1;i<=11;i++)
			for(j=1;j<=11;j++)
			{
				g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
			}
}
int main()
{
	int T,S,D;
	int a,b,time,s=1000000,l[100],m[100];
	scanf("%d%d%d",&n,&S,&D);
	{
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			g[i][j]=1000000;
	for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&time);
			g[a][b]=g[b][a]=time;
		}
	for(int j=0;j<S;j++)
		scanf("%d",&l[j]);
	for(int k=0;k<D;k++)
		scanf("%d",&m[k]);
	
	floyed();
	
	for(int i=0;i<S;i++)
		for(int j=0;j<D;j++)
		{
			if(g[l[i]][m[j]]<=s)
				s=g[l[i]][m[j]];
		}
		printf("%d\n",g[3][3]);
	}
}
			