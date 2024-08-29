#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int a;
    printf("╪Ж ют╥б: ");
    scanf("%d", &a);
    for (int i = 0; i < a / 2 + 1; i++) {
        for (int j = i; j < a / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}