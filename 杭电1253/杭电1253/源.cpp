#include"iostream"
#include"cstdio"
#include"queue"
#include"cstring"
using namespace std;
int dric[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
int map[60][60][60];
int a,b,c,t;
typedef struct node
{
	int x,y,z;
	int times;
}node;
bool judge(int x,int y,int z)
{
	if(x>0&&x<=a&&y>0&&y<=b&&z>0&&z<=c&&map[x][y][z]==0)
		return true;
		return false;
}
void bfs()
{
	queue<node>s;
	node frt,net;
	while(!s.empty())s.pop();
	frt.x=1;
	frt.y=1;
	frt.z=1;
	frt.times=0;
	map[1][1][1]=1;
	s.push(frt);
	while(!s.empty())
	{
		frt=s.front();
		s.pop();
			for(int i=0;i<6;i++)
			{
				net.x=frt.x+dric[i][0];
				net.y=frt.y+dric[i][1];
				net.z=frt.z+dric[i][2];
				net.times=frt.times+1;
				if(judge(net.x,net.y,net.z))
				{
					if(net.x==a&&net.y==b&&net.z==c)
					{
						if(net.times<=t)
						{
							printf("%d\n",net.times);
							return;
						}
					}
					map[net.x][net.y][net.z]=1;
					s.push(net);
				}

			}
	}
	printf("-1\n");
}
int main()
{
	int casee;
	cin>>casee;
	while(casee--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&t);
		int num=0;
		for(int i=1;i<=a;i++)
			for(int j=1;j<=b;j++)
				for(int k=1;k<=c;k++)
				{
					scanf("%d",&map[i][j][k]);
						if(!map[i][j][k])
					if(!map[i][j][k])num++;
				}
				if(a+b+c>t+2||a+b+c>num+2)
				{
					printf("-1\n");
					continue;
				}
				bfs();
	}
	return 0;
}



