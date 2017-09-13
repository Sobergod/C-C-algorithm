#include"stdio.h"
int main()
{
	int a[50],i,j,n;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d",&j);
		a[1]=1;a[2]=1;
		for(n=3;n<=j;n++)
			a[n]=a[n-1]+a[n-2];
		printf("%d\n",a[j]);
	}
	return 0;
}
