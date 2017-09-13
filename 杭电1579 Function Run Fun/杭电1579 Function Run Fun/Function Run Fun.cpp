#include"stdio.h"
int rec(int a,int b,int c)
{
	int w[21][21][21],i,j,k;
	if(a<=0||b<=0||c<=0)
		return 1;
	if(a>20||b>20||c>20)
		a=b=c=20;
	for(i=0;i<=20;i++)
		for(j=0;j<=20;j++)
			w[i][j][0]=w[i][0][j]=w[0][i][j]=1;
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++)
			for(k=1;k<=c;k++)
			{	if(i<j&&j<k)
				w[i][j][k]=w[i][j][k-1]+w[i][j-1][k-1]-w[i][j-1][k];
				else
				w[i][j][k]=w[i-1][j][k]+w[i-1][j-1][k]+w[i-1][j][k-1]-w[i-1][j-1][k-1];
			}return w[a][b][c];
}
int main()
{
	int n,m,t;
	while(scanf("%d%d%d",&n,&m,&t),n!=-1||m!=-1||t!=-1)
	{
		printf("w(%d, %d, %d) = %d\n",n,m,t,rec(n,m,t));
	}
}
