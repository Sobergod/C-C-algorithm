#include"stdio.h"
int add(int a)
{
	int sum=0,i;
	for(i=1;i<=a/2;i++)
		if(a%i==0)
			sum+=i;
	return sum;                                
}
int main()
{
	int m,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		if(add(m)==n||add(n)==m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
