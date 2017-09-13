#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
#define N 100000
#define MAX 100000000
#define PI 3.1415926535
double r;
struct Node
{
    int x,y;
}node[N],stack[N];
double dis(Node a,Node b)
{
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);    
}
int multi(Node p1,Node p2,Node p0)
{
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);     
}
bool cmp(Node a,Node b)
{
    if(multi(a,b,node[0])>0)
    return 1;
    if(multi(a,b,node[0])==0&&dis(a,node[0])<dis(b,node[0]))
    return 1;
    return 0;    
}    
void Graham_scan(int n)
{
    int min=MAX;
    int k;
	double sum=0.0;
    for(int i=0;i<n;i++)
    {
        if(node[i].y<min||node[i].y==min&&node[i].x<node[k].x)
        {
            k=i;
            min=node[i].y;                 
        }
    }
    Node temp=node[0];
    node[0]=node[k];
    node[k]=temp;
    sort(node+1,node+n,cmp);
    stack[0]=node[0];
    stack[1]=node[1];        
	int top=1;
    for(int i=2;i<n;i++)
    {
        while(top>1&&multi(node[i],stack[top],stack[top-1])>=0)
        top--;                   
        stack[++top]=node[i];
    } 
	for(int i=0;i<top;i++)
		{
			sum+=sqrt((double)dis(stack[i],stack[i+1]));
		}
		sum+=sqrt((double)dis(stack[top],stack[0]))	;
		sum+=PI*2.0*r;
			printf("%.0lf\n",sum);
			
	
}
int main()
{
    int n,i,t;
    scanf("%d",&t);
	while(t--)
	{
		scanf("%d%lf",&n,&r);
        for(int i=0;i<n;i++)
        scanf("%d %d",&node[i].x,&node[i].y);
		Graham_scan(n);
		
		if(t)printf("\n");	
    }
	return 0;
}
