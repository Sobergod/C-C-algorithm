#include"stdio.h"
int main()
{
	int i,j,k,t;
	while(scanf("%d",&t)!=EOF)
	{
		k=0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&j);
			k+=j;
		}
		printf("%d\n",k+1);
	}
}
