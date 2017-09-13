#include"stdio.h"
int main()
{
	int i,j,k,n,t;
	while(scanf("%d",&n)!=EOF)
	{
		int a[1000]={0};
		k=0;
		if(n==0) break;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0,j=1;i<n&&j<n;i++,j++)
		{	if(a[i]<a[j])
				k+=(a[j]-a[i])*6;
			else
				k+=(a[i]-a[j])*4;
		}
		printf("%d\n",a[0]*6+k+n*5);
	}
}

				
		
