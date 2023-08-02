#include <stdio.h>
int main() {
	int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];

	printf("√—¡°¿∫ %d¿Ã∞Ì", total);
	printf("∆Ú±’¿∫ %2.1f", (double)total / 3);

	return 0;
}