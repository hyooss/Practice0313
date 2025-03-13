#include <stdio.h>

int add(int a,int b) {
	int c = a + b;
	return c;
}

int main(void) {
	int a = 10; b = 20;
	int c = add(a, b);
	printf("add=%d\n", c);
	return 0;
}