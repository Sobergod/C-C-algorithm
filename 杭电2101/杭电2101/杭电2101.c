#include"stdio.h"
int main()
{
	int i,j;
	while(scanf("%d%d",&i,&j)!=EOF)
	{
		if((i+j)%86==0)
			printf("yes\n");
		else
			printf("no\n");
	}}
