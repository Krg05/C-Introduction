#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		dice[rand() % 6]++;
	}

	printf("�ֻ��� 10000�� ������ �� �� ���ڰ� ���� Ƚ��:\n");
	for (int i = 0; i < 6; i++) {
		printf("%d: %d\n", i + 1, dice[i]);
	}

	return 0;
}