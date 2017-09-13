#include"stdio.h"
int main()
{
	int a[100],n,m,i,j,t;
	while(scanf("%d%d",&n,&m),n!=0&&m!=0)
			{ 
				
				for(i=0;i<n;i++)
				scanf("%d",&a[i]);
				a[n]=m;
				for(i=0;i<n;i++)
					for(j=0;j<n-i;j++)
				{
					if(a[j]>a[j+1])
					{
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
					}
					}
					for(i=0;i<n;i++)
						printf("%d ",a[i]);
					printf("%d\n",a[n]);
		
					}
			return 0;
}