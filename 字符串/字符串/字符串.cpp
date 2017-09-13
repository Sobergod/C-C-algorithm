#include<stdio.h>
int main()
{
	char a[4];
	int i,j,t;
	for(i=1;i<=3;i++)
	scanf("%c",&a[i]);
	for(i=1;i<4;i++)
	for(j=0;j<4-i;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	for(i=0;i<4;i++)
	printf("%c",a[i]);
	printf("\n");
	return 0;

}

