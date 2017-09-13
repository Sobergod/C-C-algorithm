
// Three05Dlg.h : 头文件
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

// CThree05Dlg 对话框
class CThree05Dlg : public CDialogEx
{
// 构造
public:
	CThree05Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_THREE05_DIALOG };

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
	void updatelistctrl();
	int count;
	F f[100];
};
