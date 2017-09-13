#include"iostream"
#include"cstring"
#include"cstdio"
using namespace std;
int dd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int i,j,k,t,n,y,d,m,man,woman,d1,d2,y1,y2,m1,m2;
	scanf("%d",&t);
	while(t--)
	{
		d1=24,d2=24,y1=2013,y2=2013,m1=3,m2=3;
		scanf("%d",&d);
	man=d;
	woman=d;
	d2=24,y2=2013,m2=3;
	while(woman--)
	{
		if(y2%4==0&&y2%100!=0||(y2%400==0))
			dd[2]=29;
		else
			dd[2]=28;
		d2++;
		if(d2>dd[m2])
		{
			m2++;
				if(m2>12)
				{
					m2=1;
					y2++;
				}
				d2=1;
		}
	}
	printf("%04d/%02d/%02d ",y2,m2,d2);
	d1=24,y1=2013,m1=3;
	while(man--)
	{
		if(y1%4==0&&y1%100!=0||(y1%400==0))
			dd[2]=29;
		else
			dd[2]=28;
		d1--;
		if(d1<=0)
		{
			m1--;
				if(m1<=0)
				{
					m1=12;
					y1--;
				}
				d1=dd[m1];
		}
	}
	printf("%04d/%02d/%02d\n",y1,m1,d1);
	}
}


