#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int input_random(int* value, int count) {
	for (int i = 0; i < count; i++) {
		value[i] = rand() % 101;
	}
	return 0;
}

int print_value(int value[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", *(value + i));
	}
	return 0;
}

int main(void) {
	int array[5] = { 0 };
	input_random(array, 5);
	print_value(&array[0], 5);
	return 0;
}