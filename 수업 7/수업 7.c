#include <stdio.h>
#pragma warning(disable: 4996)

void printAddress(int address) {
    switch (address) {
    case 1:
        printf("seoul "); 
        break;
    case 2:
        printf("kyungki "); 
        break;
    case 3:
        printf("cheonan "); 
        break;
    default:
        printf("wrong address"); 
        break;
    }

}
void printGender(int gender) {
    if (gender == 1) {
        printf("male ");
    }
    else if (gender == 2) {
        printf("female ");
    }
    else {
        printf("wrong address");
    }
}
void printAge(int age) {
    if (age < 10) {
        printf("십대 미만\n");
    }
    else if (age < 20) {
        printf("십대 \n ");
    }
    else if (age < 30) {
        printf("이십대 \n ");
    }
    else {
        printf("30대이상\n");
    }
}
void exec1() {
    int add, gender, age;
    scanf("%d%d%d", &add, &gender, &age);
    printAddress(add);
    printGender(gender);
    printAge(age);
}
void exec2(int start, int end) {
    int num = start;
    while (num <= end) {
        printf("%d ", num);
        num++;
    }
}
void exec3() {
    int height;
    printf("도형의 높이를 입력하세요: ");
    scanf("%d", &height);

    printf("삼각형:\n");
    int row = 1;
    while (row <= height) {
        int col = 1;
        while (col <= row) {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
    }

    printf("\n사각형:\n");
    row = 1;
    while (row <= height) {
        int col = 1;
        while (col <= height) {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
    }
}

int main() {
    int cont = 1;
    while (cont) {
        exec1();
        exec2(3, 15);
        exec3();
        printf("continue? 1- yes, 0- exit: ");
        scanf("%d", &cont);
    }
    return 0;
}