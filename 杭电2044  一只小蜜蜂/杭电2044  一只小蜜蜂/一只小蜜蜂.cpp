#include"stdio.h"
int main()
{
	double a[100];
	int i,j,t,n;
	scanf("%d",&n);
	while(n--)
	{
		int k;
		a[1]=1;
		a[2]=2;
		scanf("%d%d",&i,&j);
		for(k=3;k<=j-i;k++)
			a[k]=a[k-1]+a[k-2];
			printf("%.lf\n",a[j-i]);
	}
}
