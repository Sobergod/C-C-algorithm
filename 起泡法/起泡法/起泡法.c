#include<stdio.h>
int main()
{
	int a[4],i,j,t;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(i=1;i<4;i++)
		for(j=0;j<4-i;j++)
			if(a[j]<a[j+1])
				{t=a[j+1];a[j+1]=a[j];a[j]=t;}
		for(i=0;i<4;i++)
			printf("%d",a[i]);
		printf("\n");
		return 0;
}