#include "consolUtil.h"
#include <stdio.h>

void SetCursorPostion(int x, int y)
{
    printf("\033[%d;%dH", y + 1, x + 1);
}

void SetCursorVisible(int visible)
{
    if (visible)
        printf("\033[?25h");
    else
        printf("\033[?25l");
}

void SetTextColor(int color)
{
    printf("\033[%dm", color);
}

void SetBackgroundColor(int color)
{
    printf("\033[%dm", color + 10);
}

void ClearScreen(void)
{
    printf("\033[2J");
}

void Sleep(int milliseconds)
{
    // 대기 함수 구현
}