
#ifndef _ABOUTDLG_H_
#define _ABOUTDLG_H_
#include "ols_winloader.h"
//#include "XHTMLStatic.h"

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
//	CXHTMLStatic	m_links;
  CStatic m_links;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnStaticIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


#endif // _ABOUTDLG_H_
