#include"cstdio"
#include"iostream"
#include"cstring"
#include"algorithm"
using namespace std;
int a[1000][1000],b[1000][1000],c[1000][1000];
int main()
{
	int n,i,j,k;
	while(~scanf("%d",&n))
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				a[i][j]%=3;
				c[i][j]=0;
			}
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
				b[i][j]%=3;
			}
		for(k=0;k<n;k++)
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					
						c[i][j]+=a[i][k]*b[k][j];
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						if(j==n-1)
							printf("%d\n",c[i][j]%3);
						else
							printf("%d ",c[i][j]%3);
				}
	}
}
