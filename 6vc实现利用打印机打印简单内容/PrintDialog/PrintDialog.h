// PrintDialog.h : main header file for the PRINTDIALOG application
//

#if !defined(AFX_PRINTDIALOG_H__E35F95E2_7A5D_4734_A509_454440E974E6__INCLUDED_)
#define AFX_PRINTDIALOG_H__E35F95E2_7A5D_4734_A509_454440E974E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPrintDialogApp:
// See PrintDialog.cpp for the implementation of this class
//

class CPrintDialogApp : public CWinApp
{
public:
	CPrintDialogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrintDialogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPrintDialogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRINTDIALOG_H__E35F95E2_7A5D_4734_A509_454440E974E6__INCLUDED_)
