#include"stdio.h"
int main()
{
	int a[100],i,j,n;
	while(scanf("%d",&i)&&i!=0)
	{
		j=0,n=1;
		while(i%2==0)
		{
			a[j]=i%2;
			i=i/2;
			j++;
		}
		while(j--)
		n=n*2;
		printf("%d\n",n);
	}
}