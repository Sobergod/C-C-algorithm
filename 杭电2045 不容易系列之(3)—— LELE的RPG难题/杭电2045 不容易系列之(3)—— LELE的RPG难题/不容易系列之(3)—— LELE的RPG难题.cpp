#include"stdio.h"
int main()
{
	int i,j,k;
	
	while(scanf("%d",&i)!=EOF)
	{ 
		double a[100];
		a[1]=3;
		a[2]=6;
		a[3]=6;
	for(j=4;j<=i;j++)
		a[j]=2*a[j-2]+a[j-1];
	printf("%.lf\n",a[i]);
	}
}