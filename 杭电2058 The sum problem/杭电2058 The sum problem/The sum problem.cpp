#include"stdio.h"
#include"math.h"
int main()
{
	int N,M;
	while(scanf("%d%d",&N,&M)&&N!=0&&M!=0)
	{
	int i=(int)sqrt(M*2.0);
	int j=0;
	for(;i>0;i--)
	{
		j=M-(i-1)*i/2;
		if(j%i==0)
			printf("[%d,%d]\n",j/i,j/i+i-1);
	}
	printf("\n");
	}
}