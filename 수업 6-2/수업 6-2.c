#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int month;
    printf("���� �Է��ϼ���: ");
    scanf("%d", &month);
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("�̹� ���� 31�ϱ��� �ֽ��ϴ�.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("�̹� ���� 30�ϱ��� �ֽ��ϴ�.\n");
        break;
    case 2:
        printf("�̹� ���� 28�� �Ǵ� 29�ϱ��� �ֽ��ϴ�.\n");
        break;
    default:
        printf("�߸��� ���Դϴ�.\n");
        break;
    }
    return 0;
}