#include"stdio.h"
#include"string.h"
int main()
{
	char a[100001];
	int i,j,k,t,l,b[26];
	while(gets(a))
	{
		memset(b,0,sizeof(b));
		l=strlen(a);
		for(i=0;i<l;i++)
			{
				if(a[i]>='a'&&a[i]<='z')
			b[a[i]-'a']++;
		    }
	for(i=0;i<26;i++)
		printf("%c:%d\n",'a'+i,b[i]);
	printf("\n");
	}
}
	   
