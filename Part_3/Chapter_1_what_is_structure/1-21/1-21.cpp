#include <stdio.h>

struct student
{
	char name[20];
	int money;
	struct student* left_link;
	struct student* right_link;
};

int main(void) {

	struct student stu1={"Kim",90,NULL,NULL};
	struct student stu2={"Lee",80,NULL,NULL};
	struct student stu3 = { "Goo",60,NULL,NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("%d %d \n",stu1.name,stu1.money);
	printf("%d %d \n",stu1.left_link->name,stu1.left_link->money);
	printf("%d %d \n",stu1.right_link->name,stu1.right_link->money);

	return 0;

}

//
// 
// 7행과 8행에서 구조체 student 내에 자기 참조 구조체 변수를 두 개 선언한다.
// 13행부터 15행까지에서 구조체 변수 stu1, stu2, stu3를 선언하고 동시에 초기화한다.
// 이때 포인터인 자기 참조 구조체 변수 left_link와 right_link를 NULL로 선언한다.
// 
// 
// 17행과 18행에서 stu1.left_link에 &stu2(구조체 변수 stu2의 시작 주소)를 저장하고,
// stu1.right_link에 &stu3(구조체 변수 stu3의 시작 주소)를 저장한다.
//