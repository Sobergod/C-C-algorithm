#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
	int n,m;
	double a,b;
	cin>>m;
	while(m--)
	{ double max=0.0;
		scanf("%d",&n);
		while(n--)
		{
			cin>>a;
			if(max<a)
				max=a;
		}
		printf("%.2lf\n",max);
	}
}
