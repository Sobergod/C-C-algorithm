#include<iostream>
using namespace std;
double min(double x,double y)
{
	return x<y?x:y;
}
double max(double x,double y)
{
	return x>y?x:y;
}
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double min_x1,min_y1,min_x2,min_y2,max_x1,max_y1,
		max_x2,max_y2,h,d;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{
		min_x1=min(x1,x2);
		min_x2=min(x3,x4);
		min_y1=min(y1,y2);
		min_y2=min(y3,y4);
		max_x1=max(x1,x2);
		max_x2=max(x3,x4);
		max_y1=max(y1,y2);
		max_y2=max(y3,y4);
		if(min_x1>=max_x2||min_y1>=max_y2||
			min_x2>=max_x1||min_y2>=max_y1)
			cout<<"0.00"<<endl;
		else
		{
			d=min(max_x1,max_x2)-max(min_x1,min_x2);
			h=min(max_y1,max_y2)-max(min_y1,min_y2);
			if(d*h<0)
				printf("%.2lf",-d*h);
			else
			printf("%.2lf\n",d*h);
		}
	}
}





