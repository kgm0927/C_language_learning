#include <stdio.h>

struct student {
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	struct student stu = { "20101323","Park",160 };
	struct student* p = NULL;
	struct student** PP = NULL;
}