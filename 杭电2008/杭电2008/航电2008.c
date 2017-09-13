#include<stdio.h>
int main()
{
	int n,a,d,c,e;
	double b;
	while(scanf("%d",&n),n!=0)
		
	{	
		d=0,e=0,c=0; 
		while(n--)
		{	scanf("%lf",&b);

		if(b>0)
			c++;
		else if(b<0)
			e++;
		else 
			d++;
		}
		printf("%d %d %d\n",e,d,c);
	}
	return 0;
}