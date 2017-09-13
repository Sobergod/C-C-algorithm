#include"stdio.h"
int gcd(int a,int b)
{
	int t,s;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
	{
		s=a%b;
		a=b;
		b=s;
	}
	return a;
}
int main()
{
	int n,a,b,c,d,s,m,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		m=a*d+c*b;
		n=b*d;
		s=gcd(m,n);
		printf("%d %d\n",m/s,n/s);
	}
}
