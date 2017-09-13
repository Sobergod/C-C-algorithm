#include"stdio.h"
int main()
{
	int n,m,i,j,k,t;
	double b[50],a[50][5],c[5];
	while(scanf("%d%d",&n,&m)!=EOF)
	{	t=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%lf",&a[i][j]);
	for(i=0;i<n;i++)
	{b[i]=0;
		for(j=0;j<m;j++)
			b[i]=b[i]+a[i][j];
				b[i]=b[i]/m;
				if(i!=n-1)
					printf("%.2lf ",b[i]);
				else
					printf("%.2lf",b[i]);
	}
	printf("\n");
	for(j=0;j<m;j++)
		{c[j]=0;
			for(i=0;i<n;i++)
				c[j]=c[j]+a[i][j];
						c[j]=c[j]/n;
						if(j!=m-1)
					printf("%.2lf ",c[j]);
				else
					printf("%.2lf",c[j]);
							

	}
	printf("\n");
	for(i=0;i<n;i++)
	{	k=0;
		for(j=0;j<m;j++)
			if(a[i][j]>=c[j])
				k++;
		if(k==m)
			t++;
	}
		printf("%d\n\n",t);
	}
	return 0;
}