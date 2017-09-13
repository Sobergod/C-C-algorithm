#include"stdio.h"
int main()
{
	char s[10][100];
	int i,j,k,t=0;
	for(i=3;i<=10;i++)
	{
		for(j=0;j<i;j++)
			for(k=0;k<i;k++)
			{
				s[j][k]=' ';
				s[j][i]=0;
			}
			for(j=0;j<i;j++)
			{
				s[j][0]='a'+t;
				t=(t+1)%26;
			}
			for(j=i-2;j>0;j--)
			{
				s[j][i-j-1]='a'+t;
				t=(t+1)%26;

			}
			for(j=0;j<i;j++)
			{
				s[j][i-1]='a'+t;
				t=(t+1)%26;
			}
			for(j=0;j<i;j++)
				printf("%s\n",s[j]);
	}
}


	