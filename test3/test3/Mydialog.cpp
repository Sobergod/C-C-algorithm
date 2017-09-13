// Mydialog.cpp : 实现文件
//

#include "stdafx.h"
#include "test3.h"
#include "Mydialog.h"
#include "afxdialogex.h"
#include"test3Dlg.h"


// CMydialog 对话框

IMPLEMENT_DYNAMIC(CMydialog, CDialogEx)

CMydialog::CMydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMydialog::IDD, pParent)
{

}

CMydialog::~CMydialog()
{
}

void CMydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_Num);
	DDX_Control(pDX, IDC_EDIT2, m_Date);
	DDX_Control(pDX, IDC_EDIT3, m_Price);
	DDX_Control(pDX, IDC_EDIT4, m_Info);
}


BEGIN_MESSAGE_MAP(CMydialog, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &CMydialog::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMydialog::OnBnClickedRadio2)
	ON_BN_CLICKED(IDOK, &CMydialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CMydialog 消息处理程序


void CMydialog::OnBnClickedRadio1()
{
	InOrOut=1;
}


void CMydialog::OnBnClickedRadio2()
{
	InOrOut=0;
}


void CMydialog::OnBnClickedOk()
{
	F m_f;
	m_Num.GetWindowText(m_f.num);
	m_Date.GetWindowText(m_f.date);
	m_Price.GetWindowText(m_f.price);
	m_Info.GetWindowText(m_f.info);
	m_f.inorout=InOrOut;
	Ctest3Dlg *p=(Ctest3Dlg *)AfxGetMainWnd();
	p->f[p->count]=m_f;
	p->count++;
	p->updatelistctrl();
	CDialogEx::OnOK();
}
