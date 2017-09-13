#include"stdio.h"
int main()
{
	int a[3][4],i,j,k,t,m,l,max,min;
	scanf("%d",&m);
		while(m--)
	{
		for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		max=a[i][0];
		t=0;
	
		for(j=0;j<4;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				t=j;
			}
		for(k=0;k<3;k++)
			if(max>a[k][t]) break; 
		if(k>=3)
		{printf("a[%d][%d]=%d\n",i,t,max);break;}
	}
	if(k<3)
		printf("no");
	}
	return 0;
}