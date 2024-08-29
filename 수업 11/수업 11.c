#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main(void) {
	double result;
	result = sin(30 * (M_PI / 180));
	srand(time(NULL));
	printf("sin 30 = %lf\n", result);
	printf("random = %d\n", rand());


	return 0;
}