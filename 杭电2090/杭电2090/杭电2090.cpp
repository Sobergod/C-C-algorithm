#include"stdio.h"
int main()
{
	double a,j,sum=0.0;
	char s[100];
	while(scanf("%s%lf%lf",&s,&a,&j)!=EOF)
		sum=(sum+j*a);
	printf("%.1lf\n",sum);
	return  0;
}