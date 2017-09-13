#include"stdio.h"
#include"string.h"
#define max 125
int main()
{
	int n;
	int a[max],b[max];
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		a[0]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
				for(int k=0;k<=n;k+=i)
					b[j+k]+=a[j];
				for(int j=0;j<=n;j++)
				{
					a[j]=b[j];
					b[j]=0;
				}
		}
	printf("%d\n",a[n]);
	}
	
}

