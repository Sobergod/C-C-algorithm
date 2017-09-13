#include"stdio.h"
#include"string.h"
int main()
{
	char s[1000][20];
	int i,j,n,t1,t2,m;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++)
			scanf("%s",s[i]);
		t2=0;m=0;
		for(i=0;i<n;i++)
		{
			t1=1;
			for(j=i+1;j<n;j++)
				if(strcmp(s[i],s[j])==0)
					t1++;
		
		
		if(t1>t2)
			{
				t2=t1;
				m=i;
			}
		}printf("%s\n",s[m]);
	}
	}
		





