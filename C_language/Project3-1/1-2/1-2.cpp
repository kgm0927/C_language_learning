#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct point {
	int a;
	double b;
};

int main(void) {
	struct point g1;

	scanf("%d %lf", &g1.a, &g1.b);

	printf("g1.a의 값: %d \n", g1.a);
	printf("g1.b의 값: %lf \n", g1.b);

	return 0;


}