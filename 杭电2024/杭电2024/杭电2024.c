
#include"stdio.h"
#include"string.h"
int main()
{
	char a[100];
	int i,j,n,t;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		
		gets(a);
		i=strlen(a);
		t=0;
		if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
			t++;
			for(j=1;j<i;j++)
		{
			if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]=='_')||(a[j]>='0'&&a[j]<='9'))
			t++;
		}
		if(t==i)
			printf("yes\n");
		else
			
		printf("no\n");
	}
		return 0;
	}