#include"stdio.h"
int main()
{
	char a,b;
	int n,t,i,j,k,m,e=0;
	while(scanf("%d %c %c",&n,&a,&b)!=EOF)
{   if(e==1)
	printf("\n");
	if(n==1)
		{printf("%c",a);
	printf("\n");}
	else
	{	
		for(t=1;t<80;t++)
		if(n==4*t-3)
		{ m=a;a=b;b=m;}
			for(i=1;i<=n;i++)
		{
			if(i==1||i==n)
			{
				printf(" ");
				for(j=0;j<n-2;j++)
					printf("%c",b);
				printf(" ");
				printf("\n");
			}
			else if(i<=n/2+1&&i>1)
			{
				if(i%2==0)
				{
						
							for(k=0;k<i-1;k++)
								{
									if(k%2!=0)
										printf("%c",a);
									else
										printf("%c",b);
								}
						
						for(k=0;k<n-2*i+2;k++)
						printf("%c",a);
							for(k=0;k<i-1;k++)
								{
									if(k%2!=0)
									printf("%c",a);
									else
										printf("%c",b);
								}
							
						printf("\n");
				}
				else
					{
						for(k=0;k<i-1;k++)
								{
									if(k%2!=0)
										printf("%c",a);
									else
										printf("%c",b);
								}
						
						for(k=0;k<n-2*i+2;k++)
						printf("%c",b);
							for(k=0;k<i-1;k++)
								{
									if(k%2==0)
										printf("%c",a);
									else
										printf("%c",b);
								}
							
						printf("\n");
			}
			}
			else if(i>n/2+1&&i<n)
			{
				if(i%2==0)
				{
						
							for(k=0;k<n-i;k++)
								{
									if(k%2!=0)
										printf("%c",a);
									else
										printf("%c",b);
								}
						
						for(k=0;k<2*i-n;k++)
						printf("%c",a);
							for(k=0;k<n-i;k++)
								{
									if(k%2!=0)
									printf("%c",a);
									else
										printf("%c",b);
								}
							
						printf("\n");
				}
				else
					{
						for(k=0;k<n-i;k++)
								{
									if(k%2!=0)
										printf("%c",a);
									else
										printf("%c",b);
								}
						
						for(k=0;k<2*i-n;k++)
						printf("%c",b);
							for(k=0;k<n-i;k++)
								{
									if(k%2==0)
										printf("%c",a);
									else
										printf("%c",b);
								}
							
						printf("\n");
			}

			}

			else
				{
					for(j=0;j<n-4;j++)
						printf("%c",b);
					printf("\n");
				}
			}
			}e=1;}
			}
			
			









