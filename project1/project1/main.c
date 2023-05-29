#include<screen.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	title_screen();
	int game_state = 1;
	int input = 0;
	int tuto = 0;
	int tuto_state = 1;
	while (game_state)
	{
		if (input == 3)
		{
			gamedown_screen();
			scnaf(% d, &input);
				if (input == 1)
				{
					game_state = 0;
				}
				else if (input == 2)
				{
					title_screen();
				}
				else
				{
					printf("다시 입력해주십시오");
				}
		}
		else if (input == 2)
		{
			tutorial_screen();
			while (tuto_state)
			{
				printf("select(1,2):");
				scanf("%d", &input);
				if (input == 1)
				{
					tuto_state = 0;
					title_screen();
				}
				else
				{
					printf("다시 입력해주십시오\n");
				}
			}
		}
		else if (input == 1)
		{
			printf("help me.\n");
		}
	}

	return 0;
	}
}
