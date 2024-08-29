#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int month;
    printf("월을 입력하세요: ");
    scanf("%d", &month);
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("이번 달은 31일까지 있습니다.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("이번 달은 30일까지 있습니다.\n");
        break;
    case 2:
        printf("이번 달은 28일 또는 29일까지 있습니다.\n");
        break;
    default:
        printf("잘못된 월입니다.\n");
        break;
    }
    return 0;
}