// MyDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "test2.h"
#include "MyDialog.h"
#include "afxdialogex.h"
#include"test2Dlg.h"

// CMyDialog 对话框

IMPLEMENT_DYNAMIC(CMyDialog, CDialogEx)

CMyDialog::CMyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyDialog::IDD, pParent)
{

}

CMyDialog::~CMyDialog()
{
}

void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT3, m_Num);
	DDX_Control(pDX, IDC_EDIT5, m_Date);
	DDX_Control(pDX, IDC_EDIT2, m_Price);
	DDX_Control(pDX, IDC_EDIT1, m_Info);
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &CMyDialog::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMyDialog::OnBnClickedRadio2)
	ON_BN_CLICKED(IDOK, &CMyDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CMyDialog 消息处理程序


void CMyDialog::OnBnClickedRadio1()
{
	inOrOut=1;
}


void CMyDialog::OnBnClickedRadio2()
{
	inOrOut=0;// TODO: 在此添加控件通知处理程序代码
}


void CMyDialog::OnBnClickedOk()
{
	F m_f;
	m_Num.GetWindowText(m_f.num);
	m_Date.GetWindowText(m_f.date);
	m_Price.GetWindowText(m_f.price);
	m_Info.GetWindowText(m_f.info);
	m_f.inorout=inOrOut;
	Ctest2Dlg *p=(Ctest2Dlg *)AfxGetMainWnd();
	p->f[p->count]=m_f;
	p->count++;
	p->updatactrllist();
	CDialogEx::OnOK();
}
