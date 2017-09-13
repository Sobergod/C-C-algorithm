#include"stdio.h"
#include"math.h"
int main()
{
	double s,u,v,i,j,k,n,m;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf",&s,&u);
		i=atan(1/s)-atan(1/u);
		v=1/tan(i);
		m=v*u-s*u-s*v;
		printf("%.lf\n",m);
	}
}
