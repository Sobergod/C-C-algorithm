#include"stdio.h"
int main()
{
	int m,n,b;
	scanf("%d",&m);
	while(m--)
	{
		b=0;
		scanf("%d",&n);
		while(n>=1)
		{
		if(n%2==1)
		{
			b++;
			n=(n-1)/2;
		}
		else
			n=n/2;
		}printf("%d\n",b);
	}
}