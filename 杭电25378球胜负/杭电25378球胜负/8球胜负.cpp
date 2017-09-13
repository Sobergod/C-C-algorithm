#include"stdio.h"
int main()
{
	char s[16];
	int n,i,j,k;
	while(scanf("%d",&n)&&n!=0)
	{
		j=k=0;
		scanf("%s",s);
		for(i=0;i<n-1;i++)
			{
				if(s[i]=='R')
					j++;
				else
					k++;
			}
		if(j>=7&&s[n-1]=='B')
			printf("Red\n");
		else if(k<7&&s[n-1]=='L')
			printf("Red\n");
		else if(k>=7&&s[n-1]=='L')
			printf("Yellow\n");
		else if(j<7&&s[n-1]=='B')
			printf("Yellow\n");
	}
		
}
