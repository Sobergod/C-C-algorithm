#include"stdio.h"
int main()
{
	char s;
	int i,j,k,t,n;
	while(scanf("%d",&t)!=EOF)
	while(t--)
	{ getchar();
		scanf("%c %d",&s,&n);
			for(i=1;i<=n;i++)
			{
				if(n%2==0)
				{
				if(i==1||i==n||i==n/2)
					{
						for(j=0;j<n/6+1;j++)
							printf(" ");
						for(j=0;j<(n-3)/2+1;j++)
							printf("%c",s);
						printf("\n");
					}
				else
					{
						for(j=0;j<n/6+1;j++)
							printf("%c",s);
						for(j=0;j<(n-3)/2+1;j++)
							printf(" ");
						for(j=0;j<n/6+1;j++)
							printf("%c",s);
						printf("\n");
					}
				}
				else
					{
							if(i==1||i==n||i==n/2+1)
						{
							for(j=0;j<n/6+1;j++)
								printf(" ");
							for(j=0;j<(n-3)/2;j++)
								printf("%c",s);
							printf("\n");
						}
							else
						{
							for(j=0;j<n/6+1;j++)
							printf("%c",s);
							for(j=0;j<(n-3)/2;j++)
							printf(" ");
							for(j=0;j<n/6+1;j++)
							printf("%c",s);
						printf("\n");
						}
					}
		}if(t!=0)
			printf("\n");
	
}
}
