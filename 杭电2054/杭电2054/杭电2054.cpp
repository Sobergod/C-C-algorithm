#include"stdio.h"
#include"string"
int main()
{

	char a[100000],b[100000];
	while(scanf("%s %s",a,b)!=EOF)
	if(strcmp(a,b)==0)
		printf("YES\n");  
	else
		printf("NO\n");
}