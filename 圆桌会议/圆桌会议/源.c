#include<stdio.h>
	int main()
{
	int n,i,sum;
	while((scanf("%d",&n))!=EOF)
	{    
		sum=0;
		if(n%2==0)
		{   
			for(i=1;i<=(n/2)-1;i++)
			{
				sum+=i;
			}
			printf("%d\n",sum*2);
		}
		else
		{
			for(i=1;i<=((n-1)/2)-1;i++)
			{
				sum+=i;
			}
			printf("%d\n",2*sum+(n-1)/2);
		}
	}
	return 0;
}
