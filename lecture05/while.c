#include "dino_screen.h"
#include<stdio.h> 
#include<stdlib.h>

int main()
{
	print_title_screen();
	int game_state=1;
	int input=0;
	int tuto=0;
	int tuto_state=1;
	while(game_state)
	{
		int tuto_state=1;
		printf("input(1~3)");
		scanf("%d", &input);
		if(input==3)
		{
			game_state =0;
		}
		else if(input==2)
		{
			tutorial();
			while(tuto_state)
			{
				printf("select(1,2):");
				scanf("%d" ,&tuto);
				if(tuto==1)
				{
					tuto_state=0;
					print_title_screen();
				}
				else if(tuto==2)
				{
					tutorial();
				}
				else
				{
					printf("a piece of cake\n");
				}
			}
		}
		else if (input==1)
		{
			printf("help me.\n");
		}
	}

	return 0;
}
