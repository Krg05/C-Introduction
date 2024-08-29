#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		dice[rand() % 6]++;
	}

	printf("주사위 10000번 던졌을 때 각 숫자가 나온 횟수:\n");
	for (int i = 0; i < 6; i++) {
		printf("%d: %d\n", i + 1, dice[i]);
	}

	return 0;
}