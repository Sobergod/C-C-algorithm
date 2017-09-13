#include<stdio.h>
#include<string.h>
int main()
{
	char s[1010],ch[1010]={'\0'};
	int t,i,j;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(s);
		i=0;
		while(s[i])
		{
			j=0;
			while(s[i]!=' '&&s[i]!='\0')
			{
				ch[j]=s[i];
				i++;
				j++;
			}
			ch[j]='\0';
			strrev(ch);
			printf("%s",ch);
			if(s[i]==' '){printf(" ");i++;}
		}
		printf("\n");
	}
	return 0;
}