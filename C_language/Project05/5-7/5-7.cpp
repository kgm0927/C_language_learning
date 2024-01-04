#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int i;
int* input() {
	scanf("%d", &i);
	return &i;
}


int main(void) {
	int* p = NULL;
	p = input();
	printf("%d \n", *p);
	return 0;
}


