#include"iostream"
#include"queue"
#include"cstring"
#include"cstdio"
using namespace std;
bool visit[105][105];
int a[5];
struct node
{
	int v[3],step;
};
void BFS()
{
	node c,b;
	c.v[0]=a[0];
	c.v[1]=c.v[2]=0;
	c.step=0;
	queue<node>q;
	memset(visit,0,sizeof(visit));
	visit[0][0]=1;
	q.push(c);
	while(!q.empty())
	{
		c=q.front();
		q.pop();
		if((c.v[0]==a[0]/2&&c.v[1]==a[0]/2)||(c.v[0]==a[0]/2&&c.v[2]==a[0]/2)||(c.v[1]==a[0]/2&&c.v[2]==a[0]/2))
		{
			printf("%d\n",c.step);return;
		}
		for(int i=0;i<3;i++)
			if(c.v[i]>0)
				for(int j=0;j<3;j++)
				{
					b=c;
					if(i==j) continue;
					if(b.v[i]+b.v[j]>a[j])
					{
						b.v[i]-=a[j]-b.v[j];
						b.v[j]=a[j];
					}
					else 
					{
						b.v[j]+=b.v[i];
						b.v[i]=0;
					}
					if(!visit[b.v[1]][b.v[2]])
					{
						visit[b.v[1]][b.v[2]]=1;
						b.step++;
						q.push(b);
					}
				}
	}
	printf("NO\n");
}
int main()
{
	while(~scanf("%d%d%d",&a[0],&a[1],&a[2]),a[0]||a[1]||a[2])
	{
		if(a[0]%2)
		{
			puts("NO");continue;
		}
		if(a[1]==a[2])
		{
			puts("1");continue;
		}
		BFS();
	}
	return 0;
}