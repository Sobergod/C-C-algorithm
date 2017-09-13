#include<stdio.h>
int main()
{int a,b,c;
while(scanf("%d",&c)!=EOF)
	while(c--)
	{
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);}
return 0;
}
