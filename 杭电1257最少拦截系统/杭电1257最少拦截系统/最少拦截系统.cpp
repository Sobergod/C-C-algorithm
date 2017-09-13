#include"stdio.h"
int main()
{
	int a,b[100],i,j,k,t;
	while(scanf("%d",&a)!=EOF)
{
	k=0;b[0]=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&t);
		
		for(j=0;j<=k;j++)
		{
			
			if(t<b[j])
			{
				b[j]=t;
				break;
			}
			else if(j==k)
			{
				k++;
				b[k]=t;
				break;
			}
			
		}
	}printf("%d\n",k);
}
}
