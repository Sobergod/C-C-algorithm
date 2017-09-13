#include"stdlib.h"
#include"stdio.h"
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct{
	int *base;
	int *top;
	int stacksize;
}SqStack;
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

