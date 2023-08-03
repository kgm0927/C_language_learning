#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	char no[10];
	char name[10];
};

int main(void) {
	
	int i = 0;
	struct student stu;

	strcpy(stu.no,"20101323");
	strcpy(stu.name, "Park");
	printf("학번 : %s, 이름 : %s \n", stu.no, stu.name);

	return 0;
}

//
// 2행에서 #include <string.h>를 추가했다. 헤더 파일 stdio.h를 가지고 scanf() 함수나
// printf() 함수를 사용할 수 있는 것첢, 헤더 파일 string.h를 가족 문자열 처리 함수를
// 사용할 수 있다.
// 
// 6행과 7행에서 구조체의 멤버 변수로 문자열 배열을 선언했다.
// 15행과 16행에서 strcpy() 함수를 사용해서 문자열을 저장한다.
// 
//


