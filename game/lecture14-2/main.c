#include "gamecore.h"


int main(void)
{
	ContinueGame = 1;

	/*�ʱ�ȭ�� ����*/
	BeginGame();

	while (ContinueGame)
	{
		UpdateGame();
	}

	/*������ ����*/
	EndGame();

	return 0;
}

