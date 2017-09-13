#include"stdio.h"
__int64 mac(__int64 a,__int64 b,__int64 c,__int64 d)
{
	a=a<b?a:b;
	c=c<d?c:d;
	return a<c?a:c;
}
void main()
{
	__int64 num[60000],i,j,k,t,m;	
	int s;
	i=j=k=t=1;
	num[1]=1;
	for(m=2;m<=5842;m++)
		{
			num[m]=mac(num[i]*2,num[j]*3,num[k]*5,num[t]*7);
			if(num[m]==num[i]*2)i++;
			if(num[m]==num[j]*3)j++;
			if(num[m]==num[k]*5)k++;
			if(num[m]==num[t]*7)t++;
	}

	while(scanf("%d",&s)&&s!=0)
	{
		if(s%10==1&&s%100!=11)
			printf("The %dst humber number is %I64d.\n",s,num[s]);
		else if(s%10==2&&s%100!=12)
			printf("The %dnd humber number is %I64d.\n",s,num[s]);
		else if(s%10==3&&s%100!=13)
			printf("The %drd humber number is %I64d.\n",s,num[s]);
		else
			printf("The %dth humber number is %I64d.\n",s,num[s]);
	}
}