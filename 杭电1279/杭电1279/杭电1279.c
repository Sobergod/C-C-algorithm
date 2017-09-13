#include"stdio.h"
int main()
{
	int i;
	scanf("%d",&i);
	while(i--)
	{int a[1000]={0},j,k=0,t;
		scanf("%d",&j);
		while(j>1)
		{
			if(j%2==0)
				j/=2;
			else if(j%2==1&&j!=1)
			{   a[k]=j;
				j=3*j+1;
				k++;
			}
			
			
		}
		if(a[0]==0) printf("No number can be output !\n");
		else
		for(k=0;a[k]!=0;k++)
			{
				printf("%d",a[k]);
				if(a[k+1]==0)
			printf("\n");
				else
			printf(" ");
		    }	
		
	}
}