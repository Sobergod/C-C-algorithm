#include"iostream"
#include"cmath"
using namespace std;
int main()
{
	int n,x[100],i,k,y[100];
	__int64 j;
	while(cin>>n)
	{    j=0;
		for(i=0;i<n;i++)
		scanf("%d(%d)",&x[i],&y[i]);
		for(i=0;i<n;i++)
		{
			k=0;
			while(x[i]>0)
			{
				j+=(x[i]%10*pow(y[i],k));
				x[i]/=10;
				k++;
			}
		}
		printf("%I64d\n",j);
		
	}
}




