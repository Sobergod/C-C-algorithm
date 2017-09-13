#include"stdio.h"
int main()
{
	int i;
		__int64 k[34],t[34],m,n;
	while(scanf("%d",&i)!=EOF)
	{	if(i==-1) break;
		k[0]=1,t[0]=0;
		for(m=1;m<=i;m++)
		{k[m]=k[m-1]*3+t[m-1]*2;
		t[m]=k[m-1]+t[m-1];
		}
		printf("%I64d, %I64d\n",k[i],t[i]);
	}
	return 0;
}