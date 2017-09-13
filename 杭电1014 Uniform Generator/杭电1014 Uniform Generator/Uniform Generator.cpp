#include"stdio.h"
int gcd(int a,int b)
{
	if(b)
		return gcd(b,a%b);
	else
		return a;
}
int main()
{
	int s,m;
	while(scanf("%d%d",&s,&m)!=EOF)
		if(gcd(s,m)==1)
			printf("%10d%10d    Good Choice\n\n",s,m);
		else
			printf("%10d%10d    Bad Choice\n\n",s,m);
}