#include"iostream"
#include"cstring"
using namespace std;
int main()
{
	char a[10000],b[1000][100];
	int i,j,k,t,m,n,sum;
	while(gets(a),a[0]!='#')
	{
		i=j=m=0;
		sum=0;
		while(a[i]!='\0')
		{
			if(a[i]!=' ')
			{
				for(j=i,n=0;a[j]!='\0'&&a[j]!=' ';j++,n++)
					b[m][n]=a[j];
				b[m][n]='\0';
				m++;
				i=j;
			}
			else
				i++;
		}
		for(i=1;i<=m;i++)
		{
			k=1;
			for(j=0;j<i;j++)
				if(strcmp(b[i],b[j])==0)
				{
					k=0;
					break;
				}
				if(k==1)
					sum++;
		}
		cout<<sum<<endl;
	}
}


