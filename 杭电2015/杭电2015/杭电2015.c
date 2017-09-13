#include"stdio.h"
int main()
{
	int n,m,n1,n2,t1,t2;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		n1=1;n2=m;
		t1=n%m;
		t2=n/m;
		if(t1==0)
		{
			for(t2=n/m;t2>0;t2--)
			{
				if(t2!=1)
				printf("%d ",(n1+n2));
				if(t2==1)
					printf("%d\n",n1+n2);
				n1+=m;n2+=m;
			}
		}
		else
		{	
			while(t2--)
			{
				printf("%d ",(n1+n2));
					n1+=m;n2+=m;
			
			}
			if(t1==1)
				printf("%d\n",2*n1);
			else
				printf("%d\n",n1+n2-(m-2));
		}
	}
}
	