#include"stdio.h"
int f(int n)
{
	if(n==0)
		return 3;
	else
		return (f(n-1)-1)*2;
}
int main()
{
	int a,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		printf("%d\n",f(a));
	}
}