#include <stdio.h>
#pragma warning(disable: 4996)


void exam2() //exam1 ����
{
	int money = 0;
	printf("���� �Դ´�.\n�� �ֽ��ϱ�?");
	scanf("%d", &money);
	if (money >= 10000)
	{
		printf("���\n");
	}
	else
	{
		printf("¥���\n");
	}
}
void exam1() //���� ������? ������?
{
	int money = 0;
	printf("���� �ֽ��ϱ�?(1-yes, 0-no)\n");
	scanf("%d", &money);
	if (money == 1)
		exam2();
	else if (money == 0)
	{
		printf("���´�\n");
	}
}

void exam3() //���� ���� 
{
	int math, eng;
	printf("�� �� ���̴�?\n");
	scanf("%d, %d", &math, &eng);
	if (math >= 80 && eng >= 80)
	{
		printf("������\n");
	}
	else if (math >= 80 || eng >= 80)
	{
		printf("����\n");
	}
	else if (math <= 80 && eng <= 80)
	{
		printf("�� �� ����\n");
	}
}

int main(void)
{
	exam1();
	exam3();
	return 0;
}