
// Three05Dlg.h : ͷ�ļ�
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

// CThree05Dlg �Ի���
class CThree05Dlg : public CDialogEx
{
// ����
public:
	CThree05Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_THREE05_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
