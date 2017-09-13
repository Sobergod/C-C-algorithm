
// ������Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "������.h"
#include "������Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
int nEditFlag=0;

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// C������Dlg �Ի���



C������Dlg::C������Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C������Dlg::IDD, pParent)
	, m_num1(0)
	, m_num2(0)
	, m_result(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C������Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_num1);
	DDX_Text(pDX, IDC_EDIT2, m_num2);
	//  DDX_Text(pDX, IDC_EDIT3, m_result);
	DDX_Text(pDX, IDC_EDIT3, m_result);
	DDX_Control(pDX, IDC_EDIT3, m_CResult);
}

BEGIN_MESSAGE_MAP(C������Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTONNUM1, &C������Dlg::OnBnClickedButtonnum1)
	ON_BN_CLICKED(IDC_BUTTONNUM2, &C������Dlg::OnBnClickedButtonnum2)
	ON_BN_CLICKED(IDC_BUTTONNUM3, &C������Dlg::OnBnClickedButtonnum3)
	ON_BN_CLICKED(IDC_BUTTONNUM4, &C������Dlg::OnBnClickedButtonnum4)
	ON_BN_CLICKED(IDC_BUTTONNUM5, &C������Dlg::OnBnClickedButtonnum5)
	ON_BN_CLICKED(IDC_BUTTONNUM6, &C������Dlg::OnBnClickedButtonnum6)
	ON_BN_CLICKED(IDC_BUTTONNUM7, &C������Dlg::OnBnClickedButtonnum7)
	ON_BN_CLICKED(IDC_BUTTONNUM8, &C������Dlg::OnBnClickedButtonnum8)
	ON_BN_CLICKED(IDC_BUTTONNUM9, &C������Dlg::OnBnClickedButtonnum9)
	ON_BN_CLICKED(IDC_BUTTONNUM0, &C������Dlg::OnBnClickedButtonnum0)
	ON_EN_SETFOCUS(IDC_EDIT1, &C������Dlg::OnEnSetfocusEdit1)
	ON_EN_SETFOCUS(IDC_EDIT2, &C������Dlg::OnEnSetfocusEdit2)
	ON_BN_CLICKED(IDC_BUTTON11, &C������Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C������Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &C������Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &C������Dlg::OnBnClickedButton14)
END_MESSAGE_MAP()


// C������Dlg ��Ϣ�������

BOOL C������Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MINIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C������Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C������Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C������Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C������Dlg::OnBnClickedButtonnum1()
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum2()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum3()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum4()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum5()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum6()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum7()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum8()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum9()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButtonnum0()
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
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnEnSetfocusEdit1()
{
	nEditFlag=1;// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnEnSetfocusEdit2()
{
	nEditFlag=2;// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButton11()
{
	UpdateData();
	m_result=m_num1+m_num2;
	UpdateData(FALSE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButton12()
{
	UpdateData();
	m_result=m_num1-m_num2;
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButton13()
{
	UpdateData();
	m_result=m_num1*m_num2;
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C������Dlg::OnBnClickedButton14()
{
	UpdateData();
	m_result=m_num1/m_num2;
	UpdateData(FALSE);// TODO: �ڴ���ӿؼ�֪ͨ����������
}
