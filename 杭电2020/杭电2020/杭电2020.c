#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,t,a[101];
	while(scanf("%d",&i)!=EOF&&i!=0)
		{
			for(j=0;j<i;j++)
			scanf("%d",&a[j]);
			for(j=1;j<i;j++)
				for(k=0;k<i-j;k++)
					if(abs(a[k])<abs(a[k+1]))
					{
						t=a[k+1];
						a[k+1]=a[k];
						a[k]=t;
					}
					for(j=0;j<i-1;j++)
						printf("%d ",a[j]);
					printf("%d\n",a[i-1]);
	}
	return 0;
}