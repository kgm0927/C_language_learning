#include <stdio.h>


struct student {
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};

int main(void) {
	struct student stu1 = { "20101323","Park",80,80,0 };
	struct student stu2 = { "20101324","Kim",95,80,0 };
	struct student stu3={"20101325","Lee",100,90,0};

	stu1.total = stu1.math + stu1.english;
	printf("학번 : %s, 이름: %s \n", stu1.no, stu2.name);
	printf("총점 : %lf \n", stu1.total);
}