#include"stdio.h"
#include"string.h"
int main()
{
	int i,j,k,t,n;
	char a[100],b[100],c[100],d[100][20];
	while(scanf("%d%s%s",&n,a,b)!=EOF)
	{
		i=j=k=t=0;
		strcpy(d[t++],"in");
		while(i<n)
		{
			c[k]=a[i];
			while(c[k]==b[j]&&c[k]!='\0'&&b[j]!='\0')
			{
				j++;
				k--;
				strcpy(d[t++],"out");
			}
			k++;
			i++;
			strcpy(d[t++],"in");
		}
		if(k==0)
		{
			printf("Yes.\n");
			for(i=0;i<t-1;i++)
				printf("%s\n",d[i]);
			printf("FINISH\n");
		}
		else
			printf("No.\nFINISH\n");
	}
}

