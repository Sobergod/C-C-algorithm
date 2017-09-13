#include"stdio.h"
int main()
{
	char s;
	int h,j,k,t=0;
	while(scanf("%c %d",&s,&h),s!='@')
	{	getchar();
	if(t==1)
		printf("\n");
		for(j=1;j<=h;j++)
		{
			if(j==1)
		{
			for(k=0;k<h-j;k++)
				printf(" ");
			printf("%c\n",s);
			
		}
		else if(j>1&&j<h)
		{
			for(k=0;k<h-j;k++)
				printf(" ");
			printf("%c",s);
			for(k=0;k<2*j-3;k++)
				printf(" ");
			printf("%c",s);
			printf("\n");
		}
		else
		{
			for(k=0;k<2*h-1;k++)
			printf("%c",s);
			printf("\n");
		}
		}t=1;
	}
}
