#include"stdio.h"
int main()
{
	
	int i,j;
	while(scanf("%d",&i)!=EOF)
	{
		__int64 a[100];
		a[1]=3;
		a[2]=8;
		for(j=3;j<=i;j++)
			a[j]=2*(a[j-1]+a[j-2]);
		printf("%I64d\n",a[i]);
	}
}