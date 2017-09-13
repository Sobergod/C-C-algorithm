#include"stdio.h"
#include"string.h"
void main()
{
	char a[1001],b[1001];
	int a_l,b_l,i,j,k,t,c;
	while(scanf("%s %s",&a,&b))
	{
		if(a[0]=='#')
			break;
		t=0;
		a_l=strlen(a);
		b_l=strlen(b);
		for(i=0;i<a_l;i+=b_l)
		{
			c=0;
			for(j=0;j<b_l;j++)
			{
				if(b[j]==a[i+j])
				{
					c++;
				}
			}
				if(c==b_l)
				{
					t++;
				}
		}
		printf("%d\n",t);
	}
}