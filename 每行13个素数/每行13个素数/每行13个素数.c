#include<stdio.h>
int main()
{
	int i,j,t,n=0;
	for(i=2;i<=170;i++)
	{
		t=0;

	for(j=2;j<i;j++)
		if(i%j==0) 
		{
				t=1;break;
		}
		if(t==0)
		{
			printf("%5d",i);
	            n+=1;
		}
		if(n%13==0)
		{
		printf("\n");
		n=0;
		}

	}
	return 0;
}
