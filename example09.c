#include <stdio.h>

void get_area(int *pw, int *ph,int *pa) {
	*pa = *pw * *ph;
}

void display_area(int* pa) {
	printf("�簢�� ����: %d\n", *pa);
}

int main(void) {
	//�簢�� ���� ���ϱ�
	int width, height;
	int area;
	printf("����: ");
	scanf_s("%d", &width);
	printf("����: ");
	scanf_s("%d", &height);

	get_area(&width, &height,&area);
	display_area(&area);
	return 0;
}