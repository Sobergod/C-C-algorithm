#include<stdio.h>
#include<math.h>
int main()
{double a;
	while(scanf("%lf",&a)!=EOF)
		printf("%.2f\n",fabs(a));
	return 0;
}
