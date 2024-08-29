#include <stdio.h>
#pragma warning(disable: 4996)

int isLeafYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	if (isLeafYear(year))
	{
		printf("윤년입니다.\n");
	}
	else
	{
		printf("평년입니다.\n");
	}
	return 0;
}