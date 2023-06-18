#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define MAP_SIZE_X 20
#define MAP_SIZE_Y 10

int rabbitPosX, rabbitPosY;
int wolfPosX, wolfPosY;
int gameState;

void initializeGame();
void drawMap();
void drawRabbit();
void drawWolf();
void updateGame();
void handleInput(char input);
void checkCollision();

int main()
{
    initializeGame();

    while (gameState)
    {
        drawMap();
        drawRabbit();
        drawWolf();
        updateGame();

        Sleep(100); // 게임 속도 조절을 위한 딜레이
    }

    return 0;
}

void initializeGame()
{
    rabbitPosX = MAP_SIZE_X / 2;
    rabbitPosY = MAP_SIZE_Y / 2;
    wolfPosX = 1;
    wolfPosY = 1;
    gameState = 1;

    system("cls"); // 콘솔 화면 청소
    printf("토끼 게임을 시작합니다.\n");
    printf("늑대를 피해 토끼를 움직여주세요.\n");
    printf("게임 종료를 원하면 'q'를 눌러주세요.\n");
    printf("--------------------------\n");
}

void drawMap()
{
    system("cls"); // 콘솔 화면 청소

    for (int y = 0; y < MAP_SIZE_Y; y++)
    {
        for (int x = 0; x < MAP_SIZE_X; x++)
        {
            if (x == rabbitPosX && y == rabbitPosY)
                printf("R");
            else if (x == wolfPosX && y == wolfPosY)
                printf("W");
            else
                printf(".");
        }
        printf("\n");
    }
}

void drawRabbit()
{
    // 이미지나 특정 색상으로 토끼 그리기
    // TODO: 구현해야 함
}

void drawWolf()
{
    // 이미지나 특정 색상으로 늑대 그리기
    // TODO: 구현해야 함
}

void updateGame()
{
    if (_kbhit())
    {
        char input = _getch();
        handleInput(input);
    }

    // 늑대 이동 로직
    // TODO: 구현해야 함

    checkCollision();
}

void handleInput(char input)
{
    if (input == 'q' || input == 'Q')
    {
        gameState = 0;
    }
    else if (input == 'w' || input == 'W')
    {
        rabbitPosY--;
    }
    else if (input == 's' || input == 'S')
    {
        rabbitPosY++;
    }
    else if (input == 'a' || input == 'A')
    {
        rabbitPosX--;
    }
    else if (input == 'd' || input == 'D')
    {
        rabbitPosX++;
    }
}

void checkCollision()
{
    if (rabbitPosX == wolfPosX && rabbitPosY == wolfPosY)
    {
        printf("토끼가 늑대에게 잡혔습니다. 게임 오버!\n");
        gameState = 0;
    }
}