#include"stdio.h"
int main()
{
	int a[1001],b,i,j,k,t;
	while(scanf("%d",&b)!=EOF)
	{
		t=0;
		while(b!=0)	
		{
			a[t]=b%2;
			b=b/2;
			t++;
		}
		while(t--)
			printf("%d",a[t]);
		printf("\n");
	}
}