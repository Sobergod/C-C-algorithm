#include"stdio.h"
int main()
{
	int i,j,k,t,n,m,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		m=0;
		for(i=0;i<=x;i++)
		{
			m+=i*i*i;
			if(m>=x)
			{
				printf("%d\n",i);
			break;
			}
		}
	}
}
