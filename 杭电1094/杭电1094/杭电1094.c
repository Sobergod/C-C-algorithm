#include<stdio.h>
int main()
{
	int a[100],i,j,k;
	while(scanf("%d",&i)!=EOF)
	{int sum=0;
		for(j=0;j<i;j++)
	{		scanf("%d",&a[j]);
		sum+=a[j];
	}
	printf("%d\n",sum);
	}return 0;
}