#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define max(x1, y1) ((x1) > (y1) ? (x1) : (y1))  
#define min(x1, y1) ((x1) < (y1) ? (x1) : (y1))  
#define MAX_NUM 200002
typedef struct
{
	int max;
	int left,right;

}node;
int n,m;
int num[MAX_NUM];
node tree[MAX_NUM*20];
int build(int root,int l,int r)
{
	int mid;
	tree[root].left=l;
	tree[root].right=r;
	if(l==r)
	{
		return tree[root].max=num[l];
	}
	mid=(l+r)/2;
	int a,b;
	a=build(2*root,l,mid);
	b=build(2*root+1,mid+1,r);
	return tree[root].max=max(a,b);
} 
int find(int root,int l,int r)
{
	int mid;
	if(tree[root].left>r||tree[root].right<l)
		return 0;
	if(l<=tree[root].left&&tree[root].right<=r)
		return tree[root].max;
	int a,b;
	a=find(2*root,l,r);
	b=find(2*root+1,l,r);
	return max(a,b);
}
int update(int root,int pos,int val)
{
	if(pos<tree[root].left||tree[root].right<pos)
		return tree[root].max;
	if(tree[root].left==pos&&tree[root].right==pos)
		return tree[root].max=val;
	int a,b;
	a=update(2*root,pos,val);
	b=update(2*root+1,pos,val);
	tree[root].max=max(a,b);
	return tree[root].max;

}
int main ()
{
	char c ;
	int i ;
	int x, y ;
	while (scanf ("%d%d", &n, &m) != EOF)
	{
		for (i = 1 ; i <= n ; ++i)
			scanf ("%d", &num[i]) ;
		build (1, 1, n) ;

		for (i = 1 ; i <= m ; ++i)
		{
			getchar () ;
			scanf ("%c%d%d", &c, &x, &y) ;
			if (c == 'Q')
			{
				printf ("%d\n", find (1, x, y)) ;
			}
			else
			{
				num[x] = y ;
				update (1, x, y) ;
			}
		}
	}
	return 0 ;
}