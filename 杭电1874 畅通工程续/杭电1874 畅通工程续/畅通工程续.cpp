#include"stdio.h"
int s[300][300];
int n;
int min(int x,int y)
{
	return x<y?x:y;
}
int floyd(int q,int t )
{
	int i,j,k;
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			{
				if(s[i][k]!=100000000)
			for(j=0;j<n;j++)
			{
				s[i][j]=min(s[i][j],s[i][k]+s[k][j]);
			}
		}
			return s[q][t];
}
int main()
{
	int a,b,c,M,i,j,q,t;
	while(scanf("%d%d",&n,&M)!=EOF)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(i==j)
					s[i][j]=0;
				else
				s[i][j]=1000000000;
			}
		while(M--)
		{
			scanf("%d%d%d",&a,&b,&c);
			if(c<s[a][b])
			s[a][b]=s[b][a]=c;
		}

		scanf("%d%d",&q,&t);
		floyd(q,t);
		printf("%d\n",s[q][t]<1000000000?floyd(q,t):-1);
	}
}