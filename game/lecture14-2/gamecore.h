#pragma once

void TutoScreen(void);
void BeginGame(void);
void UpdateGame(void);
void EndGame(void);

/*게임 상태 변수
	0.게임종료
	1.타이틀화면
	2.게임방법화면
	3.게임시작
*/
/*input 변수
	1.게임시작
	2.게임방법
	3.게임종료
*/
int ContinueGame;