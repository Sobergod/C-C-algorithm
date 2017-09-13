#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define null 0;
typedef struct QNode{
	int data;
	struct QNode *next;
}QNode,*QueuePtr;
typedef struct{
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;
LinkQueue Q;
int InitQueue(){
	Q.front = (QueuePtr)malloc(sizeof(QNode));
	Q.rear=Q.front;
	if(!Q.front)return(OVERFLOW);
	Q.front->next=null;
	return OK;
}
int EnQueue(int e){
	QueuePtr p;
	p=(QueuePtr)malloc(sizeof(QNode));
	if(!p)return(OVERFLOW);
	p->data=e;
	p->next=null;
	Q.rear->next=p;
	Q.rear=p;
	printf("%d",e);
	return OK;
}
int DeQueue(int e){
	QueuePtr p;
	if(Q.front==Q.rear) return ERROR;
	p=Q.front->next;
	e=p->data;
	Q.front->next=p->next;
	if(Q.rear==p) Q.rear=Q.front;
	printf("%d",e);
	free(p);
	return OK;
}
void main(){
	int i,e;
	InitQueue();
	for(i=0;i<5;i++){
		EnQueue(i);
	}
	scanf("%d",&e);
	EnQueue(e);
	DeQueue(e);
	printf("\n");
}
