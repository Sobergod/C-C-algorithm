#include"iostream"
#include"cmath"
using namespace std;
int main()
{
	double a,b,c,d,sum;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		printf("%.1lf\n",sqrt(a*a+b*b+c*c+d*d-2*c*a-2*d*b));
	}
}