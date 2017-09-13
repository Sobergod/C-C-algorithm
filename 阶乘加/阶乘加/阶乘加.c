#include<stdio.h>
int main()
{
	long double i,k=0,t=1;
	for(i=1;i<=16;i++)
	{
		t=t*i;
		if(i>7&&i<11) continue;
		
	}
	printf("%.Lf",t);
	return 0;
}