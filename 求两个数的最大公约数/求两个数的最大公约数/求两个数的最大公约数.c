#include<stdio.h>
int main()
{
	int i,j,k,t;
	scanf("%d,%d",&i,&j);
	if(i<j)
	{
		t=j;
		j=i;
		i=t;
	}
	k=i%j;
	while(k!=0)
	{
		
		j=k;
		k=i%j;
		i=j;
		
	}
	
		printf("%d",j);
		return 0;
}