#include"stdio.h"
#include"string.h"
int main()
{
	char a[1000];
	int i,j,k,t,n;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		j=0;
		scanf("%s %d",a,&n);
		k=strlen(a);
		for(i=0;i<k;i++)
		{
			j++;
			if(a[i]=='.')
				break;
		}
		if(j+n>k)
			printf("0\n");
		else
			printf("%c\n",a[j+n-1]);
		
	}
}
