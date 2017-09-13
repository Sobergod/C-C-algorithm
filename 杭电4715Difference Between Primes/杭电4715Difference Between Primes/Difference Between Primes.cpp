#include"stdio.h"
#include"iostream"
using namespace std;
#define N 10
int main()
{
	__int64 a[N],i,j,t;
	memset(a,0,sizeof(a));
	for(i=0;i<N;i++)
	{
		for(j=2;j<N;j++)
			if(a[j]==0)
			{
				t=j;
				t+=j;
				a[t]=1;

			}

	}
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
}