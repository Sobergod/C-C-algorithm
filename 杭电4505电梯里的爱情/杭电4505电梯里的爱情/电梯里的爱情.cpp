#include"cstdio"
#include"algorithm"
#include"iostream"
using namespace std;
int main()
{
	int a[105],i,j,k,t,n,m,b;
	
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
			a[i]=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		m=n;
		sort(a,a+n);
		k=a[0];
		for(i=1;i<n;i++)
		{   
			if(k==a[i])
				{
					m--;
				}
					k=a[i];
		}
		
		printf("%d\n",a[n-1]*10+n+m*5);
	}

}
		

	