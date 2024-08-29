#include <stdio.h>
#pragma warning(disable: 4996)

void exec1(void) {
	int sum = 0;
	int input = 0;
	while (1) {
		scanf("%d", &input);
		if (input == -1) {
			break;
		}
		if (input % 2 != 0) {
			continue;
		}
		if (input % 10 == 0) {
			continue;
		}
		sum += input;
	}
	printf("sum = %d\n", sum);
}

int main(void) {
	exec1();
	return 0;
}