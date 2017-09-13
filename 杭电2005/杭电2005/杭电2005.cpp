#include<stdio.h>
int main()
{
	int i,j,k,m,t,sum,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&i,&j,&k)!=EOF)
		{
			sum=t=0;
			if((!(i%4) && (i%100) || !(i%400)) && (j>2))
		      t=1;
			for(m=0;m<j;m++)
			sum+=a[m];
		printf("%d\n",sum+k+t);
		}
	return 0;
}