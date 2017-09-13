#include"stdio.h"
#include"string.h"
int main()
{
	char s[100];
	int i,j,k,t,n,m,a;
	scanf("%d\r",&a);
	while(a--)
	{
	gets(s);
	j=0;k=0;n=0;m=0;
		t=strlen(s);
		if(t<8||t>16)
			printf("NO\n");
		else
		{
		for(i=0;i<t;i++)
			{
				if(s[i]>='a'&&s[i]<='z')
					j=1;
				else if(s[i]>='A'&&s[i]<='Z')
					k=1;
				else if(s[i]>='0'&&s[i]<='9')
					n=1;
				else if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')
					m=1;
			}
		
		if(j+k+n+m>=3)
			printf("YES\n");
		else
			printf("NO\n");
	}}
}
