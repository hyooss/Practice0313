#include <stdio.h>

//call by value: ���� ���� ����
void swap1(int a,int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

// �ּҸ� ���޹������� ������ ������ ����
// : call by reference
void swap2(int *pa,int*pb){
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void) {
	//swap(��ȯ)
	int a = 10;
	int b = 20;
	swap1(a, b);
	printf("%d,%d\n", a, b); // ���: 10,20

	swap2(&a, &b);
	printf("%d,%d\n", a, b); // ���: 20,10

	return 0;
}