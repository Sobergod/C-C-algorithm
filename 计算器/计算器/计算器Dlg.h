
// 计算器Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// C计算器Dlg 对话框
class C计算器Dlg : public CDialogEx
{
// 构造
public:
	C计算器Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY_DIALOG };

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
	afx_msg void OnBnClickedButtonnum1();
	afx_msg void OnBnClickedButtonnum2();
	afx_msg void OnBnClickedButtonnum3();
	afx_msg void OnBnClickedButtonnum4();
	afx_msg void OnBnClickedButtonnum5();
	afx_msg void OnBnClickedButtonnum6();
	afx_msg void OnBnClickedButtonnum7();
	afx_msg void OnBnClickedButtonnum8();
	afx_msg void OnBnClickedButtonnum9();
	afx_msg void OnBnClickedButtonnum0();
	double m_num1;
	double m_num2;
//	CString m_result;
	double m_result;
	CEdit m_CResult;
	afx_msg void OnEnSetfocusEdit1();
	afx_msg void OnEnSetfocusEdit2();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
};
