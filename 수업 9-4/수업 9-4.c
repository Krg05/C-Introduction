#include <stdio.h>
#pragma warning(disable: 4996)

void printStar(int count) {
	for (int i = 0; i < count; i++) {
		printf("*");
	}
}

int power(int n, int r) {
	int result = 1;
	for (int i = 0; i < r; i++) {
		result = result * n;
	}
	return result;
}

int fibonacci(int n) {
	int f1, f2, fn;
	f1 = f2 = 1;
	if (n == 1 || n == 2) {
		return 1;
	}
	for (int i = 3; i <= n; i++) {
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}

void exec1() {
	int line;
	scanf("%d", &line);
	for (int i = 0; i < line; i++) {
		printStar(2 * i + 1);
		printf("\n");
	}
}

void exec2() {
	int n, r, x;
	scanf("%d %d", &n, &r);
	x = power(n, r);
	printf("%d", x);
}

void exec3() {
	int n, number;
	scanf("%d", &n);
	number = fibonacci(n);
	printf("%d", number);
}

int selectMenu() {
	int menu;
	printf("=====select menu=====\n");
	printf("1. exec1 function\n");
	printf("2. exec2 function\n");
	printf("3. exec3 function\n");
	printf("-1. exit\n");
	printf("input menu: \n");

	scanf("%d", &menu);
	return menu;
}

int main(void) {
	int menu;
	while(1) {
		menu = selectMenu();
		switch (menu) {
		case 1:
			exec1();
			break;
		case 2:
			exec2();
			break;
		case 3:
			exec3();
			break;
		case -1:
			break;
		}
		if (menu == -1) {
			break;
		}
	}
	return 0;
}