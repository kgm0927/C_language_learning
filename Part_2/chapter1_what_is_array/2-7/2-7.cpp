#include <stdio.h>
int main(void) {
	int array[2][2] = { 10,20,30,40 };

	printf("%x %x \n", array, array + 0);
	printf("%x \n", array + 1);

	return 0;
}