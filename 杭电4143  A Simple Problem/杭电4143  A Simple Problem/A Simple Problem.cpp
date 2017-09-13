#include"stdio.h"
#include"math.h"
int main()
{
	int i,j,k,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(j=1,i=sqrt(1.0*n);i>=1;i--)
		{
			if(n%i==0&&(n/i-i)%2==0&&n/i!=1)
		j=0;printf("%d\n",(n/i-i)/2);
		}
		if(j)
			printf("-1\n");break;
	}
}
