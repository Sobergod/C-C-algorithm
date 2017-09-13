#include"stdio.h"
int main()
{ int a;
	scanf("%d",&a);
	while(a--)
{	
	int k,n,m,i,j,t=1;	
	while(scanf("%d%d",&n,&m)!=EOF)
		{  k=0;
			if(n==0&&m==0)break;
	for( i=1;i<n-1;i++)
		for( j=i+1;j<n;j++)
			if((i*i+j*j+m)%(i*j)==0)
				k++;
	printf("Case %d: %d\n",t++,k);
	}
	if(a)printf("\n");
	
}
}

