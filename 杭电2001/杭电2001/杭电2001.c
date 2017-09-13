#include<stdio.h>
#include<math.h>
int main()
{
 
	double a,b,c,d;
while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF)
printf("%.2f\n",sqrt((a-c)*(a-c)+(b-d)*(b-d)));
return 0;
}


