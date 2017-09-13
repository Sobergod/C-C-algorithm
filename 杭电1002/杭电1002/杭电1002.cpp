#include"stdio.h"
#include"string.h"
#define N 1024
void main()
{
	
	char s1[N],s2[N];
	int i,j,k,t,c,n,m=1;
	scanf("%d",&n);
	while(n--)
	{ 
		int a[N]={0},b[N]={0};
		printf("Case %d:\n",m);
	scanf("%s %s",s1,s2);
	i=strlen(s1);j=strlen(s2);
	if(i<j)
		k=j;
	else
		k=i;
		c=k;
	for(t=0;t<i;k--,t++)
		a[k]=s1[i-1-t]-'0';
	for(k=c,t=0;t<j;k--,t++)
		b[k]=s2[j-1-t]-'0';
	for(i=c;i>=0;i--)
		{
			a[i]+=b[i];
		if(a[i]>=10)
		{
			a[i]-=10;
			a[i-1]++;
		}
	}
	if(a[0]!=0)
		{
			printf("%s + %s = ",s1,s2);
			for(i=0;i<=c;i++)
			printf("%d",a[i]);
			printf("\n");
		}
	else
		{
			printf("%s + %s = ",s1,s2);
			for(i=1;i<=c;i++)
			printf("%d",a[i]);
			printf("\n");
		}
	m++;
	if(n!=0)
		printf("\n");
	}
}

		


	
