#include <stdio.h>
#pragma warning(disable: 4996)

sum(int a, int b)
{
	return a + b;
}
min(int a, int b)
{
	return a - b;
}
mul(int a, int b)
{
	return a * b;
}
div(int a, int b)
{
	return a / b;
}
int main(void) //���� ���Ƴ� �� ����
{
	int num1;
	int num2;
	int result;

	scanf("%d %d", &num1, &num2);
	result = sum(num1, num2); //���⼭ result�� ������ �ǹ̴�?
	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	printf("%d - %d = %d\n", num1, num2, min(num1, num2));
	printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
	printf("%d / %d = %d\n", num1, num2, div(num1, num2)); //��������� �޶����� ���µ� ����? -> ���α׷� ������ ȿ���� ����

	return 0;
}