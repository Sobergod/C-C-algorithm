#include"iostream"
#define max 20001
using namespace std;
int a[max];
int main()
{
	int N,i,j,k,t,p;
	memset(a,0,sizeof(a));
	a[1]=1;
	for(i=2;i<max;i++)
	{
		if(a[i]==0)
		{
			for(j=i;j<max;j+=i)
				a[j]=i;
		}
	}
	while(cin>>N)
	{
	int s=-1;
	while(N--)
	{
		
		cin>>t;
		if(a[t]>s)
		{
			s=a[t];
			p=t;
		}
			
	}cout<<p<<endl;
	}
}
