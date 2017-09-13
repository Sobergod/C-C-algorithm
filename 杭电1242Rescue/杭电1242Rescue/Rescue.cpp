#include"iostream"
#include"cstring"
#include"queue"
using namespace std;
int dric[4][2]={1,0,-1,0,0,1,0,-1};
char map[100][100];
int a,b,c;
typedef struct node
{
	int x,y;
	int time;
}node;
bool judge(int x,int y)
{
	if(x>0&&x<=a&&y>0&&y<=b&&map[x][y]=='r')
		return true;
		return false;
}
void bfs()
{
	queue<node>s;
	node net,frt;
	while(!+s.empty())
		s.pop();
	frt.x=1;
	frt.y=1;
	frt.time=0;
	map[1][1]=1;
	s.push(frt);
	while(!s.empty())
	{
		frt=s.front();
		s.pop();
		for(int i=0;i<4;i++)
		{
			net.x=frt.x+dric[i][0];
			net.y=frt.y+dric[i][1];
			if(map[net.x][net.y]=='#')
				net.time=frt.time+2;
			else
				net.time=frt.time+1;
		if(judge(net.x,net.y))
		{
			if(map[net.x][net.y]=='r')
				printf("%d\n",net.time);
			return ;
		}
		}map[net.x][net.y]=1;
		s.push(net);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int i,j;
		for(int i=0;i<a;i++)
				scanf("%s",map);

	
	bfs();
	}
	return 0;
}