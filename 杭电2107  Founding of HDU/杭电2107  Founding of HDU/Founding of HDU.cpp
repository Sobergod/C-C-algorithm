#include"stdio.h"
int main()
{
	int n,a[101],i,j,m,k;
	while(scanf("%d",&n)&&n!=0)
	{
		j=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]>j)
				j=a[i];
		}
		printf("%d\n",j);
	}
}
			/*for(j=i+1;j<n;j++)
			{
				k=i;
			if(a[k]<a[j])
				k=j;
			if(k!=j)
			{
				m=a[k];a[k]=a[j];a[j]=m;
			}
			}

		}
		printf("%d\n",a[n-1]);
	}
}*/

