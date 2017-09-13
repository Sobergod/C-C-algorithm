#include"stdio.h"
#include"math.h"
int main()
{
	int a[100][100],n,m,i,j,max,k,t;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		max=0;k=t=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			{for(j=0;j<m;j++)
				if(abs(a[i][j])>abs(max))
				{
					k=i;
					t=j;
					max=a[i][j];
				}}
		
		printf("%d %d %d\n",k+1,t+1,max);
	}
}
