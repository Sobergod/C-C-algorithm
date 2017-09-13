#include"iostream"
#include"string.h"
using namespace std;
int visit[10][10];
char map[10][10];
int ok,T,N,M;
void vis(int x,int y,int z)
{
	if(z>T||ok==1)
		return;
	else if(z==T)
	{
		if(map[x][y]=='D')
			ok=1;
	return;
	}
	else if(map[x][y]=='.'||map[x][y]=='S')
	{
		visit[x][y]=1;
			if(x+1>=0&&x+1<N&&y>=0&&y<M&&visit[x+1][y]==0) vis(x+1,y,z+1);
			if(x-1>=0&&x-1<N&&y>=0&&y<M&&visit[x-1][y]==0) vis(x-1,y,z+1);
			if(x>=0&&x<N&&y+1>=0&&y+1<M&&visit[x][y+1]==0) vis(x,y+1,z+1);
			if(x>=0&&x<N&&y-1>=0&&y-1<M&&visit[x][y-1]==0) vis(x,y-1,z+1);
			visit[x][y]=0;
	}
}
int main()
{
	while(cin>>N>>M>>T)
	{
		if(N==0&&M==0&&T==0)
			break;
		ok=0;
		for(int i=0;i<N;i++)
			cin>>map[i];
	memset(visit,0,sizeof(visit));
	int a=0,b=0;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			if(map[i][j]=='S')
				{
					a=i;
					b=j;
				}
	vis(a,b,0);
	if(ok==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
}
