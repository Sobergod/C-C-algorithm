#include"stdio.h"
int main()
{
	int i,j;
	while(scanf("%d",&i)!=EOF)
	{int k=0;
		while(i>1)
		{
			if(i%2==0)
				i=i/2;
			else
			{
				i=(i*3+1)/2;
				
				
			}k++;
			
		}if(i==1)
				printf("%d\n",k);
		if(i==0)
			break;
	}
	
}

