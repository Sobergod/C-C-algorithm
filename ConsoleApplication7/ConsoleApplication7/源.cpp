//�ĳ������������֮�⻹����������������
//1.void CreateMGraph(int v) ����ͼ�ĺ���������v��ʾͼ�еĶ�����
//2.void Map() ��ͼչʾ����,�������������ѧ��ƽ�����ͼ
//3.char Menu() ���˵���ʾ�ڲ�������(������һ���ַ����͵ĺ���)
//4.void Info() ���Ͻ��ܺ��������ڵ��û�ѡ���ѯ�ص�����ʱ����ص��������Ϣ
//5.void Display(int sight1,int sight2) ��ͼչʾ����
//���⻹����void Dijkstra(int num) �Ͻ�˹��������

#include <stdio.h>  //stdio.h�Ǳ�׼�������ͷ�ļ������õ���׼�����������ʱ����Ҫ�������ͷ�ļ�
#include <string.h> //C������������ַ�����ĺ��������ͷ�ļ�
#include <stdlib.h> //stdlib ͷ�ļ��������C��C  ���Ե���õ�ϵͳ����
#define Max 32767  //�궨����һ��·�����ֵ
#define NUM 15     //�궨��14�����㣬����Ϊ15�������



typedef struct VertexType{
	int number;//number��ʾ������
	char *sight;//�ַ������ʾ���������
}VertexType;//���嶥��Ľṹ������

typedef struct{
	VertexType vex[NUM]; //vex[NUM]����洢����
	int arcs[NUM][NUM];//����洢�ߵ�Ȩֵ
	int vexnum; //��ʾ����ĸ���
}MGraph; //����ͼ�Ľṹ������,MGraph:���ڽӾ���洢ͼ

MGraph G;

int P[NUM][NUM];//����ȫ�ֱ���P[NUM][NUM]�洢��֮������·��

long int D[NUM];//����ȫ�ֱ���D[NUM]�洢��֮�����·����Ȩֵ



void CreateMGraph(int v)//����ͼ�ĺ���
{
	int i,j;
	G.vexnum=v;
	for(i=1;i<G.vexnum;++i) //forѭ����Ϊ14������ϸ��Եľ�������
		G.vex[i].number=i; 
	G.vex[0].sight="������������";
	G.vex[1].sight="������У����";
	G.vex[2].sight="��ȪС��԰";
	G.vex[3].sight="��ѧ����������";
	G.vex[4].sight="����¥";
	G.vex[5].sight="����ѵ������";
	G.vex[6].sight="�й��óԳ�";
	G.vex[7].sight="��ʳ��";
	G.vex[8].sight="��ʳ��";
	G.vex[9].sight="�绪���㳡";
	G.vex[10].sight="һ��¥";
	G.vex[11].sight="�ۺϰ칫¥";
	G.vex[12].sight="�ٳ�";
	G.vex[13].sight="ͼ���";
	G.vex[14].sight="������ѧ¥";
	for(i=1;i<G.vexnum;++i)  //˫��forѭ��Ϊ�ܴﵽ�������㸳Ȩֵ
	{
		for(j=1;j<G.vexnum;++j)
			G.arcs[i][j]=Max;
	}
        G.arcs[1][2]=G.arcs[2][1]=241;
	G.arcs[1][3]=G.arcs[3][1]=214;
	G.arcs[1][9]=G.arcs[9][1]=524;
	G.arcs[2][3]=G.arcs[3][2]=121;
        G.arcs[2][5]=G.arcs[5][3]=512;
	G.arcs[2][9]=G.arcs[9][2]=697;
	G.arcs[3][5]=G.arcs[5][3]=512;
	G.arcs[3][9]=G.arcs[9][3]=708;
	G.arcs[4][5]=G.arcs[5][4]=642;
	G.arcs[4][12]=G.arcs[12][4]=753;
	G.arcs[4][10]=G.arcs[10][4]=213;
	G.arcs[5][6]=G.arcs[6][5]=324;
	G.arcs[5][8]=G.arcs[8][5]=415;
	G.arcs[6][7]=G.arcs[7][6]=56;
	G.arcs[6][8]=G.arcs[8][6]=64;
	G.arcs[6][11]=G.arcs[11][6]=125;
	G.arcs[6][9]=G.arcs[9][6]=156;
	G.arcs[7][8]=G.arcs[8][7]=46;
	G.arcs[9][10]=G.arcs[10][9]=241;
	G.arcs[9][11]=G.arcs[11][9]=157;
        G.arcs[9][14]=G.arcs[14][9]=362;
	G.arcs[10][12]=G.arcs[12][10]=650;
	G.arcs[11][14]=G.arcs[14][11]=412;
	G.arcs[12][13]=G.arcs[13][12]=754;
	G.arcs[13][14]=G.arcs[14][13]=162;
}

