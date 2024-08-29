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
int main(void) //전과 마렵노 아 ㅋㅋ
{
	int num1;
	int num2;
	int result;

	scanf("%d %d", &num1, &num2);
	result = sum(num1, num2); //여기서 result가 가지는 의미는?
	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	printf("%d - %d = %d\n", num1, num2, min(num1, num2));
	printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
	printf("%d / %d = %d\n", num1, num2, div(num1, num2)); //결과적으로 달라진게 없는데 뭐지? -> 프로그램 연산의 효율성 차이

	return 0;
}