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
	SetCursorPostion(13, 3);
	printf("\033[95m토끼"); /*핑크색 변경*/
	printf("\033[0m"); /*색상초기화*/
	printf("는 ");
	printf("\033[32m도망");/*녹색 변경*/
	printf("\033[0m"); /*색상초기화*/
	printf("친다.");
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
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
	

}

void Two_90_Street_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#      \\        \\        /        /    #\n");
	printf("#        \\       \\      /       /      #\n");
	printf("#           \\     \\    /      /        #\n");
	printf("#             \\    \\__/     /          #\n");
	printf("#              |            |          #\n");
	printf("#              |            |          #\n");
	printf("#              |            |          #\n");
	printf("#              |            |          #\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
}

void Two_180_Street_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#--------------------------------------#\n");
	printf("#                                      #\n");
	printf("#                                      #\n");
	printf("#--------------|          |------------#\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
}

void Three_Street_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#      \\      \\   |  |   /      /      #\n");
	printf("#        \\     \\  |  |  /     /        #\n");
	printf("#          \\    \\ |  | /    /          #\n");
	printf("#            \\   \\|  |/   /            #\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("#              |          |            #\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
}

void Wall_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("#\033[1;33m_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\033[0m#\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
}

void Snack_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#                                      #\n");
	printf("#                                      #\n");
	printf("#     <ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ>     #\n");
	printf("#     <                          >     #\n");
	printf("#     <          대충간식        >     #\n");
	printf("#     <                          >     #\n");
	printf("#     <ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ>     #\n");
	printf("#                                      #\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
}

void Grass_Screen(void)
{
	SetCursorPostion(0, 1);
	printf("#\033[1;32m^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^    \033[0m#\n");
	printf("#\033[1;32m  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  \033[0m#\n");
	printf("#\033[1;32m^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^    \033[0m#\n");
	printf("#\033[1;32m  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  \033[0m#\n");
	printf("#\033[1;32m^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^    \033[0m#\n");
	printf("#\033[1;32m  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  \033[0m#\n");
	printf("#\033[1;32m^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^    \033[0m#\n");
	printf("#\033[1;32m  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  \033[0m#\n");
	printf("# ------------------------------------ #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# |                                  | #\n");
	printf("# ------------------------------------ #\n");
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
	printf("그는 \033[95m토끼"); /*핑크색 변경*/
	printf("\033[0m"); /*색상 초기화*/
	printf("입니다.");
	Sleep(1500);

	SetCursorPostion(6, 4);
	printf("그는 \033[31m늑대"); /*빨간색 변경*/
	printf("\033[0m"); /*색상 초기화*/
	printf("에게 쫓기고있습니다.");
	Sleep(1500);

	SetCursorPostion(8, 6);
	printf("알맞은 선택지를 선택하여");
	Sleep(1500);

	SetCursorPostion(8, 7);
	printf("\033[31m늑대\033[0m"); /*빨간색 변경 및 색상 초기화*/
	printf("에게서");
	printf(" 도망치십시오.");
	Sleep(1500);

	SetCursorPostion(8, 9);
	printf("숫자1, 숫자2 숫자,3으로");
	SetCursorPostion(14, 10);
	printf(" 선택 가능");
	Sleep(1500);

	SetCursorPostion(13, 12);
	printf("3초 후 타이틀로");
	Sleep(1000);
	SetCursorPostion(13, 12);
	printf("2");
	Sleep(1000);
	SetCursorPostion(13, 12);
	printf("1");
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
	printf("#            플레이 해주셔서           #\n");
	Sleep(1000);

	SetCursorPostion(0, 7);
	printf("#              감사합니다.             #\n");
	Sleep(1000); 


	SetCursorPostion(0, 15);
	Sleep(1000);
}