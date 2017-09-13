#include"stdio.h"
#include"string.h"
int main()
{
	char a[10000];
	int i,j,t,m;
	scanf("%d\r",&i);
	while(i--)
	{ 
		m=0;
		gets(a);
		t=strlen(a);
		for(j=0;j<t;j++)
			if(a[j]<0||a[j]>255)
				m++;
		printf("%d\n",(m+1)/2);
	}
	return 0;
}