#include<stdio.h>
int main()
{
	int a,b,c;
	
	while(~scanf("%d",&c))
	{
	for(a=1;a<=c;a++)
	{
		for(b=1;b<=c-a;b++)
			printf(" ");
		for(b=1;b<=2*a-1;b++)
			printf("x");
	printf("\n");
			
	}
	}
	return 0;
}