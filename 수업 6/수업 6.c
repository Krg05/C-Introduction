#include <stdio.h> 
#pragma warning(disable: 4996)

int main() {
    int score;
    printf("����� ������ �����Դϱ�?\n");
    scanf("%d", &score);
    printf("�����ϼ̽��ϴ�.\n");
    if (score >= 90) {
        printf("A ����Դϴ�.\n");
    }
    else if (score >= 80) {
        printf("B ����Դϴ�.\n");
    }
    else if (score >= 70) {
        printf("C ����Դϴ�.\n");
    }
    else if (score >= 60) {
        printf("D ����Դϴ�.\n");
    }
    else {
        printf("F ����Դϴ�.\n");
    }
    return 0;
}