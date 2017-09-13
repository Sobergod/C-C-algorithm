#include"stdio.h"
int main()
{
	double a[50],b;
		int i,j,k,t,n;
	a[1]=0;
	a[2]=1;
	for(i=3;i<21;i++)
	{
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	scanf("%d",&j);
	while(j--)
	{
	scanf("%d",&n);
		b=1;
		for(i=1;i<=n;i++)
			b*=i;	
		printf("%.2lf%%\n",a[n]*100.0/b);
	}
}
