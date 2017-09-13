// Dlg05One.cpp : 实现文件
//

#include "stdafx.h"
#include "Three05.h"
#include "Dlg05One.h"
#include "afxdialogex.h"
#include"Three05Dlg.h"


// CDlg05One 对话框

IMPLEMENT_DYNAMIC(CDlg05One, CDialogEx)

CDlg05One::CDlg05One(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlg05One::IDD, pParent)
{

}

CDlg05One::~CDlg05One()
{
}

void CDlg05One::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT3, m_Num);
	DDX_Control(pDX, IDC_EDIT1, m_Date);
	DDX_Control(pDX, IDC_EDIT2, m_Price);
	DDX_Control(pDX, IDC_EDIT4, m_Info);
}


BEGIN_MESSAGE_MAP(CDlg05One, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO2, &CDlg05One::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO1, &CDlg05One::OnBnClickedRadio1)
	ON_BN_CLICKED(IDOK, &CDlg05One::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlg05One 消息处理程序


void CDlg05One::OnBnClickedRadio2()
{
	InOrOut=1;
}


void CDlg05One::OnBnClickedRadio1()
{
	InOrOut=0;
}


void CDlg05One::OnBnClickedOk()
{
	F m_f;
	m_Num.GetWindowText(m_f.num);
	m_Date.GetWindowText(m_f.date);
	m_Price.GetWindowText(m_f.price);
	m_Info.GetWindowText(m_f.info);
	m_f.inorout=InOrOut;
	CThree05Dlg *p=(CThree05Dlg *)AfxGetMainWnd();
	p->f[p->count]=m_f;
	p->count++;
	p->updatelistctrl();
	CDialogEx::OnOK();
}
