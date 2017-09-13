#include"stdio.h"
#include"math.h"
int main()
{
	int a[100],b[100],i,j,n;
	double s;
		
	while(scanf("%d",&n)!=EOF&&n)
	{    s=0.0;
		for(i=0;i<n;i++)
	scanf("%d%d",&a[i],&b[i]);
		for(i=0;i<n-1;i++)
			s+=a[i]*b[i+1]-a[i+1]*b[i];
	s+=a[i]*b[0]-b[i]*a[0];
		printf("%.1lf\n",fabs(0.5*s));
	}
	return 0;
}

	