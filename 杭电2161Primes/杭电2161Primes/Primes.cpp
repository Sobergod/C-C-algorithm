#include"stdio.h"
int main()
{
	int n,i,j,k;
	j=1;
	while(scanf("%d",&n)!=EOF&&n>0)
	{
		k=0;
		if(n==1||n==2)
			k=1;
		for(i=2;i<n;i++)
			{
				if(n%i==0)
				k=1;
			}
		if(k==0)
			printf("%d: yes\n",j);
		else 
			printf("%d: no\n",j);
		j++;
	}
}