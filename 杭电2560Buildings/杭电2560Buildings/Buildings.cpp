#include"stdio.h"
int main()
{
	int t,n,m,sum,i,j,k,a[101][101];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				{
					scanf("%d",&a[n][m]);
					if(a[n][m]!=0)
						sum++;
				}
			printf("%d\n",sum);
	}
}

			
