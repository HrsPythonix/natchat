#pragma once


extern CString modified_emoji;
// CmodiftEmoji 对话框


class CmodiftEmoji : public CDialogEx
{
	DECLARE_DYNAMIC(CmodiftEmoji)

public:
	CmodiftEmoji(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CmodiftEmoji();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODIFYEMOJIDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedModifycancel();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
