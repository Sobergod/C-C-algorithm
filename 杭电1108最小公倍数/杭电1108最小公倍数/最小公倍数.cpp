#include"stdio.h"
int main()
{
	int a,b,i,m;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(a>b){m=a;a=b;b=m;}
		for(i=a;i>1;i--)
		if(a%i==0&&b%i==0) break;
			printf("%d\n",a*b/i);
}}

