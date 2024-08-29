#include <stdio.h> 
#pragma warning(disable: 4996)

int main() {
    int score;
    printf("당신의 점수는 몇점입니까?\n");
    scanf("%d", &score);
    printf("수고하셨습니다.\n");
    if (score >= 90) {
        printf("A 등급입니다.\n");
    }
    else if (score >= 80) {
        printf("B 등급입니다.\n");
    }
    else if (score >= 70) {
        printf("C 등급입니다.\n");
    }
    else if (score >= 60) {
        printf("D 등급입니다.\n");
    }
    else {
        printf("F 등급입니다.\n");
    }
    return 0;
}