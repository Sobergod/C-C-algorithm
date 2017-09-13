#include"iostream"
using namespace std;
int a[500000];
int main()
{
	int i,j,k,t;
	memset(a,0,sizeof(a));
	while(scanf("%d",&t)!=EOF)
	{
		j=0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&k);
			a[k]++;
			if(a[k]>=(t+1)/2)
				j=k;
		}
		printf("%d\n",j);
	}
}
			