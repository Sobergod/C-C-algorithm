
// Three05Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Three05.h"
#include "Three05Dlg.h"
#include "afxdialogex.h"
#include"Dlg05One.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CThree05Dlg 对话框



CThree05Dlg::CThree05Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CThree05Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	count=0;
}

void CThree05Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, listctrl);
}

BEGIN_MESSAGE_MAP(CThree05Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CThree05Dlg::OnBnClickedButton1)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &CThree05Dlg::OnLvnItemchangedList1)
END_MESSAGE_MAP()


// CThree05Dlg 消息处理程序

BOOL CThree05Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标
	LVCOLUMN lvcolumn;
	lvcolumn.mask=LVCF_WIDTH|LVCF_FMT|LVCF_TEXT;
	lvcolumn.cx=100;
	lvcolumn.fmt=LVCFMT_LEFT;
	lvcolumn.pszText=TEXT("编号");
	listctrl.InsertColumn(0,&lvcolumn);
	lvcolumn.pszText=TEXT("日期");
	listctrl.InsertColumn(1,&lvcolumn);
	lvcolumn.pszText=TEXT("收支");
	listctrl.InsertColumn(2,&lvcolumn);
	lvcolumn.pszText=TEXT("费用");
	listctrl.InsertColumn(3,&lvcolumn);
	lvcolumn.pszText=TEXT("备注");
	listctrl.InsertColumn(4,&lvcolumn);
	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CThree05Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CThree05Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else {
//注释该语句：防止重复调用重画函数
//CDialog::OnPaint(); 
//添加代码对话框背景贴图
CPaintDC   dc(this);  
CRect   rect;  
GetClientRect(&rect);    //获取对话框长宽      
CDC   dcBmp;             //定义并创建一个内存设备环境
dcBmp.CreateCompatibleDC(&dc);             //创建兼容性DC
CBitmap   bmpBackground;   
bmpBackground.LoadBitmap(IDB_BITMAP1);    //载入资源中图片
BITMAP   m_bitmap;                         //图片变量               
bmpBackground.GetBitmap(&m_bitmap);       //将图片载入位图中
//将位图选入临时内存设备环境
CBitmap  *pbmpOld=dcBmp.SelectObject(&bmpBackground);
//调用函数显示图片StretchBlt显示形状可变
dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY);    
}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CThree05Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CThree05Dlg::OnBnClickedButton1()
{
	CDlg05One my;
	my.DoModal();// TODO: 在此添加控件通知处理程序代码
}

void CThree05Dlg::updatelistctrl()
{
	listctrl.DeleteAllItems();
	LVITEM lvitem;
	int nitem;
	lvitem.mask=LVCF_TEXT;
	lvitem.iItem=0;
	lvitem.iSubItem=0;
	for(int i=0;i<count;i++)
	{
		nitem=listctrl.InsertItem(&lvitem);
		listctrl.SetItemText(nitem,0,f[i].num.GetBuffer(f[i].num.GetLength()));
		listctrl.SetItemText(nitem,1,f[i].date.GetBuffer(f[i].date.GetLength()));
		listctrl.SetItemText(nitem,3,f[i].price.GetBuffer(f[i].price.GetLength()));
		listctrl.SetItemText(nitem,4,f[i].info.GetBuffer(f[i].info.GetLength()));
		if(f[i].inorout==1)
		{listctrl.SetItemText(nitem,2,_T("收入"));
	}
		else
			listctrl.SetItemText(nitem,2,_T("支出"));
	}

}
void CThree05Dlg::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	//@TN
		*pResult = 0;
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
}
