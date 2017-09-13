#include"stdio.h"
int main()
{
	int AH,AM,AS,BH,BM,BS,i,h,m,s;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);
		s=AS+BS;m=AM+BM;h=AH+BH;
		if(s>=60)
		{	m=m+1;
			s=s%60;
		}
		if(m>=60)
		{
			h=h+1;
			m=m%60;
		}
		printf("%d %d %d\n",h,m,s);
	}
}
		