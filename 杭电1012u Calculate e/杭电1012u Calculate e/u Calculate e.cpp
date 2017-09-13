#include"stdio.h"
int main()
{
	double i,j,k,t,sum;
	printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n1 2\n2 2.5\n");
	sum=2.5;
	for(i=3;i<10;i++)
	{  k=1;
		for(j=1;j<=i;j++)
			{
				k*=j;
			}
		sum+=1.0/k;
		printf("%.lf %.9lf\n",i,sum);
	}
}
