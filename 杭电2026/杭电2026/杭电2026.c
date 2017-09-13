#include"stdio.h"
#include"string.h"
int main()
{
	char a[1000];
	int i,n;
	while(gets(a))
	{
	a[0]-=32;
	n=strlen(a);
	for(i=1;i<n;i++)
		if(a[i-1]==' ')
			a[i]-=32;
	puts(a);
	}
return 0;
}
