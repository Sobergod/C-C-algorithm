#include"stdio.h"
int main()
{
	int n,a[1005],i,j,sum;
	while(~scanf("%d",&n))
	{
		sum=0;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(a[j]<a[i])
					sum++;
		printf("%d\n",sum);
	}
}