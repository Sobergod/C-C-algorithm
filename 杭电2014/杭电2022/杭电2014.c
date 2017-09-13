#include<stdio.h>
int main()
{
	int i,k,j;
	double m,a[100],t;
	while(scanf("%d",&i)!=EOF)
	{ double sum=0;
		for(k=0;k<i;k++)
		scanf("%lf",&a[k]);
	for(k=1;k<i;k++)
		{for(j=0;j<i-1;j++)
		if(a[j]>a[j+1])
		{t=a[j];a[j]=a[j+1];a[j+1]=t;}}
		for(k=1;k<i-1;k++)
		sum+=a[k];
		m=sum/(i-2);
		printf("%.2lf\n",m);}
	return 0;
}
