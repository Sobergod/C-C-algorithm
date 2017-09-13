#include"stdio.h"
#include"math.h"
int main()
{
	long long i,n,k;
	scanf("%I64d",&k);
	while(k--)
	{
		scanf("%I64d",&n);
		i=(sqrt(1.0+8.0*n)-1)/2;
			if((1+i)*i/2==n)
				i--;
			n=n-(1+i)*i/2;
			n%=9;
			if(n%9==0)
				printf("9\n");
			else
			printf("%I64d\n",n);
	}
	return 0;
}
