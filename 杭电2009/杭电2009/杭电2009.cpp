#include<stdio.h>
#include<math.h>
int main()
{
	double i,n,m,sum;
		while(scanf("%Lf%Lf",&i,&n)!=EOF)
	
		{
		sum=0;
		while(n--)
		{sum+=i;
		i=sqrt(i);
		}
		printf("%.2Lf\n",sum);}
	return 0;
}
