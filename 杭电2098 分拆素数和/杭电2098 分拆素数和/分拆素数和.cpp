#include"stdio.h"
int fun(int n)
{
	int i,j,k=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			k=1;
			break;
		}
	}
	if(k==1)
		return 0;
	else 
		return 1;
}
int main()
{
	int n,i,j,k,t;
	while(scanf("%d",&n)&&n!=0)
	{
		j=0;
		for(i=3;i<n/2;i+=2)
		{
			if(fun(i)&&fun(n-i))
				j++;
		}
		printf("%d\n",j);
	}
}
