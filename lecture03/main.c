include<stdio.h>
int main()
{
	int confession;
	scanf("%d", &confession);

	printf("염소는 나무에 있는 나뭇잎의 %d장을 뜯어먹었습니다.", confession);
	

	if(confession>300)
	{
		printf("나무는 결국 머리카락이 없어지고, 염소는 폭식으로 인해 죽었습니다.");
	}

	else if (confession<1)
	{
		printf("결국 염소는  굶어죽었습니다.");
	}

		
	else
	{
	printf("염소는 배불리 나뭇잎을 뜯어먹고 돌아갔습니다.", confession);
	}

	return 0;
}
