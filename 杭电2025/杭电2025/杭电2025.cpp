#include"stdio.h"
#include"string.h"
int main()
{
	char a[1000];
	int i,j,k,n;
	while(gets(a))
	{
		n=strlen(a);
		for(i=0;i<n;i++)
		{k=0;
		printf("%c",a[i]);
		for(j=0;j<n;j++)
			{
				if(a[i]>=a[j])
				k=1;
			else
				{k=0;break;}
			}
		if(k==1) 
			printf("(max)");
		}
		printf("\n");
	}
	return 0;
}
			

