#include<stdio.h>
int main()
{
 int b;
 char c;
 while(scanf("%d\n",&b)!=EOF)      
 while(b--)
 {int a=0;
   while((c=getchar())!='\n')
   {
        if(c>='0'&&c<='9')
    a++;
   }
  printf("%d\n",a);
 } return 0;
}