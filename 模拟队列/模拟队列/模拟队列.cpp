int a[10],i,b[10]={0};
int front()
{
	return a[0];
}
void pop()
{

int k=0;
a[k+1]=a[k];
};
void push()
{ 
	for(int j=0;j<i;j++)
	b[j]=a[j];
}
int empty()
{
	for(i=0;i<10;i++)
	if(b[i]==0)
		return 1;
	else 
		return 0;
}

	