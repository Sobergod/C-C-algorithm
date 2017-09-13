#include"stdio.h"
int main()
{
	__int64 a[100];
	int i,n;
	while(scanf("%d",&i)!=EOF)
	{
		if(i==-1) break;
		a[0]=0;a[1]=1;a[2]=1;
	for(n=3;n<=i;n++)
		a[n]=a[n-1]+a[n-2];
	printf("%I64d\n",a[i]);
	}
	return 0;
}
