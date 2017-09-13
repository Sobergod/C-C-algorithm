#include"stdio.h"
int main()
{
	int a[10000],b[10000],n,i,j,k,t,sum1,sum2;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sum1=0;
		sum2=a[0];
		k=0;
		for(j=0;j<n;j++)
		{
			sum1+=a[j];
			if(sum1>sum2)
			{
				sum2=sum1;
				k=a[j];
			}
			if(sum1<0)
			{
				sum1=0;
				t+=1;
			}
			
		}
		printf("%d %d %d\n",sum2,a[t],k);
	}
}

