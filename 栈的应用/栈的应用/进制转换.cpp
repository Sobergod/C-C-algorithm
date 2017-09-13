#include"stdio.h"
#include"stdlib.h"
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct{
	int *base;
	int *top;
	int stacksize;
}SqStack;
int main(){
	void InitStack(SqStack &S);
	int StackEmpty(SqStack S);
	void GetTop(SqStack S,int &e);
	void push(SqStack &S,int e);
	void pop(SqStack &S,int &e);
	void conversion(SqStack &S,int N,int n);
	int i,num;
	int N,n;
	SqStack s;
	InitStack(s);
	printf("请输入转换的十进制数：\n");
		scanf("%d",&N);
	printf("请输入要转换的进制数：\n");
		scanf("%d",&n);
	printf("%d转换为%d进制后是:\n",N,n);
	conversion(s,N,n);
}
void InitStack(SqStack &S){
	S.base=(int *)malloc(STACK_INIT_SIZE * sizeof(int));
	S.stacksize=STACK_INIT_SIZE;
	S.top=S.base;
}
int StackEmpty(SqStack S){
	if(S.base==S.top)
		return 1;
	else 
		return 0;
}
void GetTop(SqStack S,int &e){
	e=*(S.top-1);
}
void Push(SqStack &S,int e){
	if(S.top-S.base>=S.stacksize){
		S.base=(int *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(int));
		S.stacksize+=STACKINCREMENT;
	}
	*S.top++=e;
}
void pop(SqStack &S,int &e){
	if(S.top!=S.base)
		e=*--S.top;
}
void conversion(SqStack &S,int N,int n){
	InitStack(S);
	while(N){
	Push(S,N%n);
	N/=n;
	}
	int e;
	while(!StackEmpty(S)){
		pop(S,e);
		if(e>9){
		e+55;
		printf("%c",e);
		}
		else
		printf("%d",e);

	}
}


