#include<stdio.h>
int main()
{
	char a[4],i;
	while(scanf("%s",&a)!=EOF)
	{
		if(a[0]>a[1]){i=a[0];a[0]=a[1];a[1]=i;}
		if(a[0]>a[2]){i=a[0];a[0]=a[2];a[2]=i;}
		if(a[1]>a[2]){i=a[1];a[1]=a[2];a[2]=i;}
		
		printf("%c%2c%2c\n",a[0],a[1],a[2]);
	}
		return 0;
}