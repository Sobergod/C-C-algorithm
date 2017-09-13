#include<stdio.h>
int main()
{
	int i,j;
	while(scanf("%d",&i)!=EOF)
	{int sum=1;
		for(j=1;j<i;j++)
			sum=(sum+1)*2;
		printf("%d\n",sum);
	}
	return 0;
}