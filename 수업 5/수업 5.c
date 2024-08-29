#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 1)
	{
		printf("서울거주");
	}
	else if(a == 2)
	{
		printf("경기거주");
	}
	else
	{
		printf("충남거주");
	}

	if (b == 1)
	{
		printf("남자");
	}
	else
	{
		printf("여자");
	}

	if(c < 10)
	{
		printf("10대 미만");
	}
	else if(c >= 10 && c < 20)
	{
		printf("10대");
	}
	else if (c >= 20 && c < 30)
	{
		printf("20대");
	}
	else if(c >= 30)
	{
		printf("30대 이상");
	}

	return 0;
}