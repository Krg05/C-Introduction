#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int year;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		year = 1;
	}
	else
	{
		year = 0;
	}

	printf("%d", year);
	return 0;
}
