#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "¼ö¾÷ 16.h"

int main(void) {
    int lotto[6] = { 0 };
    srand(time(NULL));
    lottoGame(lotto, 6);
    printArray(lotto, 6);
    return 0;
}