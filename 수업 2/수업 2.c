#include <stdio.h>
#pragma warning(disable: 4996)

int get_area(int w, int h) {
	return w * h;
}
//ū Ʋ�� ���� .. 
int main(void) {
	int w, h, area_r;
	float radius, area_c;
	printf("�簢�� ���� �Է�: ");
	scanf("%d %d", &w, &h);
	area_r = get_area(w, h);
	printf("�簢������ = %d\n", area_r);
	
	printf("������ �Է�: ");
	scanf("%f", &radius);
	area_c = 3.14 * radius * radius;
	printf("������ = %f\n", area_c);
	return 0;
}