#include<stdio.h>
int main()
{int a=0,i,j;
char b='x',c=' ';
scanf("%d",&a);
for(i=0;i<2*a-1;i++)
	for(j=0;j<a-1;j++)
		printf(" \n");
printf("x\n");

return 0;
}