#include"iostream"
using namespace std;
int main()
{
	int n,m,a,b[100];
	cin>>n;
	while(n--)
	{
		cin>>m;
		b[1]=3;
		b[2]=9;
		for(a=3;a<=m;a++)
				b[a]=2*b[a-1]+b[a-2];
		cout<<b[m]<<endl;
	}
	return 0;
}
