#include"stdio.h"
int main()
{
	int a[100],i,j,k,n;
	while(scanf("%d",&n),n)
	{
		j=0;
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		j=j+a[i]/100+a[i]%100/50+a[i]%100%50/10+a[i]%100%50%10/5+a[i]%100%50%10%5/2+a[i]%100%50%10%5%2;
		}
		printf("%d\n",j);
	}
}