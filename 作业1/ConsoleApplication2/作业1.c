#include<stdio.h>
int main()
{
	int i,j,k;
	while(scanf("%d",&k)!=EOF)
	for(j=1;j<=k;j++)
	for(i=1;i<=k;i++)
	{
	printf("%4d",i*j);
	if(i%k==0)
	printf("\n");
	
	}
		

	return 0;
}