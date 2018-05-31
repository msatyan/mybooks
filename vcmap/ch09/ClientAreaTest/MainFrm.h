// MainFrm.h : CMainFrame 类的接口
//


#pragma once

class CMainFrame : public CMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// 属性
public:

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // 控件条嵌入成员
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcMouseLeave();
	void ShowStatus(CString message, CPoint & pt);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
};


