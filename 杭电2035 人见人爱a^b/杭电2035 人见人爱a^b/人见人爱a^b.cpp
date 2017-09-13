#include"stdio.h"
int main()
{
	int a,b,i;
	while(scanf("%d%d",&a,&b),a!=0||b!=0)
	{
		int t=1;
		for(i=0;i<b;i++)
		{
			t=a*t%1000;
		}
		printf("%d\n",t);
	}
}