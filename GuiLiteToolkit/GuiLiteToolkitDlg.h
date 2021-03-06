
// GuiLiteToolkitDlg.h : header file
//
#include "FontDlg.h"
#include "BitmapDlg.h"

#pragma once
// CGuiLiteToolkitDlg dialog
class CGuiLiteToolkitDlg : public CDialogEx
{
// Construction
public:
	CGuiLiteToolkitDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GUILITETOOLKIT_DIALOG };
#endif
	
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTabChanged(NMHDR *pNMHDR, LRESULT *pResult);
	DECLARE_MESSAGE_MAP()
private:
	CTabCtrl* m_tab;
	CFontDlg m_fontDlg;
	BitmapDlg m_bitmapDlg;
};
