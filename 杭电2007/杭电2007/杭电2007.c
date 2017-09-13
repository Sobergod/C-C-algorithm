#include<stdio.h>
int main()
{
	int i,j,t;
	while(scanf("%d%d",&i,&j)!=EOF)
	{	 int a,d=0,c=0;
	     if(i>j){t=i;i=j;j=t;} 
		for(a=i;a<=j;a++)
		{
			if(a%2)
				 d+=a*a*a;
			else
				c+=a*a;
		}
		printf("%d %d\n",c,d);		
		}
	return 0;
}