#include <stdio.h>
#pragma warning(disable: 4996)
#define PI 3.14
#define COUNT 100
#define MAX 100
#define MIN 10

//이 함수는 반지름을 받아 원의 넓이를 반환한다.
float circle(float r)
{
	float value = 0.0;
	value = PI * r * r;
	return value;
}
void exam1()
{
	int money = 0;
	printf("돈이 있습니까?(1-yes, 0-no)\n");
	scanf("%d", &money);
	if (money == 1)
	{
		printf("밥을 먹는다.\n");

	}
}
int main(void)
{
	float f;
	f =	circle(25);
	printf("f: %10.2f\n", f);
	return 0;
}