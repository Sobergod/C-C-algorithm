#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
	int a[102],N,i,j,k,sum;
	while(cin>>N&&N)
	{
		sum=0;
		for(i=0;i<N;i++)
			cin>>a[i];
			sort(a,a+N);
			for(j=0;j<N/2+1;j++)
	
				sum+=a[j]/2+1;
			cout<<sum<<endl;

	}
}
