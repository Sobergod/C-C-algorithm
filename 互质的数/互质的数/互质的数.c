#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d\n",&n);
	for(i=2;i<n;i++)
		for(j=3;j<n;j++)
		{
			if(j%i==0)
				printf("%d,%d\n",i,j);
		}
		return 0;
}