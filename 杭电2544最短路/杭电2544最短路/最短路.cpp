#include"stdio.h"
int a[1000][1000];
int n;
int m(int x,int y)
{
	return x<y?x:y;
}
void floyd()
{
	
	int i,j,k;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				a[i][j]=m(a[i][k]+a[k][j],a[i][j]);
			}
}
int main()
{
	int m,o,b,c,i,j;
	while(scanf("%d%d",&n,&m)&&n!=0&&m!=0)
	{for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				a[i][j]=1000000000;
	while(m--)
	{
		
		scanf("%d%d%d",&o,&b,&c);
			a[o][b]=c;
			a[b][o]=c;
	}
	floyd();
	printf("%d\n",a[1][n]);
	}
	return 0;
}
