#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "���� 17.h"
#define DICE 6
#define LOTTO 6
#define BIN 32
#define MSG_MAIN"���ݱ����� �Լ��� ���������� Ȱ���ϴ� ����\n"
#define MSG_MENU0"0. ���α׷� ����\n"
#define MSG_MENU1"1. �ζǹ�ȣ����\n"
#define MSG_MENU2"2. �迭��������\n"
#define MSG_MENU3"3. �迭����\n"
#define MSG_MENU4"4. 10������2�����κ�ȯ\n"
#define MSG_MENU5"5. �ֻ���������Ƚ������\n"
#define MSG_MENU6"6. �ִ��ε���ã��\n"
#define MSG_SELECT"�޴��� �����ϼ��� : "
#define MSG_EXIT":���α׷��� �����մϴ�."
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
			printf("10������ �Է��ϼ���: ");
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
			printf("�ִ� �ε���: %d, �ִ�: %d\n", maxFindArray(a, DICE), a[maxFindArray(a, DICE)]);
			break;
		case 0:
			printf(MSG_EXIT);
			break;
		}
	} while (input != 0);
	return 0;
}