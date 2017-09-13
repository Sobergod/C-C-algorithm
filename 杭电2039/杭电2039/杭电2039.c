#include"stdio.h"
int main()
{
	double i,j,k,t;
	scanf("%lf",&i);
	while(i--)
	{
		scanf("%lf%lf%lf",&j,&k,&t);
		if((j+k)>t&&(j+t)>k&&(t+k)>j)                        
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}