void Map()//��ͼչʾ����
{   printf("  ���������������������������������������� \n \n");
	printf("\t��������������������13-1�� ���ݽṹ���� --������.��־�ը���������������  \n \n");
    printf("\t��x��x��x�� �x�� �x��x�� ӭ �� �� ��x��x��x�� �x�� �x��x��   \n \n");
	printf("\t       �����������ѧ��У��ͼ����ϵͳ ���������        \n");
	printf("                                                                        \n");  
	printf("                                                                        \n");
	printf("     ��������13ͼ��ݩ�������14������ѧ¥��������������                 \n");
	printf("    ��                         ��                      ��               \n");
	printf("    ��                         ��                      ��               \n");
	printf("  12�ٳ�                       ��                      ��               \n");
	printf("    ��                         ��                      ��               \n");
	printf("    ��                         ��                   11�ۺϰ칫¥        \n");
        printf("    ��                         ��                      ��               \n");
	printf("     ���� 10һ��¥������ 9�绪���㳡 ��������������������               \n");
	printf("    ��                         ��                  6�й��óԳǩ�7��ʳ�� \n");
	printf("    ��                         ��                      ��          ��   \n");
	printf("    ��                         ��                      ��������8��ʳ��  \n");
	printf("    ��                         ��                      ��               \n");
	printf("    ��                         ��                      ��               \n");
        printf("    ��                         ��                      ��               \n");
	printf("     ������4����¥ �������������������������������� 5����ѵ������       \n");
	printf("                   ��          ��                      ��               \n");
	printf("                   ��          ��                      ��               \n");
	printf("                   ��          ��                      ��               \n");
	printf("            2��ȪС��԰������������������������ 3 ��ѧ����������        \n");
	printf("                   ��          ��                     ��                \n");
	printf("                   ��          ��                     ��                \n");
	printf("                   ��          ��                     ��                \n");
	printf("                   ��          ��                     ��                \n");
	printf("                   ��          ��                     ��                \n");
	printf("                   ��          ��                     ��                \n");
	printf("                    ��������1������У���ũ�������������               \n  \n");
}//����printf����������������ͼ�������

