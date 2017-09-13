#include<stdio.h>
#include<algorithm>
using namespace std;

struct Student
{
	int Ai;
	int Bi;
}a[30];

bool cmp(Student b,Student d)
{
	return b.Ai<d.Ai;
}

int main()
{
	int n,t,i,j,wu;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				scanf("%d %d",&a[i].Ai,&a[i].Bi);
			}
			sort(a,a+n,cmp);
			for(i=0;i<n;i++)
			{
				for(j=0;j<a[i].Bi;j++)
				{
					printf(">+");
					for(wu=0;wu<a[i].Ai-2;wu++)
					{
						printf("-");
					}
					printf("+>\n");
				}
				puts("");
			}
		}
	}
	return 0;
}