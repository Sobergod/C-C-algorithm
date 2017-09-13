
// Three05Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Three05.h"
#include "Three05Dlg.h"
#include "afxdialogex.h"
#include"Dlg05One.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


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


// CThree05Dlg �Ի���



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


// CThree05Dlg ��Ϣ�������

BOOL CThree05Dlg::OnInitDialog()
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
	LVCOLUMN lvcolumn;
	lvcolumn.mask=LVCF_WIDTH|LVCF_FMT|LVCF_TEXT;
	lvcolumn.cx=100;
	lvcolumn.fmt=LVCFMT_LEFT;
	lvcolumn.pszText=TEXT("���");
	listctrl.InsertColumn(0,&lvcolumn);
	lvcolumn.pszText=TEXT("����");
	listctrl.InsertColumn(1,&lvcolumn);
	lvcolumn.pszText=TEXT("��֧");
	listctrl.InsertColumn(2,&lvcolumn);
	lvcolumn.pszText=TEXT("����");
	listctrl.InsertColumn(3,&lvcolumn);
	lvcolumn.pszText=TEXT("��ע");
	listctrl.InsertColumn(4,&lvcolumn);
	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CThree05Dlg::OnPaint()
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
	else {
//ע�͸���䣺��ֹ�ظ������ػ�����
//CDialog::OnPaint(); 
//��Ӵ���Ի��򱳾���ͼ
CPaintDC   dc(this);  
CRect   rect;  
GetClientRect(&rect);    //��ȡ�Ի��򳤿�      
CDC   dcBmp;             //���岢����һ���ڴ��豸����
dcBmp.CreateCompatibleDC(&dc);             //����������DC
CBitmap   bmpBackground;   
bmpBackground.LoadBitmap(IDB_BITMAP1);    //������Դ��ͼƬ
BITMAP   m_bitmap;                         //ͼƬ����               
bmpBackground.GetBitmap(&m_bitmap);       //��ͼƬ����λͼ��
//��λͼѡ����ʱ�ڴ��豸����
CBitmap  *pbmpOld=dcBmp.SelectObject(&bmpBackground);
//���ú�����ʾͼƬStretchBlt��ʾ��״�ɱ�
dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY);    
}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CThree05Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CThree05Dlg::OnBnClickedButton1()
{
	CDlg05One my;
	my.DoModal();// TODO: �ڴ���ӿؼ�֪ͨ����������
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
		{listctrl.SetItemText(nitem,2,_T("����"));
	}
		else
			listctrl.SetItemText(nitem,2,_T("֧��"));
	}

}
void CThree05Dlg::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	//@TN
		*pResult = 0;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}