void Info()//���Ͻ��ܺ���
{
 int n;
    printf("�������������Ҫ��ѯ�Ĵ���:\n");
	scanf("%d",&n);
    printf("����������ѯ�ľ������:  ");
	int a;
	while(n--)//whileѭ����ֱ����ѯ�������꼴n=0�ǽ�����ѭ��
	{
        scanf("%d",&a);
	if(a==1)	printf("�� �� ������У���� �� �����ֵ͵�,������ʷ�Ļ���Ϣ\n\n");
	else if(a==2)	printf("�ڡ� ��ȪС��԰��   ��ʮ�����԰���������Ȫ�������н���,���ǵ�����ʤ��\n\n");
	else if(a==3)	printf("�ۡ� ��ѧ���������ģ�  ���۸������ѧϰ��Ʒ�����п���շ��������� \n \n");
	else if(a==4)	printf("�ܡ� ����¥��         ���и�����ѧԺ��ί�칫�Һ͵�Ժ����еԺ��ϰ��\n\n");
	else if(a==5)	printf("�ݡ�  ����ѵ�����ģ�   ���и��ֻ�е�豸��Ϊ��еѧԺʵϰ����\n\n");
	else if(a==6)	printf("�ޡ�  �й��óԳǣ�   ��ɰ������������������̵ȷ�ζС�Ե���\n\n");
	else if(a==7)	printf("�ߡ�  ��ʳ�ã�      ���л�����ɫ�˺ͺ��ͷ�ζ����\n\n");
	else if(a==8)	printf("���  ��ʳ�ã�      ���������ۣ������棬������ȼҳ�С�Ե��� \n\n");
	else if(a==9)	printf("���  �绪���㳡��  �б�У��־�Ե���-�绪�� \n\n");
	else if(a==10)	printf("���  һ��¥��     Ϊ��У����ѧԺ��ʵ����� \n\n");
	else if(a==11)	printf("�ϡ�  �ۺϰ칫¥�� ΪѧУ�칫��¥�����вƻ��Һ�ѧУѧ���ҵ�  \n \n");
	else if(a==12)	printf("�С�  �ٳ���      �����ܽ��ٳ���Ϊѧ���������Ρ�����ʱ�ĳ��� \n\n");
	else if(a==13)	printf("�ѡ�  ͼ��ݣ�    ͼ��ݹ���¥��һ¥Ϊ���������ң�����¥Ϊ������ \n\n");
	else if(a==14)	printf("�ҡ�  ������ѧ¥����ǽ���޺ã�Ϊ��У��߽������ڽ���Ϊ�󲿷ֿγ̵��Ͽεص� \n\n");
	}
  
}

void Dijkstra(int num)//�Ͻ�˹�����㷨���·��
{
	int v,w,i,t;//�����ĸ��������ں����ѭ�����
	int final[NUM];//�յ㼯Ԫ�ؼ���
	int min;//����һ����Сֵ����
	for(v=1;v<NUM;v++)
	{
		final[v]=0; //��ʼ�����·���յ㼯
		D[v]=G.arcs[num][v];//��ʼ�����·�����ȣ�����num���㵽��v���㸳ֵ��D[v]
		for(w=1;w<NUM;w++) 
			P[v][w]=0;//��ʼ�����·������0��ֵ����v���w�����������·��
		if(D[v]<Max)//�����num�����㵽��v�������ȨֵС�ں궨������ֵ
		{
			P[v][num]=1;//�����ж�������v�����num�������Ҳ�������·��
			P[v][v]=1; //��v�����㵽��v�������Ҳ�������·�����ܵ��
		}
	}
	D[num]=0;//����num���ڵ㵽��������·����ֵΪ����������ʼ����
	final[num]=1;//��num��ֵΪ��1������һ���ڵ���Ϊ�յ㼯Ԫ��
	for(i=1;i<NUM;++i)
	{
		min=Max; //���궨�����ֵ��ֵ���������С·������
		for(w=1;w<NUM;++w)
			if(!final[w])//����w���ڵ㲻�����յ㼯
				if(D[w]<min)//����num���ڵ���w���ڵ����С·��С�ں궨�����ֵ
				{
					v=w;//��w��ֵ��������v
					min=D[w];//��С·��Ϊ����ѭ������������ڵ����С·��
				}
				final[v]=1; //����v���ڵ㣨Ҳ���Ǳ���ѭ��ִ�еĽڵ㣩�����յ㼯��
				for(w=1;w<NUM;++w)
					if(!final[w]&&((min+G.arcs[v][w])<D[w]))//�����w���ڵ㲻�����յ㼯�ҵ�num���㵽
                                        //��v������ϵ�v���ڵ㵽��w���ڵ��ȨֵС�ڵ�num���ڵ㵽��w���ڵ��Ȩֵ
					{
						D[w]=min+G.arcs[v][w];//ˢ�µ�num���ڵ㵽��w���ڵ�����·��
						for(t=0;t<NUM;t++)
					          P[w][t]=P[v][t];//���µó���������Сֵ����ԭ��������Сֵ��ˢ�����·����
						P[w][w]=1;//��������ͬ�ڵ�֮��Ҳ�������·��
					}
	}
}

