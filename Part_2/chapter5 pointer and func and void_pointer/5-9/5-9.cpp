#include <stdio.h>

int* func();			// �Լ��� ����

int main(void) {

	int* p = NULL;
	p = func();			// �Լ��� ȣ��

	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));
	return 0;
}

int* func() {		// �Լ��� ����
	static int array[] = { 10,20,30,40 };
	return array;
}
