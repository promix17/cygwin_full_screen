#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	HWND hWnd =  FindWindow("mintty",0);
	if(!hWnd) return -1;
	long style = GetWindowLong(hWnd, GWL_STYLE);
	style &= ~WS_CAPTION;
	style &= ~WS_THICKFRAME;
	style &= ~WS_OVERLAPPED;
	SetWindowLong(hWnd, GWL_STYLE, style);
	InvalidateRect(hWnd, 0, 0);
	ShowWindow(hWnd,SW_MAXIMIZE);
	return 0;
}

