#include"stdio.h"
int main()
{
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c)&&a!=0,b!=0,c!=0)
	{
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("right\n");
		else
			printf("wrong\n");
	}
}
