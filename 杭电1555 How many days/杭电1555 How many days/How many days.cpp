#include"stdio.h"
int main()
{
	int i,j,k,t;
	while(scanf("%d%d",&i,&j),i!=0||j!=0)
	{
		int c=0;
		while(i>=j)
		{
			i=i-j+1;
			c+=j;
		}
		printf("%d\n",c+i);
	}
}
