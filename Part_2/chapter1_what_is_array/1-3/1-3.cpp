#include <stdio.h>
int main() {
	int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];

	printf("������ %d�̰�", total);
	printf("����� %2.1f", (double)total / 3);

	return 0;
}