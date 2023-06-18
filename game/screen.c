#include "screen.h"
#include <stdio.h>

void TitleScreen(void)
{
    SetCursorPostion(0, 0);
    printf("#--------------------------------------#\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#             1. 게임시작              #\n");
    printf("#             2. 게임방법              #\n");
    printf("#             3. 게임종료              #\n");
    printf("#                                      #\n");
    printf("#--------------------------------------#\n");
    SetCursorPostion(9, 3);
    printf("\033[95m토끼"); /* 핑크색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("라서 ");
    printf("\033[32m공격"); /* 녹색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("하겠습니다");
}

void GameScreen(void)
{
    SetCursorPostion(0, 1);
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
}

void TutoScreen(void)
{
    SetCursorPostion(0, 1);
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");

    SetCursorPostion(11, 3);
    printf("당신은 \033[95m토끼"); /* 핑크색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("입니다.");
    Sleep(1500);

    SetCursorPostion(3, 4);
    printf("당신은 \033[31m늑대무리"); /* 빨간색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("에게 추적당합니다.");
    Sleep(1500);

    SetCursorPostion(2, 5);
    printf("하지만 당신은");
    printf("\033[32m공격"); /* 녹색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("하기로 마음먹습니다.");
    Sleep(1500);

    SetCursorPostion(3, 6);
    printf("\033[31m몰려오는 늑대무리"); /* 빨간색 변경 */
    printf("\033[0m");  /* 색상 초기화 */
    printf("를 피해주세요.");
    Sleep(1500);

    SetCursorPostion(6, 8);
    printf("W = 위쪽 이동  A = 왼쪽 이동");
    SetCursorPostion(6, 9);
    printf("S = 아래 이동  D = 오른쪽 이동");
    printf("");
    Sleep(1500);

    SetCursorPostion(13, 11);
    printf("3초 후 타이틀로");
    Sleep(1000);
    SetCursorPostion(13, 11);
    printf("2초 후 타이틀로");
    Sleep(1000);
    SetCursorPostion(13, 11);
    printf("1초 후 타이틀로");
    Sleep(1000);
}

void GameOffScreen(void)
{
    SetCursorPostion(0, 1);
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");
    printf("#                                      #\n");

    SetCursorPostion(0, 4);
    printf("#           나중에 또 오시길           #\n");
    Sleep(1000);

    SetCursorPostion(0, 7);
    printf("#          기대하고 있겠습니다         #\n");
    Sleep(1000);

    printf("\033[41m");  /* 빨간색 배경 */
    SetCursorPostion(11, 11);
    printf("이 시간에도 토끼는\n");
    printf("\033[0m");  /* 배경색 초기화 */

    printf("\033[41m");  /* 빨간색 배경 */
    SetCursorPostion(8, 12);
    printf("늑대를 피하고 있습니다.\n");
    printf("\033[0m");  /* 배경색 초기화 */

    Sleep(1000);

    SetCursorPostion(0, 15);
    Sleep(1000);
}