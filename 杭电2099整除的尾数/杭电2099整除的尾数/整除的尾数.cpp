#include"stdio.h"
int main()
{
	int a,b,i,j,k,c[101];
	while(scanf("%d%d",&a,&b)&&a!=0&&b!=0)
	{
		j=0;
		for(i=0;i<100;i++)
		{
			if((a*100+i)%b==0)
			{
				c[j]=i;
				j++;
			}
		}
		for(k=0;k<j;k++)
		{
			if(c[k]<10)
				printf("0");
			printf("%d",c[k]);
			if(k<j-1)
				printf(" ");
		}
printf("\n");	}	



}