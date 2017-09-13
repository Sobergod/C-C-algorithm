#include<stdio.h>
int main()
{
	long int n,i,j,k,a[1000],m;
	scanf("%d",&m);
	while(m--)
	{scanf("%ld",&n);
	
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		for(k=1;k<=10000000000;k++)
		{		j=0;
			for(i=0;i<n;i++)
				{if(k%a[i]==0)
				j++;}
		if(j==n)
		{printf("%ld\n",k);break;}
	}}
	return 0;
}


	