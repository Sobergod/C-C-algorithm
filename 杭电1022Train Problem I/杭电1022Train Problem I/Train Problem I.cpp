#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"stack"
using namespace std;
int main()
{
	stack<char>s;
	char a[100],b[100];
	int i,j,k,t,n,c[100];
	while(scanf("%d",&n)!=EOF)
	{
		t=0;
		j=0;
		getchar();
		while(!s.empty())
		{
			s.pop();
		}
		scanf("%s %s",a,b);
		for(i=0;i<n;i++)
		{
			s.push(a[i]);
			c[t]=1;
			t++;
			while(j<n&&!s.empty())
			{
				if(s.top()==b[j])
				{
					s.pop();
					c[t]=0;
					t++;
					j++;
				}
				else
				{
					break;
				}
			}
		}
		if(s.empty())
		{
			printf("Yes.\n");
			for(i=0;i<t;i++)
				{
					if(c[i]==1)
					printf("in\n");
					else if(c[i]==0)
					printf("out\n");
				}
		}
		else
			printf("No.\n");
		printf("FINISH\n");
	}
	return 0;
}



