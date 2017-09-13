#include"stdio.h"
int main()
{
	__int64 s,i,t;
	scanf("%I64d",&t);
	while(t--)
	{
		scanf("%I64d",&i);
		printf("%I64d\n",i*i%10000);
	}
}