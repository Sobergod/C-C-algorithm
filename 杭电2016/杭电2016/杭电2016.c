#include<stdio.h>
int main()
{
	int i,k,a[200],t,n;
	while(scanf("%d",&i)!=EOF)
{		int j;
	if(i==0)break;	
	for(j=0;j<i;j++)
		scanf("%d",&a[j]);
		 k=0;
	for(t=k+1;t<i;t++)
		if(a[k]>a[t]) k=t;
	n=a[0];a[0]=a[k];a[k]=n;
	for(j=0;j<i-1;j++)
		printf("%d ",a[j]);
	printf("%d\n",a[i-1]);
}
	return 0;
	}