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
//�������Ķ�������洢�ṹ 
typedef struct BiTNode{ 
   TElemType data; 
   struct BiTNode *lchild,*rchild; 
}BiTNode,*BiTree; 
//����������ɶ����� 
Status CreatBiTree(BiTree &T){ 
   TElemType ch,temp; 
   printf("����һ��Ԫ��: "); 
   scanf("%c",&ch);  
   if(ch=='#') T=NULL; //����#��ʾ���Ϊ���� 
   else{ 
     if(!(T=(BiTree)malloc(sizeof(BiTNode)))) exit(OVERFLOW); 
     T->data=ch; //���ɸ���� 
     CreatBiTree(T->lchild); //���������� 
     CreatBiTree(T->rchild); //���������� 
   } 
   return OK; 
} 
//��ӡԪ�� 
Status PrintElem(BiTree T){
	if(T->data !='#'){
		printf("%c ",T->data);
		}
   return OK; 
} 
//������������� 
Status PreOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ //��������Ϊ��ʱ 
     if(Visit(T->data)) //���ʸ���� 
       if(PreOrderTraverse(T->lchild,Visit)) //������������� 
         if(PreOrderTraverse(T->rchild,Visit)) return OK; //������������� 
     return ERROR; 
   } 
   else return OK; 
} 
//������������� 
Status InOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ 
     if(InOrderTraverse(T->lchild,Visit)) 
       if(Visit(T->data)) 
         if(InOrderTraverse(T->rchild,Visit)) return OK; 
     else return ERROR; 
   } 
   return OK; 
} 
//������������� 
Status PostOrderTraverse(BiTree T,Status (* Visit)(TElemType e)){ 
   if(T){ 
     if(PostOrderTraverse(T->lchild,Visit)) 
       if(PostOrderTraverse(T->rchild,Visit)) 
         if(Visit(T->data)) return OK; 
     else return ERROR; 
   } 
   return OK; 
} 
//������ 
void main() 
{ 
   BiTree T; 
   Status (* Visit)(TElemType); 
   CreatBiTree(T);
   printf("\n�������:"); 
   PreOrderTraverse(T,Visit); 
   printf("\n�������:"); 
   InOrderTraverse(T,Visit); 
   printf("\n�������:"); 
   PostOrderTraverse(T,Visit); 
   printf("\n�������.\n"); 
}