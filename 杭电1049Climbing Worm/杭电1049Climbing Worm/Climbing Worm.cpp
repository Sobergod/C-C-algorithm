#include"stdio.h"
int main()
{
	int a[100],n,u,d,m,k;
	while(scanf("%d%d%d",&n,&u,&d),n,u,d)
	{
		m=0;
		while(1)
		{
			n-=u;
			m++;
			if(n>0)
			{
				m++;
				n+=d;
			}
			else
			{
				break;
			}
		}
		printf("%d\n",m);
	}
}




