#include<stdio.h>
#include"gameobjects.h"

/*초반 대사들*/
void Rb_1(void)
{
	printf("# |  토끼:나는 토끼다.               | #\n");
}
void Rb_2(void)
{
	printf("# |  토끼:나는 친구가 없다.          | #\n");
}
void Rb_3_1(void)
{
	printf("# |  토끼:다가가기만 해도            | #\n");
}
void Rb_3_2(void)
{
	printf("# |  토끼:다들 도망간다.             | #\n");
}
void Rb_4_1(void)
{
	printf("# |  토끼:오늘도 평소처럼            | #\n");
}
void Rb_4_2(void)
{
	printf("# |  토끼:거리를 걷고 있는데         | #\n");
}
void Rb_5_1(void)
{
	printf("# |  토끼:뒤에서 늑대가              | #\n");
}
void Rb_5_2(void)
{
	printf("# |  토끼:엄청난 속도로              | #\n");
}
void Rb_5_3(void)
{
	printf("# |  토끼:쫓아오고 있다.             | #\n");
}
void Rb_6(void)
{
	printf("# |  토끼:늑대 에게서 도망쳐야 한다. | #\n");
}


/*본격적인 게임 대사*/
void Gm_line_3_1(void)
{
	printf("# |     알맞은 선택지를 선택하여     | #\n");
}
void Gm_line_3_2(void)
{
	printf("# |     늑대에게서 도망치십시오.     | #\n");
}
void Gm_line_Select(void)
{
	printf("# |  토끼:어디로 가야하지?           | #\n");
}
void Gm_line_left(void)
{
	printf("# |  토끼:왼쪽으로 가자.             | #\n");
}
void Gm_line_right(void)
{
	printf("# |  토끼:오른쪽으로 가자.           | #\n");
}
void Gm_line_middle(void)
{
	printf("# |  토끼:가운데로 가자.             | #\n");
}
/*벽을 만나게 되면*/
void Wall_line_1(void)
{
	printf("# |  토끼:이제 안쫓아오낙!           | #\n");
}
void Wall_line_2(void)
{
	printf("# |      그는 뒤를 보면서 뛰다가     | #\n");
}
void Wall_line_3(void)
{
	printf("# |           벽에 부딪쳤다.         | #\n");
}
void Wall_line_4(void)
{
	printf("# |         엄청 쌔게 부딪쳐서       | #\n");
}
void Wall_line_5(void)
{
	printf("# |        그는 숨을 거두었다.       | #\n");
}


/*맛있는 간식*/
void Snack_line_1_1(void)
{
	printf("# |  토끼:어, 이건?                  | #\n");
}
void Snack_line_1_2(void)
{
	printf("# |  토끼:내가 평소에도              | #\n");
}
void Snack_line_1_3(void)
{
	printf("# |  토끼:먹고 싶었던 간식?!         | #\n");
}
void Snack_line_2_1(void)
{
	printf("# |  토끼:평소에 먹고싶었던건한데    | #\n");
}
void Snack_line_2_2(void)
{
	printf("# |  토끼:늑대도 멀리 있는거 같고..  | #\n");
}
void Snack_line_2_3(void)
{
	printf("# |  토끼:그냥 먹자!                 | #\n");
}
void Snack_line_2_4_1_1(void)
{
	printf("# |  토끼:와...환상적인 마...        | #\n");
}
void Snack_line_2_4_1_2(void)
{
	printf("# |    그는 그대로 숨을 거두었다.    | #\n");
}
/*엔딩 모음*/
void Wall_Ending(void)
{
	printf("# |        Bed Ending 1 : 벽쿵       | #\n");
}
void Snack_Ending(void)
{
	printf("# |        Bed Ending 2 : 독살       | #\n");
}
void Ending(void)
{
	printf("# |        Ending : 총성             | #\n");
}

/*일반엔딩 대사*/
void Grass_1(void)
{
	printf("# |  더이상 늑대가 쫓아오지 않는다.  | #\n");
}
void Grass_2(void)
{
	printf("# |  토끼:드디어...자유다!!          | #\n");
}
void Grass_3(void)
{
	printf("# |  토끼:늑대한테서 탈출했다고!     | #\n");
}
void Grass_4(void)
{
	printf("# |  토끼:어 앞에 사람들이 있네?     | #\n");
}
void Grass_5(void)
{
	printf("# |  토끼:뭐라 하는거 같은데 뭘까?   | #\n");
}
void Grass_6(void)
{
	printf("# |       사람들은 그를 보고         | #\n");
}
void Grass_7(void)
{
	printf("# |       서로 말을 하고 있다.       | #\n");
}
void Grass_8(void)
{
	printf("# |    말을 끝내고서 그를 보았다.    | #\n");
}
void Grass_9(void)
{
	printf("# |      그리고 총성이 들렸다.       | #\n");
}




