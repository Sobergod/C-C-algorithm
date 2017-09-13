#include"stdio.h"
int main()
{
	double U,V,L,W;
		int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&U,&V,&W,&L);
		printf("%.3lf\n",L/(U+V)*W);
	}
}