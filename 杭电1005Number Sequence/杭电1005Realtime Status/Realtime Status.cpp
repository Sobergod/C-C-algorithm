#include"stdio.h"
int main()
{
    int q[50]={0,1,1},a,b,n,i;
    while(scanf("%d%d%d",&a,&b,&n)&&(a!=0||b!=0||n!=0))
    {   
        for(i=3;i<=n;++i)
       {
		   q[i]=(a*q[i-1]+b*q[i-2])%7;
		  q[i-1]=q[i-2];
		  q[i-2]=q[i];
		}
        printf("%d\n",q[n]);
    }
    
}

