#include <screen.h>
#include<stdio.h>

int title_screen()
{
	char screen[615];/*가로: 40 세로: 15 */

	int i = 0;
	/*첫줄 테두리*/
	while (i < 40)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리 제외 화면*/
	while (i < 573)
	{
		screen[i] = ' ';
		i = i + 1;
	}
	/*마지막줄 테두리*/
	while (i < 614)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리제외 화면*/
	screen[614] = '\0';
	screen[40] = '\n';
	screen[81] = '\n';
	screen[122] = '\n';
	screen[163] = '\n';
	screen[204] = '\n';
	screen[245] = '\n';
	screen[286] = '\n';
	screen[327] = '\n';
	screen[368] = '\n';
	screen[409] = '\n';
	screen[450] = '\n';
	screen[491] = '\n';
	screen[532] = '\n';
	screen[573] = '\n';
	/*첫줄,끝줄 제외한 테두리*/
	screen[41] = '-';
	screen[80] = '-';
	screen[82] = '-';
	screen[121] = '-';
	screen[123] = '-';
	screen[162] = '-';
	screen[164] = '-';
	screen[203] = '-';
	screen[205] = '-';
	screen[244] = '-';
	screen[246] = '-';
	screen[285] = '-';
	screen[287] = '-';
	screen[326] = '-';
	screen[328] = '-';
	screen[367] = '-';
	screen[369] = '-';
	screen[408] = '-';
	screen[410] = '-';
	screen[449] = '-';
	screen[451] = '-';
	screen[490] = '-';
	screen[492] = '-';
	screen[531] = '-';
	screen[533] = '-';
	screen[572] = '-';
	/*화면 글씨*/
	screen[96] = '용';
	screen[97] = '사';
	screen[98] = '를';
	screen[100] = '없';
	screen[101] = '애';
	screen[102] = '러';
	screen[104] = '갑';
	screen[105] = '니';
	screen[106] = '다';
	screen[107] = '.';

	screen[385] = '1';
	screen[386] = '.';
	screen[387] = '게';
	screen[388] = '임';
	screen[389] = '시';
	screen[390] = '작';

	screen[426] = '2';
	screen[427] = '.';
	screen[428] = '조';
	screen[429] = '작';
	screen[430] = '법';

	screen[467] = '3';
	screen[468] = '.';
	screen[469] = '게';
	screen[470] = '임';
	screen[471] = '종';
	screen[472] = '료';
	/*출력*/
	printf("%s\n", screen);
	return 0;
}

int turorial_screen()
{
	char screen[615];/*가로: 40 세로: 15 */

	int i = 0;
	/*첫줄 테두리*/
	while (i < 40)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리 제외 화면*/
	while (i < 573)
	{
		screen[i] = ' ';
		i = i + 1;
	}
	/*마지막줄 테두리*/
	while (i < 614)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리제외 화면*/
	screen[614] = '\0';
	screen[40] = '\n';
	screen[81] = '\n';
	screen[122] = '\n';
	screen[163] = '\n';
	screen[204] = '\n';
	screen[245] = '\n';
	screen[286] = '\n';
	screen[327] = '\n';
	screen[368] = '\n';
	screen[409] = '\n';
	screen[450] = '\n';
	screen[491] = '\n';
	screen[532] = '\n';
	screen[573] = '\n';
	/*첫줄,끝줄 제외한 테두리*/
	screen[41] = '-';
	screen[80] = '-';
	screen[82] = '-';
	screen[121] = '-';
	screen[123] = '-';
	screen[162] = '-';
	screen[164] = '-';
	screen[203] = '-';
	screen[205] = '-';
	screen[244] = '-';
	screen[246] = '-';
	screen[285] = '-';
	screen[287] = '-';
	screen[326] = '-';
	screen[328] = '-';
	screen[367] = '-';
	screen[369] = '-';
	screen[408] = '-';
	screen[410] = '-';
	screen[449] = '-';
	screen[451] = '-';
	screen[490] = '-';
	screen[492] = '-';
	screen[531] = '-';
	screen[533] = '-';
	screen[572] = '-';
	/*화면 글씨*/
	screen[94] = '오';
	screen[95] = '른';
	screen[96] = '쪽';
	screen[97] = '화';
	screen[98] = '살';
	screen[99] = '푤';
	screen[101] = '-';
	screen[102] = '>';
	screen[104] = '오';
	screen[105] = '른';
	screen[106] = '쪽';
	screen[107] = '이';
	screen[108] = '동';

	screen[136] = '왼';
	screen[137] = '쪽';
	screen[138] = '화';
	screen[139] = '살';
	screen[140] = '표';
	screen[142] = '-';
	screen[143] = '>';
	screen[145] = '왼';
	screen[146] = '쪽';
	screen[147] = '이';
	screen[148] = '동';

	screen[177] = '위';
	screen[178] = '쪽';
	screen[179] = '화';
	screen[180] = '살';
	screen[181] = '표';
	screen[183] = '-';
	screen[184] = '>';
	screen[186] = '점';
	screen[187] = '프';

	screen[217] = '아';
	screen[218] = '래';
	screen[219] = '쪽';
	screen[220] = '화';
	screen[221] = '살';
	screen[222] = '표';
	screen[224] = '-';
	screen[225] = '>';
	screen[227] = '엎';
	screen[228] = '드';
	screen[229] = '리';
	screen[230] = '기';

	screen[262] = 'z';
	screen[263] = '키';
	screen[265] = '-';
	screen[266] = '>';
	screen[268] = '공';
	screen[269] = '격';

	screen[303] = 'x';
	screen[304] = '키';
	screen[306] = '-';
	screen[307] = '>';
	screen[308] = '아';
	screen[209] = '이';
	screen[310] = '템';
	screen[311] = '사';
	screen[312] = '용';

	screen[506] = '1';
	screen[507] = '키';
	screen[508] = '를';
	screen[509] = '눌';
	screen[510] = '러';
	screen[512] = '메';
	screen[513] = '인';
	screen[514] = '화';
	screen[515] = '면';
	screen[516] = '으';
	screen[517] = '로';
	/*출력*/
	printf("%s\n", screen);
	return 0;
}

