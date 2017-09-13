#include"stdio.h"
#include"string.h"
int main()
{
	char a[10000];
	__int64 i,j,k,t;
	scanf("%I64d\r",&t);
	while(t--)
	{
		gets(a);
		k=strlen(a);
		if(a[0]!=' ')
		{if(a[0]>='a'&&a[0]<='z')
		printf("%c",a[0]-32);
		else
			printf("%c",a[0]);
		for(i=1;i<k;i++)
			{if(a[i]==' '&&a[i+1]!=' ')
				{if(a[i+1]>='a'&&a[i+1]<='z')
				printf("%c",a[i+1]-32);
				else
					printf("%c",a[i+1]);
				}
			}
		}
		else
		for(i=0;i<k;i++)
			{if(a[i]==' '&&a[i+1]!=' '&&a[i+1]!='\0')
				{if(a[i+1]>='a'&&a[i+1]<='z')
				printf("%c",a[i+1]-32);
				else
					printf("%c",a[i+1]);
				}
			}
		printf("\n");
	}
}
#include"stdio.h"
#include"string.h"
int main()
{
char a[10000];
__int64 i,j,k,t;
scanf("%I64d\r",&t);
while(t--)
{
gets(a);
k=strlen(a);
if(a[0]!=' ')
            {if(a[0] >= 'a' && a[0] <= 'z')
                printf("%c",a[0]-32);
            else if(a[0] >= 'A' && a[0] <= 'Z')
                printf("%c",a[0]);
            for(i=1;i<k;i++){
                if(a[i]==' '&&a[i+1]!=' '){
                    if(a[i+1]>='a'&&a[i+1]<='z')
                        printf("%c",a[i+1]-32);
                    else if(a[i + 1] >= 'A' && a[i + 1] <= 'Z' )
                        printf("%c",a[i+1]);
                    }
                }
            }
else
for(i=0;i<k;i++){
    if(a[i]==' '&&a[i+1]!=' '&&a[i+1]!='\0'){
    if(a[i+1]>='a'&&a[i+1]<='z')
                    printf("%c",a[i+1]-32);
                else if(a[i + 1] >= 'A' && a[i + 1] <= 'Z' )
printf("%c",a[i+1]);
}
}
printf("\n");
}
}