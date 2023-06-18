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
    SetCursorPostion(9, 3);
    printf("\033[95m�䳢"); /* ��ũ�� ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("�� ");
    printf("\033[32m����"); /* ��� ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("�ϰڽ��ϴ�");
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
    printf("����� \033[95m�䳢"); /* ��ũ�� ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("�Դϴ�.");
    Sleep(1500);

    SetCursorPostion(3, 4);
    printf("����� \033[31m���빫��"); /* ������ ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("���� �������մϴ�.");
    Sleep(1500);

    SetCursorPostion(2, 5);
    printf("������ �����");
    printf("\033[32m����"); /* ��� ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("�ϱ�� �����Խ��ϴ�.");
    Sleep(1500);

    SetCursorPostion(3, 6);
    printf("\033[31m�������� ���빫��"); /* ������ ���� */
    printf("\033[0m");  /* ���� �ʱ�ȭ */
    printf("�� �����ּ���.");
    Sleep(1500);

    SetCursorPostion(6, 8);
    printf("W = ���� �̵�  A = ���� �̵�");
    SetCursorPostion(6, 9);
    printf("S = �Ʒ� �̵�  D = ������ �̵�");
    printf("");
    Sleep(1500);

    SetCursorPostion(13, 11);
    printf("3�� �� Ÿ��Ʋ��");
    Sleep(1000);
    SetCursorPostion(13, 11);
    printf("2�� �� Ÿ��Ʋ��");
    Sleep(1000);
    SetCursorPostion(13, 11);
    printf("1�� �� Ÿ��Ʋ��");
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
    printf("#           ���߿� �� ���ñ�           #\n");
    Sleep(1000);

    SetCursorPostion(0, 7);
    printf("#          ����ϰ� �ְڽ��ϴ�         #\n");
    Sleep(1000);

    printf("\033[41m");  /* ������ ��� */
    SetCursorPostion(11, 11);
    printf("�� �ð����� �䳢��\n");
    printf("\033[0m");  /* ���� �ʱ�ȭ */

    printf("\033[41m");  /* ������ ��� */
    SetCursorPostion(8, 12);
    printf("���븦 ���ϰ� �ֽ��ϴ�.\n");
    printf("\033[0m");  /* ���� �ʱ�ȭ */

    Sleep(1000);

    SetCursorPostion(0, 15);
    Sleep(1000);
}