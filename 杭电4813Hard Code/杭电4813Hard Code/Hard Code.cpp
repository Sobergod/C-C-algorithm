#include"iostream"
#include"cstring"
#include"cstdio"
using namespace std;
int main()
{
	char a[10000];
	int n,m,i,j,k,t;
	scanf("%d",&t);
	while(t--)
	{
		k=0;
		scanf("%d%d%s",&m,&n,a);
		for(i=0;i<m;i++)
		{
			
			for(j=k;j<n+k;j++)
				printf("%c",a[j]);
			k=j;
			printf("\n");
		}
	}
}
		