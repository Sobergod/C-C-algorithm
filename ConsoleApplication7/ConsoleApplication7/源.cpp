//改程序除了主函数之外还有这样几个函数：
//1.void CreateMGraph(int v) 创建图的函数，其中v表示图中的顶点数
//2.void Map() 地图展示函数,用于输出北华大学的平面简略图
//3.char Menu() 主菜单显示于操作界面(定义了一个字符类型的函数)
//4.void Info() 资料介绍函数，用于当用户选择查询地点资料时输出地点的资料信息
//5.void Display(int sight1,int sight2) 地图展示函数
//此外还用了void Dijkstra(int num) 迪杰斯特拉函数

#include <stdio.h>  //stdio.h是标准输入输出头文件，当用到标准输入输出函数时，就要调用这个头文件
#include <string.h> //C语言里面关于字符数组的函数定义的头文件
#include <stdlib.h> //stdlib 头文件里包含了C、C  语言的最常用的系统函数
#define Max 32767  //宏定义了一个路径最大值
#define NUM 15     //宏定义14个顶点，定义为15方便操作



typedef struct VertexType{
	int number;//number表示顶点编号
	char *sight;//字符数组表示顶点的名称
}VertexType;//定义顶点的结构体类型

typedef struct{
	VertexType vex[NUM]; //vex[NUM]数组存储顶点
	int arcs[NUM][NUM];//矩阵存储边的权值
	int vexnum; //表示顶点的个数
}MGraph; //定义图的结构体类型,MGraph:以邻接矩阵存储图

MGraph G;

int P[NUM][NUM];//定义全局变量P[NUM][NUM]存储点之间的最短路径

long int D[NUM];//定义全局变量D[NUM]存储点之间最短路径的权值



