#include"stdio.h"
int main()
{
	int i,n,j,k;
	while(scanf("%d",&n)&&n!=0)
	{
		for(i=0;n!=1;n/=2,i++)
		{
			if(n%2==1)
				n=n*3+1;
		}
		printf("%d\n",i);
	}
}