#include<stdio.h>
int main()
{
	int i,j,n,a[10][10]={0};
	/*scanf("%d",&n);
	while(n<1||n>9)
	{
		printf("ÊäÈëÐÐÊý:");
		scanf("%d",&n);
		
	}*/
	while(~scanf("%d",&n))
	{
		if(n>=1&&n<=9)
			break;
	}
	for(i=0;i<n;i++)
		a[i][0]=1;
	{
		for(i=1;i<n;i++)
			for(j=1;j<=i;j++)
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
		printf("%5d",a[i][j]);
		printf("\n");
		}
	}
	return 0;
}