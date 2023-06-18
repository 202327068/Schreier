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
	printf("#             1. ���ӽ���              #\n");
	printf("#             2. ���ӹ��              #\n");
	printf("#             3. ��������              #\n");
	printf("#                                      #\n");
	printf("#--------------------------------------#\n");
	SetCursorPostion(13, 3);
	printf("\033[95m�䳢"); /*��ũ�� ����*/
	printf("\033[0m"); /*�����ʱ�ȭ*/
	printf("�� ");
	printf("\033[32m����");/*��� ����*/
	printf("\033[0m"); /*�����ʱ�ȭ*/
	printf("ģ��.");
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
	printf("#     <�ѤѤѤѤѤѤѤѤѤѤѤѤ�>     #\n");
	printf("#     <                          >     #\n");
	printf("#     <          ���氣��        >     #\n");
	printf("#     <                          >     #\n");
	printf("#     <�ѤѤѤѤѤѤѤѤѤѤѤѤ�>     #\n");
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
	printf("�״� \033[95m�䳢"); /*��ũ�� ����*/
	printf("\033[0m"); /*���� �ʱ�ȭ*/
	printf("�Դϴ�.");
	Sleep(1500);

	SetCursorPostion(6, 4);
	printf("�״� \033[31m����"); /*������ ����*/
	printf("\033[0m"); /*���� �ʱ�ȭ*/
	printf("���� �ѱ���ֽ��ϴ�.");
	Sleep(1500);

	SetCursorPostion(8, 6);
	printf("�˸��� �������� �����Ͽ�");
	Sleep(1500);

	SetCursorPostion(8, 7);
	printf("\033[31m����\033[0m"); /*������ ���� �� ���� �ʱ�ȭ*/
	printf("���Լ�");
	printf(" ����ġ�ʽÿ�.");
	Sleep(1500);

	SetCursorPostion(8, 9);
	printf("����1, ����2 ����,3����");
	SetCursorPostion(14, 10);
	printf(" ���� ����");
	Sleep(1500);

	SetCursorPostion(13, 12);
	printf("3�� �� Ÿ��Ʋ��");
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
	printf("#            �÷��� ���ּż�           #\n");
	Sleep(1000);

	SetCursorPostion(0, 7);
	printf("#              �����մϴ�.             #\n");
	Sleep(1000); 


	SetCursorPostion(0, 15);
	Sleep(1000);
}