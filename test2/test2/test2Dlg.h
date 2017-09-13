
// test2Dlg.h : 头文件
//

#pragma once
#include "afxcmn.h"

typedef struct
{
	CString num;
	CString date;
	CString price;
	CString info;
	int inorout;
}F;
// Ctest2Dlg 对话框
class Ctest2Dlg : public CDialogEx
{
// 构造
public:
	Ctest2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TEST2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CListCtrl listctrl;
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedOk();
	F f[100];
	int count;
	void updatactrllist();

};
