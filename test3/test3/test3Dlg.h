
// test3Dlg.h : ͷ�ļ�
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

// Ctest3Dlg �Ի���
class Ctest3Dlg : public CDialogEx
{
// ����
public:
	Ctest3Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST3_DIALOG };

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
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl listctrl;
	afx_msg void OnBnClickedButton1();
	F f[100];
	int count;
	void updatelistctrl();
};
