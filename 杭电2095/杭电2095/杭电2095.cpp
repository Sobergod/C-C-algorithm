#include<stdio.h>
int main()
{
    int t;
    int n,m;
    while(scanf("%d",&t)!=EOF&&t)
    {
        scanf("%d",&n);
        t--;
        while(t--)
        {
            scanf("%d",&m);
            n=m^n;
        }
        printf("%d\n",n);
    }
}