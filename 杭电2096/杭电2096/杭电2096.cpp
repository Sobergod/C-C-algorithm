#include"stdio.h"
int main()
{
	int i,j,k,t;
	while(scanf("%d",&i)!=EOF)
		while(i--)
	{int sum=0;
		
			scanf("%d%d",&j,&k);
		if(j>=100)
			j=j%100;
		if(k>=100)
			k=k%100;
		sum=j+k;
		if(sum>=100)
			sum=sum%100;
		printf("%d\n",sum);
	}
	return 0;
}