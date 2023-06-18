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

        Sleep(100); // ���� �ӵ� ������ ���� ������
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

    system("cls"); // �ܼ� ȭ�� û��
    printf("�䳢 ������ �����մϴ�.\n");
    printf("���븦 ���� �䳢�� �������ּ���.\n");
    printf("���� ���Ḧ ���ϸ� 'q'�� �����ּ���.\n");
    printf("--------------------------\n");
}

void drawMap()
{
    system("cls"); // �ܼ� ȭ�� û��

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
    // �̹����� Ư�� �������� �䳢 �׸���
    // TODO: �����ؾ� ��
}

void drawWolf()
{
    // �̹����� Ư�� �������� ���� �׸���
    // TODO: �����ؾ� ��
}

void updateGame()
{
    if (_kbhit())
    {
        char input = _getch();
        handleInput(input);
    }

    // ���� �̵� ����
    // TODO: �����ؾ� ��

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
        printf("�䳢�� ���뿡�� �������ϴ�. ���� ����!\n");
        gameState = 0;
    }
}