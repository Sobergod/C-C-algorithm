#include"stdio.h"
int gcd(int a,int b)
{

	if(b)
		return gcd(b,a%b);
	else 
		return a;
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	int z[10000],n,i,j,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&i);
		scanf("%d",&t);
		for(j=1;j<i;j++)
		{	
				scanf("%d",&z[j]);
			t=lcm(t,z[j]);
		}
	
	printf("%d\n",t);
	}
}

		

              
