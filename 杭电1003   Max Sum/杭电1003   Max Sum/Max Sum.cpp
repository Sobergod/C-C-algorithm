#include"stdio.h"
int main()
{
	int a[100001],i,j,k,t,n,l1,l2,sum1,sum2;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&t);
		for(i=0;i<t;i++)
			scanf("%d",&a[i]);
		sum2=a[0];
		sum1=0;
		k=0;l1=0,l2=0;
		for(i=0;i<t;i++)
		{
			sum1+=a[i];
			if(sum1>sum2)
			{
				sum2=sum1;
				k=i;
				l1=l2;
			}
				if(sum1<0)
				{
					sum1=0;
					l2=i+1;
				}
		
		}
		printf("Case %d:\n",j+1);
		printf("%d %d %d\n",sum2,l1+1,k+1);
		if(j<n-1)
			printf("\n");
	}
}

