#include<stdio.h>
int main()
{
	int i,a;
	double j=1,k=1,t=1,sum=1;
	while(scanf("%d",&a)!=EOF)
	while(a--){double j=1,k=1,t=1,sum=1;
	scanf("%d",&i);
		for(k=2;k<=i;k++)
			{t=(-1)*t;
			j=t*(1/k);
			sum+=j;
			}
		printf("%.2Lf\n",sum);
	}
	return 0;
}