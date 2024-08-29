#include <stdio.h>
#pragma warning(disable: 4996)

int get_area(int w, int h) {
	return w * h;
}
//큰 틀을 봐라 .. 
int main(void) {
	int w, h, area_r;
	float radius, area_c;
	printf("사각형 정보 입력: ");
	scanf("%d %d", &w, &h);
	area_r = get_area(w, h);
	printf("사각형면적 = %d\n", area_r);
	
	printf("반지름 입력: ");
	scanf("%f", &radius);
	area_c = 3.14 * radius * radius;
	printf("원면적 = %f\n", area_c);
	return 0;
}