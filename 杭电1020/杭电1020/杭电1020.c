#include"stdio.h"
#include"string.h"
int main()
{
	char a[10000];
	int i,j,t,k;
	scanf("%d ",&i);
	while(i--)
	{
		gets(a);
		t=1;
		k=strlen(a);
		for(j=0;j<k;j++)
			if(a[j]==a[j+1])
				t++;
			else
			{
				if(t==1)
					printf("%c",a[j]);
				else
					printf("%d%c",t,a[j]);
				t=1;
			}
			printf("\n");
	}
	
	return 0;
}