#include"stdio.h"
#include"string.h"
int main()
{
	
	char s[100];
	int n,i,k;
	scanf("%d\r",&n);
	while(n--)
	{	int t=0,c=0,d=0,m=0,f=0;
		gets(s);
		k=strlen(s);
		for(i=0;i<k;i++)
		{	if(s[i]=='a')
				{t++;}
			if(s[i]=='e')
				{m++;}
			if(s[i]=='i')
				{c++;}
			if(s[i]=='o')
				{d++;}
			if(s[i]=='u')
			{f++;}
		}printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",t,m,c,d,f);
		if(n)
		printf("\n");
		
	}
}

