#include"stdio.h"
#include"math.h"
int main()
{
	double sum;int n,i,j;
	scanf("%d",&n);
	while(n--)
	{
		sum=0;
		scanf("%d",&i);
		for(j=1;j<=i;j++)
		sum+=log10((double)j);
		printf("%d\n",(int)sum+1);
	}
}