int gamedown_screen()
{
	char screen[615];/*가로: 40 세로: 15 */

	int i = 0;
	/*첫줄 테두리*/
	while (i < 40)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리 제외 화면*/
	while (i < 573)
	{
		screen[i] = ' ';
		i = i + 1;
	}
	/*마지막줄 테두리*/
	while (i < 614)
	{
		screen[i] = '-';
		i = i + 1;
	}
	/*테두리제외 화면*/
	screen[614] = '\0';
	screen[40] = '\n';
	screen[81] = '\n';
	screen[122] = '\n';
	screen[163] = '\n';
	screen[204] = '\n';
	screen[245] = '\n';
	screen[286] = '\n';
	screen[327] = '\n';
	screen[368] = '\n';
	screen[409] = '\n';
	screen[450] = '\n';
	screen[491] = '\n';
	screen[532] = '\n';
	screen[573] = '\n';
	/*첫줄,끝줄 제외한 테두리*/
	screen[41] = '-';
	screen[80] = '-';
	screen[82] = '-';
	screen[121] = '-';
	screen[123] = '-';
	screen[162] = '-';
	screen[164] = '-';
	screen[203] = '-';
	screen[205] = '-';
	screen[244] = '-';
	screen[246] = '-';
	screen[285] = '-';
	screen[287] = '-';
	screen[326] = '-';
	screen[328] = '-';
	screen[367] = '-';
	screen[369] = '-';
	screen[408] = '-';
	screen[410] = '-';
	screen[449] = '-';
	screen[451] = '-';
	screen[490] = '-';
	screen[492] = '-';
	screen[531] = '-';
	screen[533] = '-';
	screen[572] = '-';
	/*화면 글씨*/
	screen[96] = '용';
	screen[97] = '사';
	screen[98] = '를';
	screen[100] = '없';
	screen[101] = '애';
	screen[102] = '러';
	screen[104] = '갑';
	screen[105] = '니';
	screen[106] = '다';
	screen[107] = '.';

	screen[299] = '#';
	screen[300] = '#';
	screen[301] = '#';
	screen[302] = '#';
	screen[303] = '#';
	screen[304] = '#';
	screen[305] = '#';
	screen[306] = '#';
	screen[307] = '#';
	screen[308] = '#';
	screen[309] = '#';
	screen[310] = '#';
	screen[311] = '#';
	screen[312] = '#';
	screen[313] = '#';
	screen[314] = '#';
	screen[340] = '#';
	screen[355] = '#';
	screen[381] = '#';
	screen[386] = '정';
	screen[387] = '말';
	screen[389] = '게';
	screen[390] = '임';
	screen[391] = '을';
	screen[396] = '#';
	screen[422] = '#';
	screen[426] = '종';
	screen[427] = '료';
	screen[428] = '하';
	screen[429] = '시';
	screen[430] = '겠';
	screen[431] = '습';
	screen[432] = '니';
	screen[433] = '까';
	screen[437] = '#';
	screen[463] = '#';
	screen[466] = '1';
	screen[467] = '.';
	screen[468] = '네';
	screen[471] = '2';
	screen[472] = '.';
	screen[473] = '아';
	screen[474] = '니';
	screen[475] = '오';
	screen[478] = '#';
	screen[504] = '#';
	screen[505] = '#';
	screen[506] = '#';
	screen[507] = '#';
	screen[508] = '#';
	screen[509] = '#';
	screen[510] = '#';
	screen[511] = '#';
	screen[512] = '#';
	screen[513] = '#';
	screen[514] = '#';
	screen[515] = '#';
	screen[516] = '#';
	screen[517] = '#';
	screen[518] = '#';
	screen[519] = '#';

	/*출력*/
	printf("%s\n", screen);
	return 0;
}