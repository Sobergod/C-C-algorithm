#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int mtime,m,n,x1,y1,num[210][210];
int dir[4][2]={-1,0,1,0,0,-1,0,1};
char map[210][210];
struct node
{
	int x,y,time;
};
struct node queue[500001];
void bfs(struct node start)
{
	struct node cur,next;
	int head,tail,i;
	head=tail=0;
	queue[tail++]=start;
	while(head<tail)
	{
		cur=queue[head++];
		for(i=0;i<4;i++)
		{
			next.x=cur.x+dir[i][0];
			next.y=cur.y+dir[i][1];
			if(map[next.x][next.y]=='r'&&mtime>cur.time+1)
				mtime=cur.time+1;
			if(next.x>=0&&next.x<n&&next.y>=0&&next.y<m&&map[next.x][next.y]!='#')
			{
				if(num[next.x][next.y]>cur.time+1)
				{
					num[next.x][next.y]=cur.time;
					next.time=cur.time+1;
					if(map[next.x][next.y]=='x')
						next.time++;
					queue[tail++]=next;
				}
			}
		}
	}
}
int main()
{
	int i,j;
	struct node start;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
		{	scanf("%s",map[i]);
			for(j=0;j<m;j++)
		{
			num[i][j]=100000;
			if(map[i][j]=='a')
			{
				x1=i;
				y1=j;
			}
		}
	}
	start.x=x1;
	start.y=y1;
	start.time=0;
	mtime=100000;
	bfs(start);
	if(mtime==100000)
		 puts("Poor ANGEL has to stay in the prison all his life.");
	else
		printf("%d\n",mtime);
	}

	return 0;
}




	
