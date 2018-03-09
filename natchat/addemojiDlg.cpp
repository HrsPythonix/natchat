// addemojiDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "addemojiDlg.h"
#include "afxdialogex.h"
#include "resource.h"
CString new_emoji;
// CaddemojiDlg 对话框

IMPLEMENT_DYNAMIC(CaddemojiDlg, CDialogEx)

CaddemojiDlg::CaddemojiDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_EMOJIADDDLG, pParent)
{

}

CaddemojiDlg::~CaddemojiDlg()
{
}

void CaddemojiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CaddemojiDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CaddemojiDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CaddemojiDlg 消息处理程序


void CaddemojiDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_ADDEMOJIEDIT, new_emoji);
	if (new_emoji == L"") {
		MessageBox(L"Please input emoji");
		return;
	}
	CDialogEx::OnOK();
}