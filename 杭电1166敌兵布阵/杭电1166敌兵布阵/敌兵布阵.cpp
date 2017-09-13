#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
	int left,right,n;
}node[100000];
void buildtree(int l,int r,int k)
{
	int mid;
	if(l==r)
	{
		node[k].left=l;
		node[k].right=r;
		node[k].n=0;
		return;
	}
	mid=(l+r)/2;
	node[k].left=l;
	node[k].right=r;
	node[k].n=0;
		buildtree(l,mid,2*k);
		buildtree(mid+1,r,2*k+1);
}
void insert(int n,int d,int k)
{
	int mid;
	if(node[k].left==node[k].right&&node[k].left==d)
	{
		node[k].n+=n;
		return;
	}
	mid=(node[k].left+node[k].right)/2;
	if(d<=mid)
		insert(n,d,2*k);
	else
		insert(n,d,2*k+1);
	node[k].n=node[2*k].n+node[2*k+1].n;
}
int ans;
void search(int l,int r,int k)
{
	int mid;
	if(node[k].left==l&&node[k].right==r)
	{
		ans+=node[k].n;
		return;
	}
	mid=(node[k].left+node[k].right)/2;
	if(r<=mid)
	{
		search(l,mid,2*k);
		search(mid+l,r,2*k+1)
}