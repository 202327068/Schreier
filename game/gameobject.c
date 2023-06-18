#include <stdio.h>
#include "gameobjects.h"

void GmRabbit_Draw(void)
{
    printf("\033[95m");  /* ��ũ�� ���� */
    printf("�䳢");
    printf("\033[0m");  /* ���� �ʱ�ȭ */
}

void DWolf_Draw(void)
{
    printf("\033[31m");  /* ������ ���� */
    printf("����");
    printf("\033[0m");  /* ���� �ʱ�ȭ */
}

void GmWolf_Draw(void)
{
    printf("\033[31m");  /* ������ ���� */
    printf("����");
    printf("\033[0m");  /* ���� �ʱ�ȭ */
}

void GmCarrot_Draw(void)
{
    printf("\033[33m");  /* ����� ���� */
    printf("���");
    printf("\033[0m");  /* ���� �ʱ�ȭ */
}

void GmEmpty_Draw(void)
{
    printf("  ");
}

void GmRabbit_Init(GmRabbit* rabbit, int x, int y)
{
    rabbit->x = x;
    rabbit->y = y;
}

void DWolf_Init(DWolf* wolf, int x, int y)
{
    wolf->x = x;
    wolf->y = y;
}

void GmWolf_Init(GmWolf* wolf, int x, int y)
{
    wolf->x = x;
    wolf->y = y;
}

void GmCarrot_Init(GmCarrot* carrot, int x, int y)
{
    carrot->x = x;
    carrot->y = y;
}

void GmEmpty_Init(GmEmpty* empty, int x, int y)
{
    empty->x = x;
    empty->y = y;
}