#include<stdio.h>
int main()
{
	int i,j,k,t,m,a[1001];
	while(scanf("%d",&i)!=EOF)
	while(i--)
	{     scanf("%d",&j);
	for(m=0;m<j;m++)
		scanf("%d",&a[m]);
		for(m=1;m<j;m++)
			for(k=0;k<j-m;k++)
			{
			if(a[k]>a[k+1])
			{t=a[k];a[k]=a[k+1];a[k+1]=t;}
		}for(m=0;m<j-1;m++)
			{	printf("%d ",a[m]);}
	
			printf("%d\n",a[j-1]);}
	return 0;
}