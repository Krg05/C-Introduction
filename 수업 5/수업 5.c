#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 1)
	{
		printf("�������");
	}
	else if(a == 2)
	{
		printf("������");
	}
	else
	{
		printf("�泲����");
	}

	if (b == 1)
	{
		printf("����");
	}
	else
	{
		printf("����");
	}

	if(c < 10)
	{
		printf("10�� �̸�");
	}
	else if(c >= 10 && c < 20)
	{
		printf("10��");
	}
	else if (c >= 20 && c < 30)
	{
		printf("20��");
	}
	else if(c >= 30)
	{
		printf("30�� �̻�");
	}

	return 0;
}