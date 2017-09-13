#include<stdio.h>
int main()
{  long int i;
long int sum(long int n);
	long int n,s;
	while(scanf("%ld",&n)!=EOF)
	{s=sum(n);
	printf("%ld\n",s);
	printf("\n");
	}}
int sum(int n)
{
	long int s;
	if(n==1)
		s=1;
	else
		s=n+sum(n-1);
	return s;
}