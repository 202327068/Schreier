#include "gamecore.h"


int main(void)
{
	ContinueGame = 1;

	/*초기화시 실행*/
	BeginGame();

	while (ContinueGame)
	{
		UpdateGame();
	}

	/*종료전 실행*/
	EndGame();

	return 0;
}

