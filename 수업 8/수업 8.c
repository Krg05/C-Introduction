#include <stdio.h>
#pragma warning(disable: 4996)

void exec1() {
	int sum1 = 0;
	int input1 = 1;

	while (input1 != 0) {
		printf("숫자 입력: ");
		scanf("%d", &input1);

		if (input1 > 0) {
			sum1 += input1;
			break;
		}
		else {
			sum1 -= input1;
			continue;
		}
	}

	printf("최종 합계: %d\n", sum1);
}

void exec2() {
	int cont1 = 1;
	int sum2 = 0;
	while (cont1) {
		int input2;
		scanf("%d", &input2);
		sum2 += input2;
		printf("%d\n", sum2);
		printf("continue? 1- yes, 0- exit: ");
		scanf("%d", &cont1);
	}
	printf("반복 종료, sum 출력: %d", sum2);
}

void exec3() {
	int menu;
	do {
		scanf("%d", &menu);
		if (menu != 1 && menu != 2) {
			printf("1, 2중 입력\n");
		}
	} while (menu != 1 && menu != 2);
}

void exec4() {
	int count = 0;

	while (count < 5) {
		printf("hello world\n");
		count++;
	}
}



int main(void) {
	int cont2 = 1;
	while (cont2) {
		printf("exec1 출력\n");
		exec1();
		printf("\nexec2 출력\n");
		exec2();
		printf("\nexec3 출력\n");
		exec3();
		printf("\nexec4 출력\n");
		exec4();
		printf("continue? 1- yes, 0- exit: ");
		scanf("%d", &cont2);
	}
	return 0;
}