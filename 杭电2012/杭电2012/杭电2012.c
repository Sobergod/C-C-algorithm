#include<stdio.h>
int main()
{
	int x,y,k,n,a,b;
	while(scanf("%d%d",&x,&y)!=EOF)
	{     b=0;
		if(x==0&&y==0)break;
	 for(k=x;k<=y;k++)
	{	
		n=k*k+k+41;
	 for(a=2;a<n;a++)
		if(n%a==0)
			{b++;
			}
	 }
	 if(b)
		printf("Sorry\n");
			 else
		 printf("OK\n");
	 }
	return 0;
}