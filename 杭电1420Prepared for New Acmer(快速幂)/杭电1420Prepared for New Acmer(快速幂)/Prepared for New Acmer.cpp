#include"iostream"
using namespace std;
int main()
{
	long long ans,a,b,c;
	int N;
	cin>>N;
	while(N--)
	{
		ans=1;
		cin>>a>>b>>c;
		while(b>0)
		{
			if(b%2==1)
			{
				ans=(ans*a)%c;
			}
			b/=2;
			a=(a*a)%c;
		}
		cout<<ans;
	}
}
		

	