#include<stdio.h>
int main()
{
	int i,j,k,a[100];
	while(scanf("%d",&i)!=EOF)
		while(i--)
	{  int sum=0;
	scanf("%d",&j);
	for(k=0;k<j;k++)
	{
	scanf("%d",&a[k]);
	sum+=a[k];
	}
	
	printf("%d\n",sum);
	if(i!=0)
	printf("\n");
	}
	return 0;
}
