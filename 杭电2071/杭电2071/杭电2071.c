#include<stdio.h>
int main()
{
	double a[1000];
	int i,j,k,t;
	while(scanf("%d",&i)!=EOF)
	{
		for(j=0;j<i;j++)
			scanf("%lf",a[j]);
		k=0;
		for(t=k+1;k<i;k++)
			if(a[k]<a[t]) k=t;
		printf("%lf",a[k]);
	}return 0;
}