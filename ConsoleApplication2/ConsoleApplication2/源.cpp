#include<stdio.h>
int main()
{
	int c,n,i,j,sum;
	int ai[105],max;
	int vivt[105];
	scanf("%d",&c);
	while(c--)
	{
		for(i=0;i<105;i++)
			vivt[i]=0;
		sum =0;
		scanf("%d",&n);
		max = 0;
		for(i=0;i<n;i++)
		{	
			scanf("%d",&ai[i]);
			if (ai[i]>max)max =ai[i];
			if(!vivt[ai[i]]) sum++;
			vivt[ai[i]]=1;
		}
		printf("%d\n",max * 6 + sum * 5 + max *4 + n);	
		
	}
}
 
