#include<stdio.h>
int main()
{
	int i=2,j;
	for(i=2;i<=170;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0) break;
		else
			printf("%d",i);}
	}
			
		return 0;
}