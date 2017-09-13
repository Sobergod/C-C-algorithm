#include"stdio.h"
int main()
{ int f(__int64 d);
	__int64 j,i,t,m,b;
	int max,n,c;
	while(scanf("%I64d%I64d",&i,&j)!=EOF)
	{	max=0;n=0;
		if(i>j)
		{t=i;i=j;j=t;n=1;}
		for(m=i;m<=j;m++)
		{ 
			c=f(m);
			if(c>max)
				max=c;
		}
			if(n==1)
				printf("%I64d %I64d %I64d\n",j,i,max+1);
			else
				printf("%I64d %I64d %I64d\n",i,j,max+1);
		}
}
int f(__int64 d)
{
	int c=0;
	while(1)
		{  if(d==1)
		break;
		 if(d%2==1)d=d*3+1;
		else d=d/2;
		c++;
		}
	return c;
}