char Menu()//���˵�
{
	char c;
	int flag;
	do{
	    system("cls");//������������ͷ�ļ�stdlib.h�µĺ���
	    flag=1;
	    Map();
	    printf("\t\t���� ��ӭʹ�ñ�����ѧ��У������ͼϵͳ ����\n");
	    printf("\t\t ����  1.��ѯ�ص�֮�����·��       ���� \n");
	    printf("\t\t  ���   2.������ѧ��У���������     ���\n");
	    printf("\t\t    ��� e.�˳�                      ��� \n");
            printf("\t\t\t    �� ����������ѡ�� �");
	    scanf("%c",&c);//�Ӽ��̼���һ���ַ������Ϊ1��2��e�Ļ���flagΪ0������ѭ��ִ�ж�Ӧ�����ݣ�����һֱѭ��������Ӧ
		if(c=='1'||c=='2'||c=='e')
			flag=0;
	}while(flag);
	return c;//�ַ����ຯ������ֵΪ������ʼ��������ַ�c����������ִֵ�ж�Ӧ����
}

void Display(int sight1,int sight2)//���������sight1��sight2Ϊ14���������������������
  {                                 
	int a,b,c,d,q=0;
	a=sight2; 
	if(a!=sight1)//�������·��Ҫ�������������ǲ���ͬһ����.�Ⱦ����ж�
	{
		printf("\n\t���%s��%s�����·����",G.vex[sight1].sight,G.vex[sight2].sight);
		printf("\t(����̾���Ϊ %dm.)\n\n\t",D[a]); 
		printf("\t%s",G.vex[sight1].sight); 
		d=sight1;
		for(c=0;c<NUM;++c)
		{
			P[a][sight1]=0;
			for(b=0;b<NUM;b++)
			{
				if(G.arcs[d][b]<Max&&P[a][b])
				{
					printf("-->%s",G.vex[b].sight); 
					q=q+1;
					P[a][b]=0;
					d=b; 
					if(q%8==0) printf("\n");
				}
			}
		}
	}
}

void main()//������
{system("color 71");
	int v0,v1;
	char e;
	char ck;
	CreateMGraph(NUM);
	do
	{
		system("cls");
		ck=Menu();
		switch(ck)
		{
		case '1':
gate:
			system("cls");
			Map();
			do
			{
				printf("\n\n\t\t\t����ѡ���������ţ�1��14����");
				scanf("%d",&v0);
				if(v0<1||v0>14)
					printf("\n\n\t\t\t\t���������!\n");
			}while(v0<1||v0>14);
			do
			{
				printf("\t\t\t����ѡ��Ŀ�ĵ���ţ�1��14����");
				scanf("%d",&v1);
				if(v1<1||v1>14||v1==v0)
					printf("\n\n\t\t\t\t���������!\n");
			}while(v1<1||v1>14||v1==v0);
			Dijkstra(v0);
			Display(v0,v1);
			printf("\n\n\t\t\t\t����Ҫ�����밴�س���,�˻���ҳ�밴e\n");
			getchar();
			scanf("%c",&e);
			if(e=='e')
				break;
			goto gate;
		case'2':
			system("cls");
			Info();
			printf("\n\n\t\t\t\t���밴e��������ҳ...\n");
			getchar();
			scanf("%c",&e);
			if(e=='e')
				break;
			goto gate;
			break;
		};
	}while(ck!='e');
}