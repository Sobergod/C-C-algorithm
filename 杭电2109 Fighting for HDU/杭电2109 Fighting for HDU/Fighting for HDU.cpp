#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
	int a[105],b[105],n,i,j,k;
	while(cin>>n&&n!=0)
	{
		j=0,k=0;
		for(i=0;i<n;i++)
		{cin>>a[i];}
		for(i=0;i<n;i++)
		{cin>>b[i];}
				sort(a,a+n);
				sort(b,b+n);
		for(i=0;i<n;i++)
			{
				
				if(a[i]>b[i])
					j+=2;
				else if(a[i]<b[i])
					k+=2;
				else 
				{
					j++;k++;
				}
		}
			cout<<j<<" vs "<<k<<endl;
	}
}