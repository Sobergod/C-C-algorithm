#include"stdio.h"
int main()
{
	int n;
	double sum,m,i,j;
	while(scanf("%d",&n)&&n!=0)
	{
		m=2;
		sum=0;
		for(i=n;i>=2;i--)
			{
				sum+=(1/i)*m;
				m+=2;
			}
		printf("%.2lf\n",sum+n);
	}
}