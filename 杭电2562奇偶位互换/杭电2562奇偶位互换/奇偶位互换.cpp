#include"stdio.h"
#include"string.h"
int main()
{
	char a[100],b[100];
	int i,j,k,t,n,m;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		j=1;
		m=0;
		scanf("%s",a);
		t=strlen(a);
		for(i=0;i<t;i++)
		{
			if(i%2==0)
			{
				b[j]=a[i];
				j+=2;
			}
			else
			{
				b[m]=a[i];
				m+=2;
			}
			
		}
		for(j=0;j<t;j++)
		printf("%c",b[j]);
		printf("\n");
	}
}
			
		