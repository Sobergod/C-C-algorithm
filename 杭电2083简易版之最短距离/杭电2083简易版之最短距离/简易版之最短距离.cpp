#include"cstdio"
#include"cmath"
#include <algorithm>
using namespace std;
int main()
{
	int a[10000],b,c,i,j,k,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		c=0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+k);
		b=k/2;
		for(j=0;j<k;j++)
		{
			c+=abs(a[j]-a[b]);
		}
	printf("%d\n",c);
	}
	
}
