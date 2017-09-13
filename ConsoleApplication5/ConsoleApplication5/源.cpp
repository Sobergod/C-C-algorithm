#include"stdio.h"
#include"stdlib.h"

#define MAX_TREE_SIZE 100
#define MAXSIZE 100
typedef char TelemType;
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
typedef struct BiTNode
{
  TelemType data;
  struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
typedef void(*Visit)(BiTree);
void Init_BiTree(BiTree *T)
{
   *T = NULL;
}
int IsEmpty_BiTree(BiTree *T)
{
  return *T == NULL;
}
void Create_BiTree(BiTree *T)
{
     char ch;
	 ch=getchar();
     if(ch=='#')
		 *T=NULL;
	 else
	 {
	    *T=(BiTree)malloc(sizeof(BiTNode));
		(*T)->data=ch;
		Create_BiTree(&(*T)->lchild);
		Create_BiTree(&(*T)->rchild);
	 }
}
void Print_BiTreeNode(BiTree T){
	printf("%c  ",T->data);
}
//xian
void PreOrder_BiTree(BiTree T,Visit visit)
{
   if(!IsEmpty_BiTree(&T))
   {
      visit(T);
	  PreOrder_BiTree(T->lchild,visit);
      PreOrder_BiTree(T->rchild,visit);
   }
}
//zhong
void InOrder_BiTree(BiTree T,Visit visit)
{
   if(!IsEmpty_BiTree(&T))
	 
	{InOrder_BiTree(T->lchild,visit); 
	visit(T);
    InOrder_BiTree(T->rchild,visit);}
}
//hou
void PostOrder_BiTree(BiTree T,Visit visit)
{
   if(!IsEmpty_BiTree(&T))
	 {
	  PostOrder_BiTree(T->lchild,visit);
      PostOrder_BiTree(T->rchild,visit); 
	  visit(T);}
}
int main(){
	BiTree T;
	Init_BiTree(&T);
	Create_BiTree(&T);
	printf("先序遍历二叉树：");
	PreOrder_BiTree(T,Print_BiTreeNode);
	printf("\n");
	printf("中序遍历二叉树：");
	InOrder_BiTree(T,Print_BiTreeNode);
	printf("\n");
	printf("后序遍历二叉树：");
	PostOrder_BiTree(T,Print_BiTreeNode);
	printf("\n");
	return 0;
}