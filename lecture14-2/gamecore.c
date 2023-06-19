#include "gamecore.h"
#include "consolutil.h"
#include "screen.h"
#include "GameObjects.h"

int GameState;
int Two90 = 0;
int Three = 0;
int Two180 = 0;
int Grass = 0;
int Wall = 0;
int Snack = 0;

void BeginGame(void)
{
	GameState = 1;

	SetCursorVisvle(0);
}

void UpdateGame(void)
{
	/*메인화면*/
	if (GameState == 1)
	{
		SetCursorPostion(0, 0);
		TitleScreen();
		SetCursorPostion(0, 15);

		char input = '0'; /*아스키코드*/

		input = getch();

		/*게임시작*/
		if (input == '1')
		{
			GameState = 3;
		}

		/*게임설명*/
		else if (input == '2')
		{
			GameState = 2;
		}

		/*게임종료*/
		else if (input == '3')
		{
			GameState = 0;
		}

		/*히든엔딩*/
		else if (input == 'h')
		{
			GameScreen();
			SetCursorPostion(0, 12);
			Select_format();
			SetCursorPostion(0, 11);
			Hidden_line_2_1();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_2();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_3();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_4();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_5();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_6();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_7();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_8();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_9();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_10();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_11();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_12();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_13();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_14();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_15();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_16();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_17();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_18();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_19();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_20();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_21();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_line_2_22();
			Sleep(1500);
			SetCursorPostion(0, 11);
			Hidden_2();
			Sleep(1500);
			GameState = 1;
		}

		/*위에 있는 것들을 제외한 다른 것들*/
		else
		{
			printf("\n\n입력된 값이 잘못되었습니다. 다시 한번 더 입력해주세요.\n\n");
			Sleep(1500);
			system("cls");
		}
	}

	/*게임시작*/
	else if (GameState == 3)
	{
		GameScreen();
		SetCursorPostion(0, 11);		
		Rb_1();
		Sleep(1500);
		SetCursorPostion(0, 11);;
		Rb_2();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_3_1();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_3_2();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_4_1();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_4_2();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_5_1();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_5_2();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_5_3();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Rb_6();
		Sleep(1500);
		SetCursorPostion(0, 11);
		Gm_line_3_1();
		Sleep(1200);
		SetCursorPostion(0, 11);
		Gm_line_3_2();
		Sleep(1200);
		SetCursorPostion(0, 12);
		Select();
		Sleep(1200);

		char first = '0';

		first = getch();
		if (first == '1')
		{
			Two90 = 1;
		}

		while (Two90==1)
			{
				Two_90_Street_Screen();
				SetCursorPostion(0, 11);
				Gm_line_Select();
				SetCursorPostion(0, 12);
				Two_Street_Select();
				Sleep(1200);

				char second = '0'; /*아스키코드*/

				second = getch();

				if (second == '1')
				{
					SetCursorPostion(0, 12);
					Select_format();
					printf("\n\n                                                      \n\n");
					SetCursorPostion(0, 11);
					Gm_line_left();
					Sleep(1200);

					/*180도 2갈래길로 이동*/
					Two90 = 0;
					Two180 = 1;
					
				}
				else if (second == '2')
				{
					SetCursorPostion(0, 12);
					Select_format();
					printf("\n\n                                                      \n\n");
					SetCursorPostion(0, 11);
					Gm_line_right();
					Sleep(1200);
					Two90 = 0;
					Three = 1;
				}
				else
				{
					printf("\n\n다시 입력해주세요\n\n");
				}
			}


		while (Three==1)
			{
				Three_Street_Screen();
				SetCursorPostion(0, 11);
				Gm_line_Select();
				SetCursorPostion(0, 12);
				Three_Street_Select();
				Sleep(1200);

				char last = '0';

				last = getch();

				if (last == '1')
				{
					SetCursorPostion(0, 12);
					Select_format();
					SetCursorPostion(0, 11);
					Gm_line_left();
					Sleep(1200);
					Wall = 1;
					Three = 0;
				}
				else if(last == '2')
				{
					SetCursorPostion(0, 12);
					Select_format();
					SetCursorPostion(0, 11);
					Gm_line_middle();
					Sleep(1200);
					Grass = 1;
					Three = 0;
				}
				else if (last == '3')
				{
					SetCursorPostion(0, 12);
					Select_format();
					SetCursorPostion(0, 11);
					Gm_line_right();
					Sleep(1200);
					Three = 0;
					Two180 = 1;
				}
				else
				{
					printf("\n\n다시 입력해주세요\n\n");
				}
			}


		while (Two180==1)
			{
				Two_180_Street_Screen();
				SetCursorPostion(0, 11);
				Gm_line_Select();
				SetCursorPostion(0, 12);
				Two_Street_Select();
				Sleep(1500);

				char To180 = '0';
				To180 = getch();

				if (To180 == '1')
				{
					SetCursorPostion(0, 12);
					Select_format();
					SetCursorPostion(0, 11);
					Gm_line_left();
					Sleep(1000);
					Two180 = 0;
					Snack = 1;
					
				}
				else if (To180 == '2')
				{
					SetCursorPostion(0, 12);
					Select_format();
					SetCursorPostion(0, 11);
					Gm_line_right();
					Sleep(1000);
					Two180 = 0;
					Grass = 1;
					Grass_Screen();
					
				}
				else 
				{
					printf("\n\n다시 입력해주세요\n\n");
				}
			}


		if (Grass==1)
			{
				Grass_Screen();
				SetCursorPostion(0, 11);
				Grass_1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_2();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_3();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_4();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_5();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_6();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_7();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_8();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Grass_9();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Ending();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Hidden_route1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Hidden_route2();
				Sleep(1500);
				Grass = 0;
				GameState = 1;
			}


		else if (Snack==1)
			{
				Snack_Screen();
				SetCursorPostion(0, 11);
				Snack_line_1_1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_1_2();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_1_3();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_2_1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_2_2();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_2_3();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_2_4_1_1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_line_2_4_1_2();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Snack_Ending();
				Sleep(1500);
				Snack = 0;
				GameState = 1;
			}


		else if (Wall==1)
			{
				Wall_Screen();
				SetCursorPostion(0, 11);
				Wall_line_1();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Wall_line_2();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Wall_line_3();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Wall_line_4();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Wall_line_5();
				Sleep(1500);
				SetCursorPostion(0, 11);
				Wall_Ending();
				Sleep(1500);
				Wall = 0;
				GameState = 1;
			}

		
		else
		{
			SetCursorPostion(0,12);
			Select_format();
			SetCursorPostion(0, 11);
			Rb_00();
			Sleep(1200);
			SetCursorPostion(0, 11);
			Hidden_line_1_1();
			Hidden_Select();
			Sleep(1200);
			char same = '0';

			same = getch();

			if (same == '1')
			{
				SetCursorPostion(0, 12);
				Select_format();
				SetCursorPostion(0, 11);
				Hidden_line_1_2_1();
				Sleep(1200);
				SetCursorPostion(0, 11);
				Hidden_1();
				Sleep(1200);
				GameState = 1;
			}
			else if (same == '2')
			{
				SetCursorPostion(0, 12);
				Select_format();
				SetCursorPostion(0, 11);
				Hidden_line_1_2_2();
				Sleep(1200);
				SetCursorPostion(0, 11);
				Hidden_1();
				Sleep(1200);
				GameState = 1;
			}
			
		}
	}
	/*게임방법*/
	else if (GameState == 2)
	{
		TutoScreen();
		system("cls");
		GameState = 1;
	}

	/*게임종료*/
	else if (GameState == 0)
	{
		ContinueGame = 0;
	}

}

void EndGame(void)
{
	GameOffScreen();
	system("cls");
}