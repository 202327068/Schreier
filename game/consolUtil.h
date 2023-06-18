#pragma once
#ifndef CONSOLUTIL_H
#define CONSOLUTIL_H

void SetCursorPostion(int x, int y);
void SetCursorVisible(int visible);
void SetTextColor(int color);
void SetBackgroundColor(int color);
void ClearScreen(void);
void Sleep(int milliseconds);

#endif /* CONSOLUTIL_H */