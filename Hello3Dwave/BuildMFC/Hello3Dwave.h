
// Hello3Dwave.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHello3DwaveApp:
// See Hello3Dwave.cpp for the implementation of this class
//

class CHello3DwaveApp : public CWinApp
{
public:
	CHello3DwaveApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CHello3DwaveApp theApp;
