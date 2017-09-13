#include"stdio.h"
int main()
{
	int n,m,t;
	while(scanf("%d",&t)!=EOF)
		while(t--)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",((1+n)*n*(1+m)*m)/4);
	}
}