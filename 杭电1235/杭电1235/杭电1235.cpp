
#include"stdio.h"
int main()
{
	int i,j,k,t,a[100000];
	while(scanf("%d",&t)!=EOF)
	{
		if(t==0)break;
		for(j=0;j<t;j++)
			scanf("%d",&a[j]);
		scanf("%d",&i);
		k=0;
		for(j=0;j<t;j++)
			if(a[j]==i)
				k++;
	
	printf("%d\n",k);}
}