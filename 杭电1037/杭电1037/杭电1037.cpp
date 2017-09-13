#include"stdio.h"
int main()
{
	int a[3],i,k;
	for(i=0;i<3;i++)
	{scanf("%d",&a[i]);
	if(a[i]<168)
	{printf("CRASH %d\n",a[i]);break;}
	else
	{	k=0;
		k++;
	if(k==3)
		printf("NO CRASH\n");
	}}
}