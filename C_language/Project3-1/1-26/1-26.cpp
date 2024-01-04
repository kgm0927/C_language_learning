#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point* function(void) {
	static struct point call = { 10,20 };
	return &call;
}

int main(void) {
	struct point* p;
	p = function();
	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);

	return 0;
}