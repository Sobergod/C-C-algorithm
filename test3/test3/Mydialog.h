#pragma once
#include "afxwin.h"


// CMydialog �Ի���

class CMydialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMydialog)

public:
	CMydialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMydialog();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
