#include"consolutil.h"
#include<windows.h>

void SetCursorPostion(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursorVisvle(int isVisble)
{
	CONSOLE_CURSOR_INFO cursorINfo;
	cursorINfo.bVisible = isVisble;
	cursorINfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorINfo);
}
