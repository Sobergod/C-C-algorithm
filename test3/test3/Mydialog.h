#pragma once
#include "afxwin.h"


// CMydialog 对话框

class CMydialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMydialog)

public:
	CMydialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMydialog();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_Num;
	CEdit m_Date;
	CEdit m_Price;
	CEdit m_Info;
	int InOrOut;
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedOk();
};
