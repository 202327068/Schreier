#include<stdio.h>
int print_title_screen()
{
	printf("#####################################\n");
	printf("##                                 ##\n");
	printf("##             Dino Run            ##\n");
	printf("##             - VO.1-             ##\n");
	printf("##                                 ##\n"); 
	printf("##                                 ##\n");
	printf("##   1. Game start                 ##\n");
	printf("##   2. How to play                ##\n");
	printf("##   3. Exit                       ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("#####################################\n");
	return 0;
}
	int tutorial(){
	printf("#####################################\n");
	printf("##     This a just simple game     ##\n");
	printf("##       so what do you can?       ##\n");
	printf("##  I'll tell you the control key. ##\n");
	printf("##     take care of your self.     ##\n");
	printf("##    but actually I don't know    ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##          Retun to menu?         ##\n");
	printf("##           (1.yes 2.no)          ##\n");
	printf("#####################################\n");
	return 0;
	}
int main()
{
	print_title_screen();
	int game_state = 1;
	int input=0;
	int tuto=2;
	while(game_state)
	{
		int tuto_state = 1;
		printf("input(1~3)>");
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
		if(input==2){
			tutorial();
			while(tuto_state)
			{
				printf("input1,2:");
				scanf("%d", &tuto);
				if(tuto==1)
				{
					tuto_state=0;
					print_title_screen();
				}
				else if(tuto==2)
				{
					tutorial();
				}
			}

		}
	}
	
	return 0;
}