/*선택지*/
void Select(void)
{
	printf("# |       1번을 눌러 게임시작        | #\n");
}
void Two_Street_Select(void)
{
	printf("# |        1.왼쪽    2.오른쪽        | #\n");
}
void Three_Street_Select(void)
{
	printf("# |  1.왼쪽    2.가운데    3.오른쪽  | #\n");
}
void Snack_Select(void)
{
	printf("# |      1.먹는다.    2.안먹는다.    | #\n");
}
void Hidden_Select(void)
{
	printf("# |        1.그래.    2.아니.        | #\n");
}

/*선택지 초기화*/
void Select_format(void)
{
	printf("# |                                  | #\n");
}

/*히든엔딩1 모음*/
void Rb_00(void)
{
	printf("# |  토끼:그런 선택지는 없는데       | #\n");
}
void Hidden_line_1_1(void)
{
	printf("# |  토끼:혹시 너도 날 무시하는거야? | #\n");
}
void Hidden_line_1_2_1(void)
{
	printf("# |  토끼:그래, 저리가.              | #\n");
}
void Hidden_line_1_2_2(void)
{
	printf("# |  토끼:됐어, 저리가 .             | #\n");
}
void Hidden_1(void)
{
	printf("# |  Hidden Ending 1 : 잘못된 선택   | #\n");
}

/*히든루트*/
void Hidden_route1(void)
{
	printf("# |     타이틀화면에서 h를 눌러      | #\n");
}
void Hidden_route2(void)
{
	printf("# |  총성이 들린 진실을 확인하시오.  | #\n");
}

/*히든엔딩2 모음*/
void Hidden_line_2_1(void)
{
	printf("# |  토끼:그래, 어짜피 도망쳐 봤자   | #\n");
}
void Hidden_line_2_2(void)
{
	printf("# |  토끼:즐겁지 않은 인생..         | #\n");
}
void Hidden_line_2_3(void)
{
	printf("# |  토끼:배고픈 늑대 한마리         | #\n");
}
void Hidden_line_2_4(void)
{
	printf("# |  토끼:도와준다 생각하고 가야겠다.| #\n");
}
void Hidden_line_2_5(void)
{
	printf("# |      그는 늑대에게 다가갔다.     | #\n");
}
void Hidden_line_2_6(void)
{
	printf("# |    그는 늑대에게 바늘에 찔리고   | #\n");
}
void Hidden_line_2_7(void)
{
	printf("# |           눈이 감겼다.           | #\n");
}
void Hidden_line_2_8(void)
{
	printf("# |  늑대:이제 쫓는 '척' 지겹네..    | #\n");
}
void Hidden_line_2_9(void)
{
	printf("# |  늑대:다른 일도 생각해볼까..     | #\n");
}
void Hidden_line_2_10(void)
{
	printf("# |  늑대:근데 자신을 토끼라고       | #\n");
}
void Hidden_line_2_11(void)
{
	printf("# |  늑대:생각하는 늑대라니          | #\n");
}
void Hidden_line_2_12(void)
{
	printf("# |  늑대:허, 지금 생각해도 웃기네.  | #\n");
}
void Hidden_line_2_13(void)
{
	printf("# |  늑대:그래도 이 굴레에서         | #\n");
}
void Hidden_line_2_14(void)
{
	printf("# |  늑대:탈출한다해도               | #\n");
}
void Hidden_line_2_15(void)
{
	printf("# |  늑대:인간에게 죽임을 당할뿐이니.| #\n");
}
void Hidden_line_2_16(void)
{
	printf("# |    그렇다, 그는 사실 늑대다.     | #\n");
}
void Hidden_line_2_17(void)
{
	printf("# |      그는 원래 범죄자였다.       | #\n");
}
void Hidden_line_2_18(void)
{
	printf("# |   하지만 반복되는 범죄로 인해    | #\n");
}
void Hidden_line_2_19(void)
{
	printf("# |     늑대들은 최후의 방법으로     | #\n");
}
void Hidden_line_2_20(void)
{
	printf("# |자신을 토끼라고 생각하게 세뇌했다.| #\n");
}
void Hidden_line_2_21(void)
{
	printf("# |   그는 매일 이 일을 반복한다.    | #\n");
}
void Hidden_line_2_22(void)
{
	printf("# |  이 굴레에서 탈출하기 전까지는.. | #\n");
}
void Hidden_2(void)
{
	printf("# |  Hidden Ending 2 : 진실          | #\n");
}