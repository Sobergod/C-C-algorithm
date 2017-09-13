#include"iostream"
using namespace std;
int main()
{
	int t,n,a[21][21];
	int i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		k=1;
		i=1;
		j=n/2+1;
		a[i][j]=1;
		while(k<n*n)
		{
			if(i-1==0&&j!=n)
			{
				i=n;
				j++;
				a[i][j]=++k;
			}
			else if(j+1>n&&i!=1)
			{
				i--;
				j=1;
				a[i][j]=++k;
				printf("*%d  \n",i);

			}
			else if(a[i-1][j+1]!=0||(i==1&&j==n))
			{
				i++;
				a[i][j]=++k;
				printf("*%d\n",i);
			}
			else
			{
				i--;
				j++;
				a[i][j]=++k;

			}
			}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				printf("%4d",a[i][j]);
				if(j==n)
					printf("\n");
			}
	}

}