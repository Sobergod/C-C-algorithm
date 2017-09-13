#include"iostream"
using namespace std;
int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		int s=0;
		cin>>n>>m;
		for(i=0;i<=m;i++)
			for(j=0;j<=m/2;j++)
				for(k=0;k<=m/5;k++)
					if(i+j+k==n&&1*i+2*j+5*k==m)
						s++;
		cout<<s<<endl;
	}
}
