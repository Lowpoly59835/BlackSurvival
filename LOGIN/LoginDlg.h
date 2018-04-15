#pragma once
#include "SSingleton.h"


class LoginDlg
	:public SSingleton<LoginDlg>
{
protected:
	HWND m_hWnd;
	HWND m_hWndMsg;				// �޼����� ����� ����Ʈ �ڽ� �ڵ�.
	HWND m_hTimer;				//���� ���� �ð� ����Ʈ�ڽ� �ڵ�

	DWORD m_Day;
	DWORD m_Hour;
	DWORD m_Minute;
	DWORD m_RealDay;
	DWORD m_RealHour;
	DWORD m_RealMinute;
	DWORD m_WriteTime;
	DWORD m_TimeCount;
	char m_RunTime[15];
public:
	void SetMessage(const char *s);

	LoginDlg();
	~LoginDlg();

	void OnInitServer(HWND hWnd);
	void StartServer(HINSTANCE hInstance, int resID, HWND parentHwnd);

	BOOL OnExit(HWND hWnd);

	HWND GetHWND() { return m_hWnd; }


	void SetRunTime();
	//	void SetMessage()
};

INT_PTR CALLBACK ServerProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


