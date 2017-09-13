#include"stdio.h"
int main()
{
	int i,k,t,n,a[101],b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&k,&b);
		for(i=0;i<k;i++)
		scanf("%d",&a[i]);
		for(i=0;i<k;i++)
		if(a[i]<a[0])
		{
			t=a[i];a[i]=a[0];a[0]=t;
		}
		
		printf("%d\n",(100-a[0])*(100-a[0]));
	}
}
