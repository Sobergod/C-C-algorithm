#include"stdio.h"
int main()
{
	double VUL,D;
	int  t,i,j;
	while(scanf("%lf%lf",&VUL,&D)!=EOF)
	{t=0;
		while((VUL/D)>1)
		{
			VUL-=D;
			t++;
		}
		for(j=0,i=1;j<t;i++)
			j+=i;
		printf("%d\n",t+i-1); 
	}
}


