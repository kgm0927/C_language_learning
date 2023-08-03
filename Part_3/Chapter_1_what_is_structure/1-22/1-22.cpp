#include <stdio.h>

struct point
{
	int x;
	int y;
};
struct student
{
	char name[20];
	struct point* link;
};

int main(void) {

	struct student stu1 = {"Kim",NULL};
	struct student stu2 = { "Lee",NULL };
	struct point p1 = { 30,40 };
	struct point p2 = { 60,80 };

	stu1.link = &p1;
	stu2.link = &p2;

	printf("%s %d %d \n",stu1.name,stu1.link->x,stu1.link->y);
	printf("%s %d %d \n",stu2.name,stu2.link->x,stu2.link->y);

	return 0;
}

//
// 
// 3행부터 7행까지에서 point라는 이름의 구조체를 정의한다.
// 
// 8행부터 12행가지의 student라는 이름의 구조체를 정의한다. 11행에서 포인터인 외부참조 구조체 변수 link를 선언한다.
// 즉, 구조체 student에서 구조체 point를 외부 참조하는 변수를 선언한다.
// 
// 16,17행에서 구조체 변수 stu1과 stu2를 선언하고 동시에 초기화한다.
// 
// 18, 19행에서 구조체 구조체 변수 p1과 p2를 선언하고 동시에 초기화한다.
// 
// 
// 21, 22행에서 stu1.link에 &p1(구조체 변수 p1의 주소)를 저장하고, stu2.link에 &p2(구조체 변수 p2의 주소)를
// 저장한다. 이처럼 구조체 정의부 내에 다른 이름의 구조체도 참조할 수 있다.
//
