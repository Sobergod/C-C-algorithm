#include<stdio.h>
int main()
{
	int i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		int a=1;
		for(i=0;i<n;i++)
		{scanf("%d",&j);
		if(j%2!=0)
			a*=j;}
		printf("%d\n",a);
	}
	return 0;
}