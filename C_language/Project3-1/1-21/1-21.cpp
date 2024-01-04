#include <stdio.h>

struct student {
	char name[20];
	int money;
	struct student* left_link;
	struct student* right_link;

};

int main(void) {
	struct student stu1 = { "Kim",90,NULL,NULL };
	struct student stu2 = { "Lee",80,NULL,NULL };
	struct student stu3 = { "Goo",60,NULL,NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.left_link->name, stu1.left_link->money);
	printf("%s %d \n", stu1.right_link->name,stu1.right_link->money);

	return 0;
}