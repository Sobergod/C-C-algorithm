#include"stdio.h"
int main()
{
	int a[50][50]={0},i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
				a[i][0]=1;
		for(i=1;i<n;i++)
		  for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		for(i=0;i<n;i++)
		{
		for(j=0;j<=i;j++)
			if(j==i) 
		printf("%d\n",a[i][j]);
			else
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
