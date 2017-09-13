#include"stdio.h"
int main()
{
	int i,j,n,a=0;
	__int64 m[36],sum,k,t;
	m[0]=1;
	for(i=1;i<=35;i++)
	{
		m[i]=0;
		for(j=0;j<i;j++)
			m[i]+=m[j]*m[i-j-1];
	} 

	while(scanf("%d",&n)&&n!=-1)
	{
		printf("%d %d %I64d\n",++a,n,m[n]*2);
	}
}

