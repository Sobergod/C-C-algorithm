#include"stdio.h"
int main()
{
	int a[1000],n,m,i,j,k,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		for(i=0;i<m;i++)
			scanf("%d",&a[i]);
		for(i=0;i<m-1;i++)
		{
			k=i;
			for(j=i+1;j<m;j++)
				if(a[k]>a[j])
					k=j;
			if(k!=i)
			{
				t=a[i];a[i]=a[k];a[k]=t;
			}
		}
			for(i=0;i<m-1;i++)
			printf("%d ",a[i]);
			printf("%d\n",a[m-1]);
	}


}
