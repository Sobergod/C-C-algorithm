#include"stdio.h"
int main()
{
	int n;
	
scanf("%d",&n);
while(n--)
{   double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	printf("%.1lf\n",a*(1+c/100*b/365)*(1+e/100));
	printf("%.1lf\n",a*(1+d/100*(b+365)/365));
}
return 0;
}