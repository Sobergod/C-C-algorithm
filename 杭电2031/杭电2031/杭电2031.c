#include"stdio.h"
int main()
{
	int a[10000];
	int i,j,k,t;
	while(scanf("%d%d",&i,&j)!=-1)
	{
		if(i<0)
		{	
			i=-i;
		printf("-");
		}
		for(k=0;i>0;k++)
		{
			a[k]=i%j;
			i=i/j;
		}
		while(k--)
			if(a[k]<10)
			printf("%d",a[k]);
			else
			printf("%c",a[k]+55);
			printf("\n");
		} 
	return 0;
}