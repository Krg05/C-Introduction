#include <stdio.h>
#pragma warning(disable: 4996)
#define PI 3.14
#define COUNT 100
#define MAX 100
#define MIN 10

//�� �Լ��� �������� �޾� ���� ���̸� ��ȯ�Ѵ�.
float circle(float r)
{
	float value = 0.0;
	value = PI * r * r;
	return value;
}
void exam1()
{
	int money = 0;
	printf("���� �ֽ��ϱ�?(1-yes, 0-no)\n");
	scanf("%d", &money);
	if (money == 1)
	{
		printf("���� �Դ´�.\n");

	}
}
int main(void)
{
	float f;
	f =	circle(25);
	printf("f: %10.2f\n", f);
	return 0;
}