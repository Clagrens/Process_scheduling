
// Process scheduling.h : Process scheduling Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CProcessschedulingApp:
// �йش����ʵ�֣������ Process scheduling.cpp
//

class CProcessschedulingApp : public CWinApp
{
public:
	CProcessschedulingApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProcessschedulingApp theApp;
