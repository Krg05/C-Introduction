#include <stdio.h>
#include "myheader.h"

void main(void) {
	printf("circum = %lf\n", circum(5.4));
	printf("100cm는 %f 인치 입니다.", cm_to_inch(100));
}