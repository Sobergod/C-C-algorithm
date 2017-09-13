#include"stdio.h"
#include"math.h"
int main()
{
	int a,b,n;
	double c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(a==0&&b==0) break;
	scanf("%lf",&c);
	n=pow(10,c);
	if(a%n==b%n)
		printf("-1\n");
	else
		printf("%d\n",a+b);
	}
}