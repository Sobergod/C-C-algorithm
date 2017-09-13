#include<stdio.h>
void main()
{
	int s[10]={78,83,61,94,85,89,72,97,47,76};
	int *p[]={s,s+1,s+2,s+3,s+4,s+5,s+6,s+7,s+8,s+9},i,j,*t;
	for(i=1;i<10;i++)
		for(j=0;j<10-i;j++)
			if(*p[j]<*p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
			for(i=0;i<10;i++)
				printf("%d ",p[i]);
			printf("\n");
}