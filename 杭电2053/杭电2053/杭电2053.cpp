#include"stdio.h"
int main()
{
	int i,j,k;
	while(scanf("%d",&i)!=EOF)
	{
		j=0;
		for(k=1;k<=i;k++)
		{if(i%k==0)
			j++;
		}
		printf("%d\n",j&1==1?1:0);
	}
}