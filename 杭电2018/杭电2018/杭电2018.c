#include<stdio.h>
int main()
{
	int a[55],i,j;
	while(scanf("%d",&i)!=EOF&&i!=0)
	{ 	a[0]=1;a[1]=2;a[2]=3;
		for(j=3;j<i;j++)
			a[j]=a[j-3]+a[j-1];
		printf("%d\n",a[i-1]);}

}