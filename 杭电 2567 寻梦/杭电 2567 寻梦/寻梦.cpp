#include"stdio.h"
#include"string.h"
int main()
{
	char a[100],b[100],c[100];
	int i,j,s,l,k,d;
	scanf("%d",&s);
	getchar();
	while(s--)
	{
	gets(a);
	gets(b);
	i=strlen(a);
	j=strlen(b);
	i/=2;
	for(l=i+j;l<2*i+j;l++)
			a[l]=a[l-j];
		for(k=i;k<j+i;k++)
	{
		a[k]=b[k-i];
	}
		for(d=0;d<i*2+j;d++)
		printf("%c",a[d]);
		printf("\n");
	}
}
