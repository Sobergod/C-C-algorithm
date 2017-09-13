#include"stdio.h"
int main()
{
	int n,i;
		char j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%d",&j,&i);
		if(j>='A'&&j<='Z')
			printf("%d\n",(j-64)+i);
		if(j>='a'&&j<='z')
			printf("%d\n",(96-j)+i);
	}
}