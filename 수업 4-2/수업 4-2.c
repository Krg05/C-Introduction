#include <stdio.h>
#pragma warning(disable: 4996)


void exam2() //exam1 보조
{
	int money = 0;
	printf("밥을 먹는다.\n얼마 있습니까?");
	scanf("%d", &money);
	if (money >= 10000)
	{
		printf("돈까스\n");
	}
	else
	{
		printf("짜장면\n");
	}
}
void exam1() //돈이 있으면? 없으면?
{
	int money = 0;
	printf("돈이 있습니까?(1-yes, 0-no)\n");
	scanf("%d", &money);
	if (money == 1)
		exam2();
	else if (money == 0)
	{
		printf("굶는다\n");
	}
}

void exam3() //시험 점수 
{
	int math, eng;
	printf("너 몇 점이니?\n");
	scanf("%d, %d", &math, &eng);
	if (math >= 80 && eng >= 80)
	{
		printf("갈비찜\n");
	}
	else if (math >= 80 || eng >= 80)
	{
		printf("굶어\n");
	}
	else if (math <= 80 && eng <= 80)
	{
		printf("너 집 나가\n");
	}
}

int main(void)
{
	exam1();
	exam3();
	return 0;
}