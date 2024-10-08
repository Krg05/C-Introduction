#include <stdio.h>
#pragma warning(disable: 4996)

void exec_add(void) {
	int start, end, temp;
	int sum = 0;
	scanf("%d %d", &start, &end);
	if (start > end) {
		temp = end;
		end = start;
		start = temp;
	}
	for (int i = start; i <= end; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);
}
int factorial(int num) {
	int facto = 1;
	for (int i = num; i >= 1; i--) {
		facto *= i;
	}
	return facto;
}
int combination(int n, int r) {
	return factorial(n) / (factorial(n - r) * factorial(r));
}	
int main(void) {
	exec_add();
	int n, r;
	int combi;
	scanf("%d %d", &n, &r);
	combi = combination(n, r);
	printf("%d", combi);
	return 0;
}