#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,m,x,y;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		x=(sqrt(n*n-4*m)+n)/2;
		if(x-(int)x==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}
