#include"stdio.h"
int main()
{
	char a[15];
	int n,i;
	scanf("%d\r",&n);
	while(n--)
	{   
	gets(a);
	for(i=6;a[i]!='\0';i++)
	{       
			if(i==6)
				printf("6");
			printf("%c",a[i]);}
			printf("\n");
	}return 0;
}
