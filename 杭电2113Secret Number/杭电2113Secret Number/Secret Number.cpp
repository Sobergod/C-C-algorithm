#include"stdio.h"
#include"string.h"
int main()
{
	char a[10000];
	int i,j,k,t,b,n;
	n=0;
	while(scanf("%s",&a)!=EOF)
	{
		if(n!=0)
			printf("\n");
		getchar();
		k=0;
		i=strlen(a);
		for(j=0;j<i;j++)
			if((a[j]-48)%2==0)
				k+=(a[j]-48);
		printf("%d\n",k);
		n++;
	}
}