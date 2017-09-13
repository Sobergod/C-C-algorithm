#include<stdio.h>
int main()
{int a;
char b;
while(scanf("%d",&a)!=EOF)
{if(a>100||a<0)
{printf("Score is error!\n");continue;}
switch(a/10)
{case 10:
case 9:b='A';break;
case 8:b='B';break;
case 7:b='C';break;
case 6:b='D';break;
default:b='E';
}
printf("%c\n",b);}
return 0;
}

