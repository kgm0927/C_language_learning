#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];// 멤버 변수로 배열 선언

};

int main(void) {
	int i = 0;
	struct student stu;

	//stu.no = "20101323";// 에러 발생
	//stu.name = "Park";	// 에러 발생
	printf("학번 : %s, 이름: %s \n", stu.no, stu.name);

	return 0;

}

//
// 
// 14행과 15행에서 에러가 발생한다. 아무 문제가 없어 보이지만, 주의 깊게 보면 no와 name은 배열
// 이름이다. 배열 이름은 배열의 시작 주소인데 시작 주소에 문자열을 저장하고 있으므로 당연히
// 에러가 발생한다.
//