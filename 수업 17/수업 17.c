#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "수업 17.h"
#define DICE 6
#define LOTTO 6
#define BIN 32
#define MSG_MAIN"지금까지의 함수를 종합적으로 활용하는 예제\n"
#define MSG_MENU0"0. 프로그램 종료\n"
#define MSG_MENU1"1. 로또번호생성\n"
#define MSG_MENU2"2. 배열난수생성\n"
#define MSG_MENU3"3. 배열복사\n"
#define MSG_MENU4"4. 10진수를2진수로변환\n"
#define MSG_MENU5"5. 주사위던지기횟수세기\n"
#define MSG_MENU6"6. 최댓값인덱스찾기\n"
#define MSG_SELECT"메뉴를 선택하세요 : "
#define MSG_EXIT":프로그램을 종료합니다."
#pragma warning(disable: 4996)

void printMENU(void) {
	printf(MSG_MENU0);
	printf(MSG_MENU1);
	printf(MSG_MENU2);
	printf(MSG_MENU3);
	printf(MSG_MENU4);
	printf(MSG_MENU5);
	printf(MSG_MENU6);
	printf(MSG_SELECT);
}

int main(void) {
	int a[100];
	int b[100];
	srand(time(NULL));
	int input;
	printf(MSG_MAIN);
	do {
		printMENU();
		scanf("%d", &input);
		system("cls");
		switch (input) {
		case 1:
			initArray(a, DICE, 0);
			lottoGame(a, LOTTO);
			printArray(a, LOTTO);
			break;
		case 2:
			initArray(a, DICE, 0);
			inputArray(a, DICE);
			printArray(a, DICE);
			break;
		case 3:
			initArray(a, DICE, 0);
			inputArray(a, DICE);
			copyArray(b, a, DICE);
			printArray(b, DICE);
			break;
		case 4:
		{
			int decimal;
			printf("10진수를 입력하세요: ");
			scanf("%d", &decimal);
			initArray(a, BIN, 0);
			dec_to_bin(a, decimal, BIN);
			printArray(a, BIN);
		}
		break;
		case 5:
			initArray(a, DICE, 0);
			diceRest(a, 100);
			printArray(a, DICE);
			break;
		case 6:
			inputArray(a, DICE);
			printArray(a, DICE);
			printf("최댓값 인덱스: %d, 최댓값: %d\n", maxFindArray(a, DICE), a[maxFindArray(a, DICE)]);
			break;
		case 0:
			printf(MSG_EXIT);
			break;
		}
	} while (input != 0);
	return 0;
}