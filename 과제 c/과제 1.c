#include <stdio.h>
#pragma warning(disable: 4996)

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}

int getNumber()
{
	int num = 0;
	printf("input number: ");
	scanf("%d", &num);
	return num;
}
void printNumber(int num)
{
	printf("result(add) = %d\n", num);
}
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	num1 = getNumber();
	num2 = getNumber();
	sum = add(num1, num2);
	printNumber(sum);
	sum = sub(num1, num2);
	printNumber(sum);
	sum = mul(num1, num2);
	printNumber(sum);

	return 0;
}#include <stdio.h>
#pragma warning(disable: 4996)

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}

int getNumber()
{
	int num = 0;
	printf("input number: ");
	scanf("%d", &num);
	return num;
}
void printNumber(int num)
{
	printf("result(add) = %d\n", num);
}
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	num1 = getNumber();
	num2 = getNumber();
	sum = add(num1, num2);
	printNumber(sum);
	sum = sub(num1, num2);
	printNumber(sum);
	sum = mul(num1, num2);
	printNumber(sum);

	return 0;
}