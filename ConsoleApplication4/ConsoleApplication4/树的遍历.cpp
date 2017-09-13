#include"stack.h"
#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h> 
#define OK 1 
#define ERROR 0 
#define OVERFLOW -2 
#define MAX(a,b) (a>b?a:b) 
typedef char TElemType; 
typedef int Status; 
//二叉树的二叉链表存储结构 
typedef struct BiTNode{ 
   TElemType data; 
   struct BiTNode *lchild,*rchild; 
}BiTNode,*BiTree; 
//先序遍历生成二叉树 
Status CreatBiTree(BiTree &T){ 
   TElemType ch,temp; 
   printf("输入一个元素: "); 
   scanf("%c",&ch);  
   if(ch=='#') T=NULL; //输入#表示结点为空树 
   else{ 
     if(!(T=(BiTree)malloc(sizeof(BiTNode)))) exit(OVERFLOW); 
     T->data=ch; //生成根结点 
     CreatBiTree(T->lchild); //构造左子树 
     CreatBiTree(T->rchild); //构造右子树 
   } 
   return OK; 
} 
//打印元素 
Status PrintElem(BiTree T){
	if(T->data !='#'){
		printf("%c ",T->data);
		}
   return OK; 
} 
//先序遍历二叉树 
Status PreOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ //二叉树不为空时 
     if(Visit(T->data)) //访问根结点 
       if(PreOrderTraverse(T->lchild,Visit)) //先序遍历左子树 
         if(PreOrderTraverse(T->rchild,Visit)) return OK; //先序遍历右子树 
     return ERROR; 
   } 
   else return OK; 
} 
//中序遍历二叉树 
Status InOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ 
     if(InOrderTraverse(T->lchild,Visit)) 
       if(Visit(T->data)) 
         if(InOrderTraverse(T->rchild,Visit)) return OK; 
     else return ERROR; 
   } 
   return OK; 
} 
//后序遍历二叉树 
Status PostOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ 
     if(PostOrderTraverse(T->lchild,Visit)) 
       if(PostOrderTraverse(T->rchild,Visit)) 
         if(Visit(T->data)) return OK; 
     else return ERROR; 
   } 
   return OK; 
} 
//主函数 
void main() 
{ 
   BiTree T; 
   Status (* Visit)(TElemType); 
   CreatBiTree(T);
   printf("\n先序遍历:"); 
   PreOrderTraverse(T,Visit); 
   printf("\n中序遍历:"); 
   InOrderTraverse(T,Visit); 
   printf("\n后序遍历:"); 
   PostOrderTraverse(T,Visit); 
   printf("\n程序结束.\n"); 
}