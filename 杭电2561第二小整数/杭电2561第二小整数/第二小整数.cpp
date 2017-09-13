#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
	int a[100],i,n,j,k,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+t);
	
		printf("%d\n",a[1]);
	}
}

