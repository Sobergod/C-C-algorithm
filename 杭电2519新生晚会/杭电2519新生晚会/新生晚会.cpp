#include"stdio.h"
int main()
{
	int T,N,M,i,j;
		double k,t;
	scanf("%d",&T);
	while(T--)
	{
		k=1;
		t=1;
		scanf("%d%d",&N,&M);
		if(N<M)
		{
			printf("0\n");
		}
		else
		{
			for(i=0;i<M;i++)
				{
					k*=N;
					N--;
					
				}
			for(j=M;j>0;j--)
				{
					t*=j;
					
				}
			printf("%.lf\n",k/t);
		}
	}
}