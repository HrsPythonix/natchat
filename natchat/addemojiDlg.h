#pragma once


// CaddemojiDlg 对话框

extern CString new_emoji;

class CaddemojiDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CaddemojiDlg)

public:
	CaddemojiDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CaddemojiDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EMOJIADDDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
