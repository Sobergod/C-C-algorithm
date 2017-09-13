#include<stdio.h>
int main()
{
	int a[41];
	int n,t;
	while(scanf("%d",&t)!=EOF)
	{   while(t--)
		{scanf("%d",&n);
		a[0]=1;
	      a[1]=1;
		for(int i=2;i<=n;i++)
			a[i]=a[i-1]+a[i-2];
		printf("%d\n",a[n]);}
}
	return 0;
	}