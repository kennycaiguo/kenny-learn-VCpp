// PrintDialogDlg.h : header file
//

#if !defined(AFX_PRINTDIALOGDLG_H__A726994F_4E0B_4F8E_A4D0_E57FFD9ECC6F__INCLUDED_)
#define AFX_PRINTDIALOGDLG_H__A726994F_4E0B_4F8E_A4D0_E57FFD9ECC6F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPrintDialogDlg dialog

class CPrintDialogDlg : public CDialog
{
// Construction
public:
	void DrawText(CDC *pDC, BOOL isprinted);
	CPrintDialogDlg(CWnd* pParent = NULL);	// standard constructor
	CString str[6];			
	CFont font;				//字体
	int screenx,screeny;	//获取窗口每英寸像素数
	int printx,printy;		//获取打印机每英寸像素数
	double ratex,ratey;		//打印机与屏幕的像素比率
// Dialog Data
	//{{AFX_DATA(CPrintDialogDlg)
	enum { IDD = IDD_PRINTDIALOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrintDialogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPrintDialogDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnPrint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRINTDIALOGDLG_H__A726994F_4E0B_4F8E_A4D0_E57FFD9ECC6F__INCLUDED_)