void CreateMGraph(int v)//创建图的函数
{
	int i,j;
	G.vexnum=v;
	for(i=1;i<G.vexnum;++i) //for循环，为14顶点加上各自的景点名称
		G.vex[i].number=i; 
	G.vex[0].sight="各个景点名字";
	G.vex[1].sight="北华北校大门";
	G.vex[2].sight="喷泉小公园";
	G.vex[3].sight="大学生服务中心";
	G.vex[4].sight="二教楼";
	G.vex[5].sight="工程训练中心";
	G.vex[6].sight="中国好吃城";
	G.vex[7].sight="四食堂";
	G.vex[8].sight="三食堂";
	G.vex[9].sight="风华杯广场";
	G.vex[10].sight="一教楼";
	G.vex[11].sight="综合办公楼";
	G.vex[12].sight="操场";
	G.vex[13].sight="图书馆";
	G.vex[14].sight="第三教学楼";
	for(i=1;i<G.vexnum;++i)  //双重for循环为能达到两个顶点赋权值
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

void Map()//地图展示函数
{   printf("  ☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆ \n \n");
	printf("\t▽▽▽▽▽▽▽▽▽计13-1班 数据结构课设 --刘萌萌.刘志刚▽▽▽▽▽▽▽▽  \n \n");
    printf("\t★▁★▁★▁★ ▁★ ▁★▁欢 迎 来 到 ★▁★▁★▁★ ▁★ ▁★▁★   \n \n");
	printf("\t       ☆☆☆☆☆☆☆北华大学北校地图导航系统 ☆☆☆☆☆☆☆☆        \n");
	printf("                                                                        \n");  
	printf("                                                                        \n");
	printf("     ━━━━13图书馆━━━━14第三教学楼━━━━━━━                 \n");
	printf("    ┃                         ┃                      ┃               \n");
	printf("    ┃                         ┃                      ┃               \n");
	printf("  12操场                       ┃                      ┃               \n");
	printf("    ┃                         ┃                      ┃               \n");
	printf("    ┃                         ┃                   11综合办公楼        \n");
        printf("    ┃                         ┃                      ┃               \n");
	printf("     ━━ 10一教楼━━━ 9风华杯广场 ━━━━━━━━━┃               \n");
	printf("    ┃                         ┃                  6中国好吃城━7四食堂 \n");
	printf("    ┃                         ┃                      ┃          ┃   \n");
	printf("    ┃                         ┃                      ┃━━━8三食堂  \n");
	printf("    ┃                         ┃                      ┃               \n");
	printf("    ┃                         ┃                      ┃               \n");
        printf("    ┃                         ┃                      ┃               \n");
	printf("     ━━━4二教楼 ━━━━━━━━━━━━━━━━ 5工程训练中心       \n");
	printf("                   ┃          ┃                      ┃               \n");
	printf("                   ┃          ┃                      ┃               \n");
	printf("                   ┃          ┃                      ┃               \n");
	printf("            2喷泉小公园━━━━━━━━━━━━ 3 大学生服务中心        \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                   ┃          ┃                     ┃                \n");
	printf("                    ━━━━1北华北校大门━━━━━━━               \n  \n");
}//利用printf函数将整个北华地图输出出来

void Info()//资料介绍函数
{
 int n;
    printf("☆☆请输入您想要查询的次数:\n");
	scanf("%d",&n);
    printf("☆☆请输入查询的景点序号:  ");
	int a;
	while(n--)//while循环，直到查询次数用完即n=0是结束该循环
	{
        scanf("%d",&a);
	if(a==1)	printf("① ☆ 北华北校大门 ： 复古又低调,富有历史文化气息\n\n");
	else if(a==2)	printf("②☆ 喷泉小公园：   九十年代公园建筑风格，喷泉池塘里有金鱼,人们的休闲胜地\n\n");
	else if(a==3)	printf("③☆ 大学生服务中心：  销售各类生活、学习物品，内有快递收发点和生活超市 \n \n");
	else if(a==4)	printf("④☆ 二教楼：         内有各基层学院团委办公室和电院、机械院自习室\n\n");
	else if(a==5)	printf("⑤☆  工程训练中心：   内有各种机械设备，为机械学院实习基地\n\n");
	else if(a==6)	printf("⑥☆  中国好吃城：   有砂锅、麻辣香锅、麻辣烫等风味小吃档口\n\n");
	else if(a==7)	printf("⑦☆  四食堂：      内有回民特色菜和韩餐风味档口\n\n");
	else if(a==8)	printf("⑧☆  三食堂：      内有土豆粉，混沌面，担担面等家常小吃档口 \n\n");
	else if(a==9)	printf("⑨☆  风华杯广场：  有北校标志性雕塑-风华杯 \n\n");
	else if(a==10)	printf("⑩☆  一教楼：     为北校工科学院的实验基地 \n\n");
	else if(a==11)	printf("⑾☆  综合办公楼： 为学校办公室楼，内有财会室和学校学办室等  \n \n");
	else if(a==12)	printf("⑿☆  操场：      宽广的塑胶操场，为学生们体育课、休闲时的场所 \n\n");
	else if(a==13)	printf("⒀☆  图书馆：    图书馆共四楼，一楼为电子阅览室，二三楼为借阅室 \n\n");
	else if(a==14)	printf("⒁☆  第三教学楼：外墙刚修好，为北校最高建筑，内教室为大部分课程的上课地点 \n\n");
	}
  
}

void Dijkstra(int num)//迪杰斯特拉算法最短路径
{
	int v,w,i,t;//定义四个变量用于后面的循环语句
	int final[NUM];//终点集元素集合
	int min;//定义一个最小值变量
	for(v=1;v<NUM;v++)
	{
		final[v]=0; //初始化最短路径终点集
		D[v]=G.arcs[num][v];//初始化最短路径长度，将第num个点到第v个点赋值给D[v]
		for(w=1;w<NUM;w++) 
			P[v][w]=0;//初始化最短路径，把0赋值给第v与第w个顶点间的最短路径
		if(D[v]<Max)//如果第num个顶点到第v个顶点的权值小于宏定义的最大值
		{
			P[v][num]=1;//根据判断条件第v个与第num个顶点间也存在最短路径
			P[v][v]=1; //第v个顶点到第v个顶点间也存在最短路径（能到达）
		}
	}
	D[num]=0;//将第num个节点到任意点最短路径赋值为（即用做初始化）
	final[num]=1;//将num赋值为“1”即第一个节点作为终点集元素
	for(i=1;i<NUM;++i)
	{
		min=Max; //将宏定义最大值赋值给定义的最小路径变量
		for(w=1;w<NUM;++w)
			if(!final[w])//若第w个节点不属于终点集
				if(D[w]<min)//若第num个节点距第w个节点的最小路径小于宏定义最大值
				{
					v=w;//将w的值赋给变量v
					min=D[w];//最小路径为本次循环求出的两个节点的最小路径
				}
				final[v]=1; //将第v个节点（也就是本次循环执行的节点）并到终点集里
				for(w=1;w<NUM;++w)
					if(!final[w]&&((min+G.arcs[v][w])<D[w]))//如果第w个节点不属于终点集且第num个点到
                                        //第v个点加上第v个节点到第w个节点的权值小于第num个节点到第w个节点的权值
					{
						D[w]=min+G.arcs[v][w];//刷新第num个节点到第w个节点的最短路径
						for(t=0;t<NUM;t++)
					          P[w][t]=P[v][t];//将新得出的两点最小值赋给原来两点最小值（刷新最短路径）
						P[w][w]=1;//这两个相同节点之间也存在最短路径
					}
	}
}

char Menu()//主菜单
{
	char c;
	int flag;
	do{
	    system("cls");//清屏函数属于头文件stdlib.h下的函数
	    flag=1;
	    Map();
	    printf("\t\t☆☆☆ 欢迎使用北华大学北校区导航图系统 ☆☆☆\n");
	    printf("\t\t ☆☆☆  1.查询地点之间最短路径       ☆☆☆ \n");
	    printf("\t\t  ☆☆   2.北华大学北校区景点介绍     ☆☆\n");
	    printf("\t\t    ☆☆ e.退出                      ☆☆ \n");
            printf("\t\t\t    ☆ 请输入您的选择 ☆：");
	    scanf("%c",&c);//从键盘键入一个字符，如果为1或2或e的话令flag为0跳出该循环执行对应的内容，否则一直循环不做反应
		if(c=='1'||c=='2'||c=='e')
			flag=0;
	}while(flag);
	return c;//字符型类函数返回值为函数开始所键入的字符c，保留返回值执行对应功能
}

void Display(int sight1,int sight2)//输出函数，sight1，sight2为14个景点中任意的两个景点
  {                                 
	int a,b,c,d,q=0;
	a=sight2; 
	if(a!=sight1)//计算最短路径要看这两个顶点是不是同一个点.先经过判断
	{
		printf("\n\t☆从%s到%s的最短路径是",G.vex[sight1].sight,G.vex[sight2].sight);
		printf("\t(☆最短距离为 %dm.)\n\n\t",D[a]); 
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

void main()//主函数
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
				printf("\n\n\t\t\t☆请选择出发地序号（1～14）：");
				scanf("%d",&v0);
				if(v0<1||v0>14)
					printf("\n\n\t\t\t\t☆输入错误!\n");
			}while(v0<1||v0>14);
			do
			{
				printf("\t\t\t☆请选择目的地序号（1～14）：");
				scanf("%d",&v1);
				if(v1<1||v1>14||v1==v0)
					printf("\n\n\t\t\t\t☆输入错误!\n");
			}while(v1<1||v1>14||v1==v0);
			Dijkstra(v0);
			Display(v0,v1);
			printf("\n\n\t\t\t\t☆如要继续请按回车键,退回首页请按e\n");
			getchar();
			scanf("%c",&e);
			if(e=='e')
				break;
			goto gate;
		case'2':
			system("cls");
			Info();
			printf("\n\n\t\t\t\t☆请按e键返回首页...\n");
			getchar();
			scanf("%c",&e);
			if(e=='e')
				break;
			goto gate;
			break;
		};
	}while(ck!='e');
}