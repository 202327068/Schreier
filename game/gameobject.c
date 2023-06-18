#include <stdio.h>
#include "gameobjects.h"

void GmRabbit_Draw(void)
{
    printf("\033[95m");  /* 핑크색 변경 */
    printf("토끼");
    printf("\033[0m");  /* 색상 초기화 */
}

void DWolf_Draw(void)
{
    printf("\033[31m");  /* 빨간색 변경 */
    printf("늑대");
    printf("\033[0m");  /* 색상 초기화 */
}

void GmWolf_Draw(void)
{
    printf("\033[31m");  /* 빨간색 변경 */
    printf("무리");
    printf("\033[0m");  /* 색상 초기화 */
}

void GmCarrot_Draw(void)
{
    printf("\033[33m");  /* 노란색 변경 */
    printf("당근");
    printf("\033[0m");  /* 색상 초기화 */
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