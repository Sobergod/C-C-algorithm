#include"cstdio"
#include"iostream"
using namespace std;
int ans[1000000],n;
struct node
{
	int left,right,n;
}a[1000000];
void init(int l,int r,int i)
{
	a[i].left=l;
	a[i].right=r;
	a[i].n=0;
	if(l!=r)
	{
		int mid=(l+r)/2;
		init(l,mid,2*i);
		init(mid+1,r,2*i+1);
	}
}
void insert(int i,int x,int y)
{
	if(a[i].left==x&&a[i].right==y)
		a[i].n++;
	else
	{
		int mid=(a[i].left+a[i].right)/2;
		if(y<=mid)
			insert(2*i,x,y);
		else if(x>mid)
			insert(2*i+1,x,y);
		else
		{
			insert(2*i,x,mid);
			insert(2*i+1,mid+1,y);
		}

	}
}
void add(int x)
{
	int i;
	for(i=a[x].left;i<=a[x].right;i++)
	{
		ans[i]+=a[x].n;
	}
	if(a[x].left==a[x].right)
		return ;
	add(2*x);
	add(2*x+1);
}
int main()
{
   int x,y,i;
	   while(scanf("%d",&n),n)
	   {
		   init(1,n,1);
		   for(i=1;i<=n;i++)
		   {
			   scanf("%d%d",&x,&y);
			   insert(1,x,y);
		   }
		   memset(ans,0,sizeof(ans));
		   add(1);
		   printf("%d",ans[1]);
		   for(i=2;i<=n;i++)
			   printf(" %d",ans[i]);
		   printf("\n");
	   }
}