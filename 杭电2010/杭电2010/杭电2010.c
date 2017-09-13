#include<stdio.h>
int main()
{
	int i,j,k,t,m,n,a,b;
	while(scanf("%d%d",&i,&j)!=EOF)
	{       b=0;                       
		for(k=i;k<=j;k++)
		{
		m=k/100;
		n=k%100/10;
		a=k%10;
		if(m*m*m+n*n*n+a*a*a==m*100+n*10+a)
			{
		if(b==1)
			printf(" ");
			printf("%d",k);
			b=1;
			}}
		if(b!=1)
			printf("no\n");
		else
			printf("\n");
	}
	return 0;
}			
