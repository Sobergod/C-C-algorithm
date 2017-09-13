
// 计算器Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "计算器.h"
#include "计算器Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
int nEditFlag=0;

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


// C计算器Dlg 对话框



C计算器Dlg::C计算器Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C计算器Dlg::IDD, pParent)
	, m_num1(0)
	, m_num2(0)
	, m_result(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C计算器Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_num1);
	DDX_Text(pDX, IDC_EDIT2, m_num2);
	//  DDX_Text(pDX, IDC_EDIT3, m_result);
	DDX_Text(pDX, IDC_EDIT3, m_result);
	DDX_Control(pDX, IDC_EDIT3, m_CResult);
}

BEGIN_MESSAGE_MAP(C计算器Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTONNUM1, &C计算器Dlg::OnBnClickedButtonnum1)
	ON_BN_CLICKED(IDC_BUTTONNUM2, &C计算器Dlg::OnBnClickedButtonnum2)
	ON_BN_CLICKED(IDC_BUTTONNUM3, &C计算器Dlg::OnBnClickedButtonnum3)
	ON_BN_CLICKED(IDC_BUTTONNUM4, &C计算器Dlg::OnBnClickedButtonnum4)
	ON_BN_CLICKED(IDC_BUTTONNUM5, &C计算器Dlg::OnBnClickedButtonnum5)
	ON_BN_CLICKED(IDC_BUTTONNUM6, &C计算器Dlg::OnBnClickedButtonnum6)
	ON_BN_CLICKED(IDC_BUTTONNUM7, &C计算器Dlg::OnBnClickedButtonnum7)
	ON_BN_CLICKED(IDC_BUTTONNUM8, &C计算器Dlg::OnBnClickedButtonnum8)
	ON_BN_CLICKED(IDC_BUTTONNUM9, &C计算器Dlg::OnBnClickedButtonnum9)
	ON_BN_CLICKED(IDC_BUTTONNUM0, &C计算器Dlg::OnBnClickedButtonnum0)
	ON_EN_SETFOCUS(IDC_EDIT1, &C计算器Dlg::OnEnSetfocusEdit1)
	ON_EN_SETFOCUS(IDC_EDIT2, &C计算器Dlg::OnEnSetfocusEdit2)
	ON_BN_CLICKED(IDC_BUTTON11, &C计算器Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C计算器Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &C计算器Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &C计算器Dlg::OnBnClickedButton14)
END_MESSAGE_MAP()


// C计算器Dlg 消息处理程序

BOOL C计算器Dlg::OnInitDialog()
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

	ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C计算器Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void C计算器Dlg::OnPaint()
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
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C计算器Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C计算器Dlg::OnBnClickedButtonnum1()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+1;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+1;
		}
	UpdateData(FALSE);
	// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum2()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+2;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+2;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum3()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+3;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+3;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum4()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+4;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+4;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum5()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+5;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+5;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum6()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+6;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+6;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum7()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+7;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+7;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum8()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+8;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+8;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum9()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+9;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+9;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButtonnum0()
{
	UpdateData(TRUE);
	if(nEditFlag==1)
		{
			m_num1=m_num1*10+0;

		}
	else if(nEditFlag==2)
		{
			m_num2=m_num2*10+0;
		}
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnEnSetfocusEdit1()
{
	nEditFlag=1;// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnEnSetfocusEdit2()
{
	nEditFlag=2;// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButton11()
{
	UpdateData();
	m_result=m_num1+m_num2;
	UpdateData(FALSE);
	// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButton12()
{
	UpdateData();
	m_result=m_num1-m_num2;
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButton13()
{
	UpdateData();
	m_result=m_num1*m_num2;
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}


void C计算器Dlg::OnBnClickedButton14()
{
	UpdateData();
	m_result=m_num1/m_num2;
	UpdateData(FALSE);// TODO: 在此添加控件通知处理程序代码
}
