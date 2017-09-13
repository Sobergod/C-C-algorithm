#include"stdio.h"
#include"string.h"
int n;
double s[1001][1001];
void floyd()
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
               if(s[i][j]<s[i][k]*s[k][j])
				   s[i][j]=s[i][k]*s[k][j];

}

int main()
{
	int a,b,c,d,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		memset(s,0,sizeof(s));
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				scanf("%lf",&s[i][j]);
		scanf("%d",&d);	
		floyd();
		for(i=1;i<=d;i++)
		{
			scanf("%d%d",&a,&b);
			if(s[a][b]==0)
			printf("What a pity!\n");
			else
				printf("%.3lf\n",s[a][b]);
		}
	}
}
