#include"stdio.h"
int main()
{
	int n,i,j;
	__int64 a[100];
	
	while(scanf("%d",&i)!=EOF)
		{
			a[1]=1;
		a[2]=2;
		for(j=3;j<=i;j++)
			a[j]=a[j-1]+a[j-2];
		printf("%I64d\n",a[i]);
	}
	
	
}