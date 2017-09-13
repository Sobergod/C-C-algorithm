#include"stdio.h"
int main()
{
	double sum,a;
	int i;
	sum=0;
	for(i=0;i<12;i++)
	{
		scanf("%lf",&a);
		sum+=a;
	}
	printf("$%.2lf\n",sum/12);
}