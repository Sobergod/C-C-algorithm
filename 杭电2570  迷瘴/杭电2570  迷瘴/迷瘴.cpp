#include"iostream" 
#include"algorithm" 
using namespace std;
int main()
{
	double w;
	int c,v,n,i,a[100];
	cin>>c;
	while(c--)
	{
		
		cin>>n>>v>>w;
		for(i=0;i<n;i++)
			cin>>a[i];
			sort(a,a+n);
			double sum=0,s=0;
			int k=0;
			for(i=0;i<n;i++)
			{
				s+=a[i]*v;
				if(s/(v*(i+1))<=w)
				{
					sum=s/(v*(i+1));
					k++;
				}
				else break;
			}
			printf("%d %0.2lf\n",k*v,sum/100);
	}

	}