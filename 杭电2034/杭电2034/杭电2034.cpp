#include"stdio.h"
void sort(int *p,int t)
{
	int i,j,k,y;
	for(i=0;i<t-1;i++)
	{
		k=i;
		for(j=i+1;j<t;j++)
			if(*(p+k)>*(p+j))
				k=j;
		if(k!=i)
		{y=*(p+k);*(p+k)=*(p+i);*(p+i)=y;}
	}
}
int main()
{
	void sort(int *p,int t);
	int a[100],b[100],i,j,n,m,c;
	while(scanf("%d%d",&n,&m)!=EOF)
	{	if(n==0&&m==0) break;
		int k;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(j=0;j<m;j++)
			scanf("%d",&b[j]);
		sort(a,n);
		c=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=0;
				c++;
			}
		}
			if(c==n)
				printf("NULL\n");
			else
			
			 {	for(i=0;i<n;i++)
			{
                if(a[i]!=0)
                {
                    printf("%d ",a[i]);
                }
            }printf("\n");
			}
	}
	
	
}
