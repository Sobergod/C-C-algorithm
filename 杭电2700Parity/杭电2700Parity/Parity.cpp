#include"stdio.h"
#include"string.h"
int main()
{
	char s[100],i,j,k,t;
	while(scanf("%s",s)&&s[0]!='#')
	{
		k=0;
		t=strlen(s);
		for(i=0;i<t-1;i++)
		{
			if(s[i]=='1')
			{
				k++;
			}
		}
		for(i=0;i<t-1;i++)
			printf("%c",s[i]);
		if(s[t-1]=='e')
		{
			if(k%2==0)
				printf("0\n");
			else
				printf("1\n");
		}
		else
		{
			if(k%2==0)
				printf("1\n");
			else
				printf("0\n");
		}
	}
}
