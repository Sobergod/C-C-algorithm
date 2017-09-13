#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[100],b[100];
	scanf("%d",&i);
	while(i--)
	{	scanf("%s",a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0)
		printf("yes\n");
	else
		printf("no\n");
}
	return 0;
}
