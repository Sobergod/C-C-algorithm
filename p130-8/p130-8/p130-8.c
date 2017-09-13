#include<stdio.h>
int main()
{
	int a=1,b=0;
	for( ; ; )
	{
		a++;
		if(b>10)break;
		b=2*a;
		if(a%2)continue;
		printf("a=%d\n",a);
	}
	return 0;
}