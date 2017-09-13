#include<stdio.h>
int main()
{
	int i=10,j,flag;
	do
	{
		flag=1;
		j=2;
			do
			{
				if(i%j==0)flag=0;
				j++;
			}
			while(j<i&&flag);
			if(flag) printf("%3d",i);
			i++;
		}
		while(i<=20);
		return 0;
	}