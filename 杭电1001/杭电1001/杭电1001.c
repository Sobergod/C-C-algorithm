#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	
	{int sum=n;
	while(n--)
		sum+=n;
	printf("%d\n\n",sum);
	}
	return 0;
}