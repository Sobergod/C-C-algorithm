#include"stdio.h"
int a[1000001];
int main()
{
	int i,j,k,n,m,t;
	while(scanf("%d",&n)!=EOF)
	{
		a[0]=7%3;
		a[1]=11%3;
		for(i=2;i<=n;i++)
			a[i]=(a[i-1]+a[i-2])%3;
		if(a[n]==0)
			printf("yes\n");
		else
		printf("no\n");
	}
}